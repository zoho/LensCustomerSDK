//
//  InitialViewController.swift
//  LensSDK_Sample
//
//  Created by Rajavelu on 29/05/23.
//

import UIKit
import SwiftUI

class InitialViewController: UIViewController {

   
    
    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }
    
    
    @IBAction func storyboardAction(_ sender: Any) {
        
        
    }
    
    @IBAction func swiftUIAction(_ sender: Any) {
        
        let swiftUIjoinScreen =  UIHostingController.init(rootView: SessionJoinScreen())
        self.navigationController?.pushViewController(swiftUIjoinScreen, animated: true)
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
