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
    var param:CustomerSessionParams!
    override func viewDidLoad() {
        super.viewDidLoad()
        sessionID.text = "921187953"
    }

    @IBAction func start(_ sender: Any) {
        
        if let id = sessionID.text {
            let token = "wSsVR60i8xHzB6x9yDakJexqzF5WVl7/FU55jAGouSP0Gv/C/Mc9wRCYAgemSaNJEmM4HGcboe4syxZUh2UP2twpnAoEASiF9mqRe1U4J3x1rL3olzHPXm1dkxOMKo0LxAlo"
            LensCustomer.validateSession(sessionKey: id, token: token, base: URL.init(string: "https://lens.zoho.com")!) { (validation) in
                
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
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        guard let controller = segue.destination as? StreamingViewController else {
            return
        }
        controller.connectionParam = self.param
    }
    
    

}

