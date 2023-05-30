//
//  ViewController.swift
//  Sample_SDK
//
//  Created by kishore Kumar on 08/07/20.
//  Copyright © 2020 Kishore Kumar. All rights reserved.
//

import UIKit
import LensSDK
class ViewController: UIViewController {
    
    @IBOutlet weak var sessionID: UITextField!
    @IBOutlet weak var arSwitch: UISwitch!
    
    var param:CustomerSessionParams!
    override func viewDidLoad() {
        super.viewDidLoad()
        sessionID.text = "763909101"
    }
    
    @IBAction func start(_ sender: Any) {
        
        if let id = sessionID.text {
            let token = "wSsVR60jrBb1Xfx7njX+db07kQgEVQikEUt1ilP06377GvuWp8dtkUDIBFX0H/lKGDRrEDIU9r17mB0D0mJcio8omwlUXSiF9mqRe1U4J3x1p7/ukj7DWm1dkxOILIoNxAVimg=="
            
            LensCustomer.validateSessionForSDK(sessionKey: id, token: token, base: URL.init(string: "https://lenslab.zoho.com")!) { (validation) in
                
                switch validation {
                case .validCustomer(let param):
                    //
                    self.param = param
                    DispatchQueue.main.async {
                        let controller = StreamingViewController.getViewcontroller(param: param, isARSupported: true)
                                controller.talkSetup.isMuteAudio = false
                        controller.isARsupport = self.arSwitch.isOn
                                controller.isModalInPresentation = true
                        self.present(controller, animated: true)
                         
                    }
                case .error(let error):
                    print(error!)
                default:break
                }
                
            }
            self.sessionID.resignFirstResponder()
        }
    }
    
    @IBAction func onAREnabled(_ sender: UISwitch) {
        //self.arSwitch = sender.isOn
    }
    
    @IBAction func joinButtonAction(_ sender: UIButton) {
       
        
    }
    

}

