//
//  ViewController.swift
//  Sample_SDK
//
//  Created by kishore Kumar on 08/07/20.
//  Copyright © 2020 Kishore Kumar. All rights reserved.
//

import UIKit
import Lens
class ViewController: UIViewController {

    @IBOutlet weak var sessionID: UITextField!
    var param:ConnectionParam!
    override func viewDidLoad() {
        super.viewDidLoad()
        sessionID.text = "932987451"
    }

    @IBAction func start(_ sender: Any) {
        
        if let id = sessionID.text {
            let token = "abc_123"
            LensCustomer.validateSession(sessionKey: id, base: URL.init(string: "https://lens.zoho.com")!, token:token) { (validation) in
                
                switch validation {
                case .success(let param):
                    //
                    self.param = param
                    DispatchQueue.main.async {
                        self.performSegue(withIdentifier: "streamingcontroller", sender: nil)
                    }
                case .error(let error):
                    print(error!)
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

