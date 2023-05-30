//
//  StreamingControllerViewController.swift
//  Sample_SDK
//
//  Created by kishore Kumar on 09/07/20.
//  Copyright © 2020 Kishore Kumar. All rights reserved.
//

import UIKit
import LensSDK
import ARKit
class StreamingViewControllerForSwiftUI: UIViewController {
    
    @IBOutlet weak var loaderView: UIView!
    @IBOutlet weak var noDataView: UIView!
    
    weak var weakSelf: UIViewController? {
        return self
    }
    var connectionParam:CustomerSessionParams!
    var lensObject:LensCustomer?
    var arView:ARRenderView?

    internal var talkSetup: TalkSessionSetup = TalkSessionSetup()
    internal var isARsupport = true
    
    static  func getViewcontroller(param:CustomerSessionParams?,isARSupported:Bool) -> StreamingViewControllerForSwiftUI {
        
        let controller = UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "streamingcontroller_swiftui") as! StreamingViewControllerForSwiftUI
      controller.connectionParam = param
      controller.talkSetup.isMuteAudio = false
      controller.isARsupport = isARSupported
      controller.isModalInPresentation = true
        return controller
        
    }
    override func viewDidLoad() {
        super.viewDidLoad()
        
        if connectionParam == nil {
            return
        }
        // Do any additional setup after loading the view.
        let lens = LensCustomer.init(connectionParam: self.connectionParam, name: "Mr.Abc", email: "abcd@example.com", isARSupported: isARsupport)
        lensObject = lens
        lensObject?.lensSignallingDelegate = self
        lensObject?.otherActionDelegate = self
        lensObject?.arDelegate = self
        lensObject?.chatDelegate = self
        lensObject?.startSession()
        if isARsupport {
            (self.view.viewWithTag(100) as? UIButton)?.isHidden = false
            (self.view.viewWithTag(101) as? UIButton)?.isHidden = false
        } else {
            (self.view.viewWithTag(100) as? UIButton)?.isHidden = true
            (self.view.viewWithTag(101) as? UIButton)?.isHidden = true
        }
    }
    
    deinit {
    }
    
    
    @IBAction func exit(_ sender: Any) {
        lensObject?.closeRoom()
    }
    
    @IBAction func onDisablePointCloud(_ sender: UISwitch) {
        arView?.renderPointCloud(sender.isOn)
    }
    
    @IBAction func clearAllAnnotaions(_ sender: Any) {
        arView?.removeAllCustomerAnchors()
    }
    
    @IBAction func undoLastAnnotaion(_ sender: Any) {
        arView?.removeLastCustomerAnchor()
    }
    
    /*
     // MARK: - Navigation
     
     // In a storyboard-based application, you will often want to do a little preparation before navigation
     override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
     // Get the new view controller using segue.destination.
     // Pass the selected object to the new view controller.
     }
     */
}

extension StreamingViewControllerForSwiftUI: LensSignallingProtocol {
    
    func refreshBottomMenu() {
    }
    
    func didChangeARState(tracking state: ARCamera.TrackingState) {
        switch state {
            
        case .notAvailable: break
            
        case .limited(_): break
            
        case .normal: break
            
        }
    }
    
    func onScanSuccess(scanResult: ScanModel) {
        
        DispatchQueue.main.async {
            self.loaderView.isHidden = true
        }
        
        switch scanResult {
        case .OCR(let ocrText, _):
            DispatchQueue.main.async {
                let alert = UIAlertController(title: "OCR Text", message: ocrText, preferredStyle: UIAlertController.Style.alert)
                alert.addAction(UIAlertAction(title: "Done", style: UIAlertAction.Style.default, handler: { _ in
                    //Cancel Action
                }))
                
                self.present(alert, animated: true, completion: nil)
            }
        case .QR(let text):
            DispatchQueue.main.async {
                let alert = UIAlertController(title: "QR Text", message: text, preferredStyle: UIAlertController.Style.alert)
                alert.addAction(UIAlertAction(title: "Done", style: UIAlertAction.Style.default, handler: { _ in
                    //Cancel Action
                }))
                
                self.present(alert, animated: true, completion: nil)
            }
            break
        case .BARCODE(_): break
            
        @unknown default:
            break
        }
    }
    
    func onScanFailure(scanError: ScanError) {
        
        DispatchQueue.main.async {
            self.loaderView.isHidden = true
            let alert = UIAlertController(title: "Error", message: scanError.errorMessage, preferredStyle: UIAlertController.Style.alert)
            alert.addAction(UIAlertAction(title: "Close", style: UIAlertAction.Style.default, handler: { _ in
                //Cancel Action
            }))
            
            self.present(alert, animated: true, completion: nil)
        }
    }
    
    
    func didChange(_ participant: Participant) {
    }
    
    func renderingView(_ view: UIView?) {
        guard let renderView = view else {
            return
        }
        noDataView.isHidden = true
        self.view.insertSubview(renderView, at: 0)
        renderView.translatesAutoresizingMaskIntoConstraints = false
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "H:|-0-[subview]-0-|", options: .directionLeadingToTrailing, metrics: nil, views: ["subview": renderView]))
        self.view.addConstraints(NSLayoutConstraint.constraints(withVisualFormat: "V:|-0-[subview]-0-|", options: .directionLeadingToTrailing, metrics: nil, views: ["subview": renderView]))
        
        arView = self.lensObject?.arRenderView
    }
    
    
    func didChangeLensConnectionState(state: AssisLensStates) {
        switch state {
        case .connectionCompleted:
            //completed
            self.lensObject?.speakerOn()
            break
        case .disconnected(let error):
            guard let lenserror = error as? AssisLensStates.AssistLensDisconnectState else {
                print(error?.localizedDescription ?? "empty")
                return
            }
            switch lenserror {
            case .customerEndSession, .technicianEndSession:
                DispatchQueue.main.async {
                    self.dismiss(animated: true, completion: nil)
                }
                
            default:
                break
            }
            print(lenserror)
        case .socketConnected:
            //Connection started to establised.
            break
        default:
            break
        }
    }
}



extension StreamingViewControllerForSwiftUI: OtherActionProtocol {
    func onFreezeSuccess() {
       print("Freeze Success")
    }
    
    func onFreezeFailure() {
        print("Freeze Failure")
    }
    
    func onUnfreezed() {
        print("Un Freeze")
    }
    
    func onVideoStateChanged(status: Bool) {
        DispatchQueue.main.async {
            if status {
                self.noDataView.isHidden = true
            } else {
                self.noDataView.isHidden = false
            }
        }
    }
    
    func onTechnicianPerform(action: TechnicianAction) {
        switch action {
            
        case .snapshot_taken: break
            
        case .video_pause: break
            
        case .video_play: break
            
        case .audio_muted: break
            
        case .audio_unmuted: break
            
        @unknown default: break
            
        }
    }
    
    public var isARSupported: Bool {
        self.isARsupport
    }
    public var isCustomerVideoMuted: Bool {
        return self.talkSetup.isMuteVideo
    }
    
    func onShareCameraResponse(action: ShareCameraTechAction, participant: Participant?) {
        performInMainThread {
            switch action {
            case .cameraStreamRemoved:
                
                //If feezed state, remove none streaming lottie.
                if !(self.lensObject?.isFreezedState ?? false) {
                    self.noDataView.isHidden = false
                } else {
                    self.noDataView.isHidden = true
                }
                
                self.refreshBottomMenu()
                self.talkSetup.isMuteVideo = false
                break
                
            case .cameraStreamChange:
                self.refreshBottomMenu()
                self.talkSetup.isMuteVideo = false
                self.noDataView.isHidden = true
                break
                
            case .RequestApproved:
                
                self.noDataView.isHidden = true
                break
                
            case .RequestRejected:
                break
                
            case .RequestWaiting:
                break
            @unknown default:
                break
            }
        }
    }
    
    func showNotificationBanner(msg: String) {
        print(msg)
    }
    
}

extension StreamingViewControllerForSwiftUI: ARProtocol {
    func onArCommentsReceived(annotationNode: LensSDK.AnnotationNotify) {
        print("Annotation Comments Received : \(String(describing: annotationNode.notes?.first?.data))")
    }
    
    func onAnchorSelectionChanged(annotationId: String, state: LensSDK.AnnotationSelection, triggerId: String) {
        print("Annotation Selected : \(state == .ar_selected) ID: \(annotationId)")
        
    }
    
    func onAnchorPlaced(annotationId: String) {
        print("Annotation Placed : \(annotationId)")
        print("Annotation List: \(String(describing: self.lensObject?.arNodesNotifyList))")
    }
    
    func onAnchorRemoved(annotationId: String) {
        print("Annotation Removed : \(annotationId)")
        print("Annotation List: \(String(describing: self.lensObject?.arNodesNotifyList))")
    }
    
}

extension StreamingViewControllerForSwiftUI: ChatProtocol {
    func didReceive(_ chat: LensSDK.Chat) {
        
    }
    
    
}




