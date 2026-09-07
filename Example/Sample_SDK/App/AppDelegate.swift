//
//  AppDelegate.swift
//  Sample_SDK
//

import UIKit
import Lens_Integration_SDK

@main
class AppDelegate: UIResponder, UIApplicationDelegate {

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        LensSDK.shared.instantiate()
        return true
    }
}
