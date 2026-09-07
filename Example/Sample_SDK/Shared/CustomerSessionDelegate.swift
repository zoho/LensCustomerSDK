//
//  CustomerSessionDelegate.swift
//  Sample_SDK
//

import Foundation
import Lens
import Lens_Integration_SDK

final class CustomerSessionDelegate: LensEventProtocol {
    var sessionType: Participant.Role! = .customer
    var onSessionEnd: ((SessionDescription) -> Void)?

    func summary(
        sessionInfo: SessionDescription,
        snapshots: [SnapShotEntity]?,
        isNotesAvailable: Bool,
        chat: [Chat]?
    ) {
        onSessionEnd?(sessionInfo)
    }

    func sessionEvents(_ event: SessionEvents) {
        print("[CustomerSessionDelegate] \(event)")
    }

    func showFeedback() {
        print("[CustomerSessionDelegate] Show feedback requested")
    }

    func showPricingPlans() {
        print("[CustomerSessionDelegate] Show pricing plans requested")
    }
}
