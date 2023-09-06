//
//  ViewController.swift
//  Sample_SDK
//
//  Created by kishore Kumar on 08/07/20.
//  Copyright © 2020 Kishore Kumar. All rights reserved.
//

import UIKit
 
#if canImport(Lens)
import Lens
#endif
import LensCustomerSDK

class ViewController: UIViewController {
    
    @IBOutlet weak var sessionID: UITextField!
    @IBOutlet weak var arSwitch: UISwitch!
    @IBOutlet weak var TokenInput: UITextField!
    
    //Properties
    let url = "https://lens.zoho.com"
    let session_Key = ""
    let token = ""
    
    var param:CustomerSessionParams!
    var  default_token:String {
        
        set {
            UserDefaults.standard.setValue(newValue, forKey: "sdk_token")
        }
        get{
            return UserDefaults.standard.value(forKey:"sdk_token") as? String ?? self.token
        }
    }
    override func viewDidLoad() {
        
        super.viewDidLoad()
        sessionID.text = session_Key
        self.TokenInput.text = default_token

    }
    
    @IBAction func start(_ sender: Any) {
        if let token = TokenInput.text {
            default_token = token
        }
        
        
        if let id = sessionID.text {
            LensCustomer.validateSessionForSDK(sessionKey: id, token: default_token, base: URL.init(string: url )!) { (validation) in
                DispatchQueue.main.async {
                    switch validation {
                    case .validCustomer(let param):
                        //
                        self.param = param
                    
                            
                            let alert_controller = UIAlertController.init(title: "Validation Success", message: "Proceed to the session", preferredStyle: .alert)
                            alert_controller.addAction(.init(title: "Okay", style: .default,handler: { _ in
                                
                                let controller = StreamingViewController.getViewcontroller(param: param, isARSupported: true)
                                controller.talkSetup.isMuteAudio = false
                                controller.isARsupport = self.arSwitch.isOn
                                controller.isModalInPresentation = true
                                self.present(controller, animated: true)
                                
                            }))
                            self.present(alert_controller, animated: true)
                            
                            
                            
                        case .error(let error):
                            let alert_controller = UIAlertController.init(title: "Validate Error", message: "\(error!)", preferredStyle: .alert)
                            alert_controller.addAction(.init(title: "Okay", style: .default))
                            self.present(alert_controller, animated: true)
                            print(" validateSessionForSDK error \(error!)")
                            
                        default:break
                        }
                        
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

