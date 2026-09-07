//
//  SceneDelegate.swift
//  Sample_SDK
//

import UIKit
import Lens
import Lens_Integration_SDK

@available(iOS 13.0, *)
class SceneDelegate: UIResponder, UIWindowSceneDelegate {

    var window: UIWindow?

    func scene(_ scene: UIScene, willConnectTo session: UISceneSession, options connectionOptions: UIScene.ConnectionOptions) {
        LensSDK.shared.instantiate(integrationType: .LENS)
        guard scene is UIWindowScene else { return }
    }
}
