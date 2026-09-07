//
//  SessionJoinViewController.swift
//  Sample_SDK
//

import UIKit
import Lens
import Lens_Integration_SDK

final class SessionJoinViewController: UIViewController {

    @IBOutlet weak var sessionID: UITextField!
    @IBOutlet weak var arSwitch: UISwitch!

    private let sessionDelegate = LensSessionDelegate()

    @IBAction func start(_ sender: Any) {
        joinSession()
    }

    @IBAction func joinButtonAction(_ sender: UIButton) {
        joinSession()
    }

    private func joinSession() {
        sessionID.resignFirstResponder()

        guard let sessionKey = sessionID.text, !sessionKey.isEmpty else {
            presentAlert(title: "Session Key Required", message: "Enter a session key to join.")
            return
        }

        LensSDK.shared.joinSessionAsCustomer(sessionKey: sessionKey) { [weak self] result in
            DispatchQueue.main.async {
                guard let self else { return }
                switch result {
                case .success(let params):
                    LensSDK.shared.presentCustomerSession(
                        params: params,
                        customerName: "Sample Customer",
                        customerEmail: "customer@example.com",
                        isARMode: self.arSwitch.isOn,
                        from: self,
                        delegate: self.sessionDelegate
                    )
                case .failure(let error):
                    self.presentAlert(title: "Unable to Join Session", message: error.localizedDescription)
                }
            }
        }
    }

    private func presentAlert(title: String, message: String) {
        let alert = UIAlertController(title: title, message: message, preferredStyle: .alert)
        alert.addAction(UIAlertAction(title: "OK", style: .default))
        present(alert, animated: true)
    }
}
