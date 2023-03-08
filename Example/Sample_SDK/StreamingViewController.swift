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

enum MenuIdentifier: String {
    case video, audio, liveText, ScanQR, swapCamera, freeze
}

struct Menu {
    var title: String
    var identifier: String
    
    init(title: String,identifier: String ) {
        self.title = title
        self.identifier = identifier
    }
}

class  MenuCollectionViewCell: UICollectionViewCell {
    
    @IBOutlet weak var title: UILabel!
    
    func configure(menu: Menu) {
        self.layer.borderWidth = 2
        self.title.text = menu.title
    }
}

struct TalkSessionSetup {
    var isEnableSpeaker: Bool = true
    var isShowFrontCamera: Bool = false
    var isOnFlashLight: Bool = false
    var isMuteVideo: Bool = false
    var isMuteAudio: Bool = false
    var sys_id:String = ""
    init() {}
    
}

class StreamingViewController: UIViewController {
    
    @IBOutlet weak var exitButton: UIButton!
    @IBOutlet weak var menuCollectionView: UICollectionView!
    @IBOutlet weak var loaderView: UIView!
    @IBOutlet weak var noDataView: UIView!
    
    weak var weakSelf: UIViewController? {
        return self
    }
    var connectionParam:CustomerSessionParams!
    var lensObject:LensCustomer?
    var arView:ARRenderView?
    let menu = [Menu(title: "Video", identifier: MenuIdentifier.video.rawValue),
                Menu(title: "Mute Audio", identifier: MenuIdentifier.audio.rawValue),
                Menu(title: "Freeze", identifier: MenuIdentifier.freeze.rawValue),
                Menu(title: "Live Text", identifier: MenuIdentifier.liveText.rawValue),
                Menu(title: "Scan(QR/Barcode)", identifier: MenuIdentifier.ScanQR.rawValue),
                Menu(title: "Swap Camera", identifier: MenuIdentifier.swapCamera.rawValue)]
    internal var talkSetup: TalkSessionSetup = TalkSessionSetup()
    internal var isARsupport = true
    
    override func viewDidLoad() {
        super.viewDidLoad()
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

extension StreamingViewController: LensSignallingProtocol {
    func refreshBottomMenu() {
    }
    
    func didChangeAR(tracking state: ARCamera.TrackingState) {
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
        
        self.view.insertSubview(renderView, belowSubview: exitButton)
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


extension StreamingViewController: UICollectionViewDataSource, UICollectionViewDelegate {
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return self.menu.count
    }
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        let cell = collectionView.dequeueReusableCell(withReuseIdentifier: "menuCell", for: indexPath) as! MenuCollectionViewCell
        cell.configure(menu: self.menu[indexPath.row])
        return cell
    }
    
    func collectionView(_ collectionView: UICollectionView, didSelectItemAt indexPath: IndexPath) {
        let menu = self.menu[indexPath.row]
        switch MenuIdentifier(rawValue: menu.identifier) {
        case .video:
            
            if !(self.lensObject?.getStreamType == .up) {
                
                let alert = UIAlertController(title: "Share Camera", message: "By clicking Share, you request the primary technician to allow you to share your camera stream.",preferredStyle: UIAlertController.Style.alert)
                alert.addAction(UIAlertAction(title: "Cancel", style: UIAlertAction.Style.default, handler: { _ in
                    //Cancel Action
                }))
                alert.addAction(UIAlertAction(title: "Yes", style: UIAlertAction.Style.default, handler: {(_: UIAlertAction!) in
                    self.lensObject?.shareCamera()
                }))
                self.present(alert, animated: true, completion: nil)
            } else {
                let alert = UIAlertController(title: "Stop Camera", message: "Would you like to stop sharing your camera stream?",preferredStyle: UIAlertController.Style.alert)
                alert.addAction(UIAlertAction(title: "Cancel", style: UIAlertAction.Style.default, handler: { _ in
                    //Cancel Action
                }))
                alert.addAction(UIAlertAction(title: "Yes", style: UIAlertAction.Style.default, handler: {(_: UIAlertAction!) in
                    self.lensObject?.stopCamera()
                }))
                self.present(alert, animated: true, completion: nil)
            }
            
            print("")
            
        case .audio:
            let cell = collectionView.cellForItem(at: indexPath) as? MenuCollectionViewCell
            //Unmute audio
            if self.talkSetup.isMuteAudio {
                self.lensObject?.unmuteAudio()
                self.talkSetup.isMuteAudio = false
                cell?.title.text = "Mute Audio"
            } else {
                //Mute audio
                self.lensObject?.muteAudio()
                self.talkSetup.isMuteAudio = true
                cell?.title.text = "Unmute Audio"
            }
            
            print("")
        case .freeze:
            let cell = collectionView.cellForItem(at: indexPath) as? MenuCollectionViewCell
            if self.talkSetup.isMuteVideo {
                self.lensObject?.unmuteVideo()
                self.talkSetup.isMuteVideo = false
                cell?.title.text = "Freeze"
            } else {
                self.lensObject?.muteVideo()
                self.talkSetup.isMuteVideo = true
                cell?.title.text = "Unfreeze"
            }
            break
            
        case .liveText:
            self.lensObject?.requestOCR()
            DispatchQueue.main.async {
                self.loaderView.isHidden = false
            }
            print("")
            
        case .ScanQR:
            self.lensObject?.requestQR(retryMode: .RETRY_UNTIL_TIME_LIMIT)
            DispatchQueue.main.async {
                self.loaderView.isHidden = false
            }
            break
            
        case .swapCamera:
            if self.lensObject?.isCameraFacingFront ?? false {
                self.lensObject?.swapToBackCamera()
            } else {
                self.lensObject?.swapToFrontCamera()
            }
            print("")
            
        default:
            break
        }
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize {
        return CGSize(width: 150, height: 50)
    }
}


extension StreamingViewController: OtherActionProtocol {
    
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


extension StreamingViewController: ARProtocol {
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

extension StreamingViewController: ChatProtocol {
    func didReceive(_ chat: LensSDK.Chat) {
        
    }
    
    
}
