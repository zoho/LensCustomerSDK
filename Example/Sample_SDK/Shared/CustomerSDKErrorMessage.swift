//
//  CustomerSDKErrorMessage.swift
//  Sample_SDK
//

import Foundation
import Lens
import Lens_Integration_SDK

enum CustomerSDKErrorMessage {
    static func message(for error: Error) -> String {
        guard let sdkError = error as? LensSDKError else {
            return error.localizedDescription
        }

        switch sdkError {
        case .sessionValidationFailed(let validationError):
            return message(for: validationError)
        case .internalError(let detail):
            return detail ?? "Unexpected SDK failure."
        default:
            return sdkError.localizedDescription
        }
    }

    private static func message(for error: SessionValidationResponse.SessionValidationError?) -> String {
        switch error {
        case .invalidKey:
            return "Session key is wrong or too short."
        case .sessionExpired:
            return "This session has ended."
        case .invalidLicence:
            return "Mobile SDK token is missing, invalid, or expired."
        case .customer_already_active_in_session:
            return "Customer is already in another session."
        case .linkExpired:
            return "Join link has expired."
        case .clientAlreadyActiveInSession:
            return "This device is already in another session."
        case .invalidClientFlag:
            return "Same session opened on a different device."
        case .appUpgrade:
            return "App or SDK version is too old."
        case .none:
            return "Session validation failed."
        default:
            return "Session validation failed. Please try again."
        }
    }
}
