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
    @State private var isARMode = true
    @State private var isLoading = false
    @State private var errorMessage: String?
    @State private var presentation: CustomerSessionPresentation?
    @State private var sessionDelegate = LensSessionDelegate()

    var body: some View {
        VStack(alignment: .leading, spacing: 20) {
            TextField("Enter session key", text: $sessionKey)
                .textFieldStyle(.roundedBorder)
                .keyboardType(.numberPad)

            Toggle("AR Mode", isOn: $isARMode)

            Button("Join Session", action: joinSession)
                .buttonStyle(.borderedProminent)
                .disabled(sessionKey.isEmpty || isLoading)
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
                customerName: "Sample Customer",
                customerEmail: "customer@example.com",
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
        hideKeyboard()
        isLoading = true

        LensSDK.shared.joinSessionAsCustomer(sessionKey: sessionKey) { result in
            DispatchQueue.main.async {
                isLoading = false
                switch result {
                case .success(let params):
                    presentation = CustomerSessionPresentation(params: params)
                case .failure(let error):
                    errorMessage = error.localizedDescription
                }
            }
        }
    }

    private func hideKeyboard() {
        UIApplication.shared.sendAction(#selector(UIResponder.resignFirstResponder), to: nil, from: nil, for: nil)
    }
}
