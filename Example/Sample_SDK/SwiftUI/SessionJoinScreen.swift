//
//  SessionJoinScreen.swift
//  Sample_SDK
//

import SwiftUI
import UIKit
import Lens
import Lens_Integration_SDK

private struct CustomerSessionPresentation: Identifiable {
    let id = UUID()
    let params: any CustomerSessionParams
}

struct SessionJoinScreen: View {
    @State private var sessionKey = ""
    @State private var sdkToken = UserDefaults.standard.string(forKey: SampleConstants.sdkTokenStorageKey) ?? ""
    @State private var isARMode = true
    @State private var isLoading = false
    @State private var errorMessage: String?
    @State private var presentation: CustomerSessionPresentation?
    @State private var sessionDelegate = CustomerSessionDelegate()

    var body: some View {
        VStack(alignment: .leading, spacing: 20) {
            TextField("Enter session key", text: $sessionKey)
                .textFieldStyle(.roundedBorder)
                .keyboardType(.numberPad)

            TextField("Enter SDK token", text: $sdkToken)
                .textFieldStyle(.roundedBorder)
                .textInputAutocapitalization(.never)
                .autocorrectionDisabled()

            Toggle("AR Mode", isOn: $isARMode)

            Button("Join Session", action: joinSession)
                .buttonStyle(.borderedProminent)
                .disabled(sessionKey.isEmpty || sdkToken.isEmpty || isLoading)
                .frame(maxWidth: .infinity)

            if isLoading {
                ProgressView("Joining session")
                    .frame(maxWidth: .infinity)
            }
        }
        .padding()
        .disabled(isLoading)
        .navigationTitle("Join as Customer")
        .alert(
            "Unable to Join Session",
            isPresented: Binding(
                get: { errorMessage != nil },
                set: { if !$0 { errorMessage = nil } }
            )
        ) {
            Button("OK", role: .cancel) { }
        } message: {
            Text(errorMessage ?? "")
        }
        .fullScreenCover(item: $presentation) { item in
            LensSDK.shared.customerSessionView(
                params: item.params,
                customerName: SampleConstants.customerName,
                customerEmail: SampleConstants.customerEmail,
                isARMode: isARMode,
                delegate: sessionDelegate
            )
            .ignoresSafeArea()
        }
        .onAppear {
            sessionDelegate.onSessionEnd = { _ in
                presentation = nil
            }
        }
    }

    private func joinSession() {
        UIApplication.shared.sendAction(#selector(UIResponder.resignFirstResponder), to: nil, from: nil, for: nil)
        UserDefaults.standard.set(sdkToken, forKey: SampleConstants.sdkTokenStorageKey)
        isLoading = true

        LensSDK.shared.joinSessionAsCustomer(sessionKey: sessionKey, sdkToken: sdkToken) { result in
            DispatchQueue.main.async {
                isLoading = false
                switch result {
                case .success(let params):
                    presentation = CustomerSessionPresentation(params: params)
                case .failure(let error):
                    errorMessage = CustomerSDKErrorMessage.message(for: error)
                }
            }
        }
    }
}
