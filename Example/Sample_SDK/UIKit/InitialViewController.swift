//
//  InitialViewController.swift
//  Sample_SDK
//

import UIKit
import SwiftUI

final class InitialViewController: UIViewController {

    @IBAction func swiftUIAction(_ sender: Any) {
        let joinScreen = UIHostingController(rootView: SessionJoinScreen())
        navigationController?.pushViewController(joinScreen, animated: true)
    }
}
