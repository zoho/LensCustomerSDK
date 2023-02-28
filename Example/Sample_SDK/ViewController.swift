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
        sessionID.text = ""
    }
    
    @IBAction func start(_ sender: Any) {
        
        if let id = sessionID.text {
            let token = "wSsVR610+ULwDawrzTb5IL9rmFwDBl3yR0V721Ck6HD7TPDL88c4n0CaV1SmTfIdEjE7EDQb8O4gyx4JhjEG2455w1tWACiF9mqRe1U4J3x1p7vplTfKWG1dkxOILIsNwwxrmA=="
            
            LensCustomer.validateSessionForSDK(sessionKey: id, token: token, base: URL.init(string: "https://lenslab.zoho.com")!) { (validation) in
                
                switch validation {
                case .validCustomer(let param):
                    //
                    self.param = param
                    DispatchQueue.main.async {
                        self.performSegue(withIdentifier: "streamingcontroller", sender: nil)
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
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        guard let controller = segue.destination as? StreamingViewController else {
            return
        }
        controller.connectionParam = self.param
        controller.talkSetup.isMuteAudio = false
        controller.isARsupport = arSwitch.isOn
        if #available(iOS 13.0, *) {
            controller.isModalInPresentation = true
        } else {
            // Fallback on earlier versions
        }
    }
}

