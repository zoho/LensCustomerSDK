//
//  SceneDelegate.swift
//  Sample_SDK
//

import UIKit
import Lens_Integration_SDK

class SceneDelegate: UIResponder, UIWindowSceneDelegate {

    var window: UIWindow?

    func scene(_ scene: UIScene, willConnectTo session: UISceneSession, options connectionOptions: UIScene.ConnectionOptions) {
        LensSDK.shared.instantiate()
        guard scene is UIWindowScene else { return }
    }
}
