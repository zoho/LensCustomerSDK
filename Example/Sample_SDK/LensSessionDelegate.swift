//
//  LensSessionDelegate.swift
//  Sample_SDK
//

import Foundation
import Lens
import Lens_Integration_SDK

final class LensSessionDelegate: LensEventProtocol {
    var sessionType: Participant.Role!
    var onSessionEnd: ((SessionDescription) -> Void)?

    func summary(
        sessionInfo: SessionDescription,
        snapshots: [SnapShotEntity]?,
        isNotesAvailable: Bool,
        chat: [Chat]?
    ) {
        print("[LensSessionDelegate] Session ended: \(sessionInfo.sessionTopic ?? "")")
        DispatchQueue.main.async { [weak self] in
            self?.onSessionEnd?(sessionInfo)
        }
    }

    func sessionEvents(_ event: SessionEvents) {
        print("[LensSessionDelegate] \(event)")
    }

    func showFeedback() {
        print("[LensSessionDelegate] Show feedback requested")
    }

    func showPricingPlans() {
        print("[LensSessionDelegate] Show pricing plans requested")
    }
}
