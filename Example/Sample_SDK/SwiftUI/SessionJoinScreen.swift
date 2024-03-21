//
//  SessionJoinScreen.swift
//  Sample_SDK
//
//  Created by Rajavelu on 26/05/23.
//  Copyright © 2023 Kishore Kumar. All rights reserved.
//

import SwiftUI
 
#if canImport(Lens)
import Lens
#endif
import LensCustomerSDK

struct SessionJoinScreen: View {

    @State private var sessionId: String = session_Key
    @State private var sdkToken: String = token
    @State private var arModeEnabled: Bool = true
    
    @State private var isPresentingDetailView = false // New state to control the presentation
    @State private var isErrorState = false // State used to detect SDK validation errors
    @State private var isLoading = false // New state to control the loader
    
    @State private var param: CustomerSessionParams? = nil
    @State private var validationError: Error? = nil
    
    var body: some View {
        VStack(alignment: .leading, spacing: 20) {
            TextField("Enter session ID", text: $sessionId)
                .textFieldStyle(RoundedBorderTextFieldStyle())
                .padding()
                .keyboardType(.numberPad)
            
            TextField("Enter SDK Token", text: $sdkToken)
                .textFieldStyle(RoundedBorderTextFieldStyle())
                .padding()
                .keyboardType(.default)
            
            Button(action: {
                DispatchQueue.main.async {
                    submitButtonTapped()
                }
            }, label: {
                Text("Submit")
                    .foregroundColor(.white)
                    .padding()
                    .frame(maxWidth: .infinity)
            })
            .padding()
            .background(
                RoundedRectangle(cornerRadius: 20) // Make it like a tube by using RoundedRectangle with a corner radius
                    .fill(Color.blue)
            )
            
            Toggle("AR Mode", isOn: $arModeEnabled)
                .padding()
        }
        .disabled(isLoading)
        .padding()
        .fullScreenCover(isPresented: $isPresentingDetailView) {
            if let param = param {
                StreamingView(connectionParam: param, isARsupport: arModeEnabled)
                    .edgesIgnoringSafeArea(.all)
            }
        }
        .alert(isPresented: $isErrorState, content: {
            var errorMessage: String
            if let error = validationError {
                errorMessage = "\(error)"
            } else {
                errorMessage = "Error is nil"
            }
            return Alert(
                title: Text("SDK Session Validation Error"),
                message: Text(errorMessage),
                dismissButton: .default(Text("OK"))
            )
        })
        
      
        if isLoading {
            ProgressView.init {
                Text("Validating")
                    .foregroundColor(.black)
            } // Show the loader while isLoading is true
        }
               
    }
    
    func submitButtonTapped() {
        // Handle submit button action here
        print("Submit button tapped")
        if !sessionId.isEmpty {
            isLoading = true
            LensCustomer.validateSessionForSDK(sessionKey: sessionId, token: sdkToken, base: URL.init(string: url)!) {  (validation) in
                switch validation {
                case .validCustomer(let param):
                    self.param = param
                    // Set the isPresentingDetailView to true to present the streaming view
                    self.isPresentingDetailView = true
                    self.validationError = nil
                    self.isErrorState = false
                    UIApplication.shared.sendAction(#selector(UIResponder.resignFirstResponder), to: nil, from: nil, for: nil)
                    break
                    
                case .error(let error):
                    self.param = nil
                    self.isPresentingDetailView = false
                    print(" validateSessionForSDK error \(error!)")
                    self.isErrorState = true
                    self.validationError = error
                    break
                    
                default:break
                }
                isLoading = false
            }
        }
    }
}

