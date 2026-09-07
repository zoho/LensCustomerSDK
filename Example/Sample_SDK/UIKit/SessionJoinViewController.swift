//
//  SessionJoinViewController.swift
//  Sample_SDK
//

import UIKit
import Lens_Integration_SDK

final class SessionJoinViewController: UIViewController {

    @IBOutlet weak var sessionID: UITextField!
    @IBOutlet weak var sdkTokenField: UITextField!
    @IBOutlet weak var arSwitch: UISwitch!

    private let sessionDelegate = CustomerSessionDelegate()
    private var isJoining = false

    private var storedSDKToken: String {
        get { UserDefaults.standard.string(forKey: "sdk_token") ?? "" }
        set { UserDefaults.standard.set(newValue, forKey: "sdk_token") }
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        sdkTokenField.text = storedSDKToken
    }

    @IBAction func joinButtonAction(_ sender: UIButton) {
        joinSession()
    }

    private func joinSession() {
        guard !isJoining else { return }

        sessionID.resignFirstResponder()
        sdkTokenField.resignFirstResponder()

        let sessionKey = sessionID.text ?? ""
        guard !sessionKey.isEmpty else {
            presentAlert(title: "Session Key Required", message: "Enter a session key to join.")
            return
        }

        let sdkToken = sdkTokenField.text ?? ""
        guard !sdkToken.isEmpty else {
            presentAlert(title: "SDK Token Required", message: "Enter a Mobile SDK token from lens.zoho.com.")
            return
        }

        storedSDKToken = sdkToken
        isJoining = true

        LensSDK.shared.joinSessionAsCustomer(sessionKey: sessionKey, sdkToken: sdkToken) { [weak self] result in
            DispatchQueue.main.async {
                guard let self else { return }
                self.isJoining = false
                switch result {
                case .success(let params):
                    LensSDK.shared.presentCustomerSession(
                        params: params,
                        customerName: "Jane Customer",
                        customerEmail: "jane@example.com",
                        isARMode: self.arSwitch.isOn,
                        from: self,
                        delegate: self.sessionDelegate
                    )
                case .failure(let error):
                    self.presentAlert(
                        title: "Unable to Join Session",
                        message: CustomerSDKErrorMessage.message(for: error)
                    )
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
