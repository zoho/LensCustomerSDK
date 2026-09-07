//
//  InitialViewController.swift
//  Sample_SDK
//

import UIKit
import SwiftUI

final class InitialViewController: UIViewController {

    @IBAction func storyboardAction(_ sender: Any) {
        // Storyboard segue presents SessionJoinViewController (UIKit customer flow).
    }

    @IBAction func swiftUIAction(_ sender: Any) {
        let joinScreen = UIHostingController(rootView: SessionJoinScreen())
        navigationController?.pushViewController(joinScreen, animated: true)
    }
}
