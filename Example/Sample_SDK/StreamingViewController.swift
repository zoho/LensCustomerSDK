//
//  StreamingControllerViewController.swift
//  Sample_SDK
//
//  Created by kishore Kumar on 09/07/20.
//  Copyright © 2020 Kishore Kumar. All rights reserved.
//

import UIKit
import Lens
import ZohoLensArLibrary
import ZAUtils
class StreamingViewController: UIViewController {

    @IBOutlet weak var exitButton: UIButton!
    var connectionParam:ConnectionParam!
    var lensObject:LensCustomer?
    var arView:ARRenderView?
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
        
        lensObject = LensCustomer.init(connectionParam: self.connectionParam, name: "email@example.com")
        lensObject?.startSession(inArMode: ARRenderView.checkARKitCompatibility())
        lensObject?.lensSignallingDelegate = self
        
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
    
    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destination.
        // Pass the selected object to the new view controller.
    }
    */

}

extension StreamingViewController:LensSignallingProtocol {
    
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
    
    func onSessionValidationDone() {
        
    }
    
    
}
