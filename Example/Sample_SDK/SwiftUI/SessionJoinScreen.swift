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

/// You can get this token from lens.zoho.com -> Settings -> mobile SDK -> create token
var token:String = "OlyO55SGPxMhzMZ/fZGf36finRz2pfEK3HRBa6Sz0mKUkHS0AR2kGcRXZnqePsMvx61NoP8PwvvyS8OIw3eY45uhVrrzqo0KeItwz2yAguFPVT4fAJBbSGcuf7P7uZipJUA="


struct SessionJoinScreen: View {

    @State private var sessionId: String = "670575281"
    @State private var arModeEnabled: Bool = true
    @State private var isPresentingDetailView = false // New state to control the presentation
    @State private var param: CustomerSessionParams? = nil
    @State private var isLoading = false // New state to control the loader
    var body: some View {
        VStack(alignment: .leading, spacing: 20) {
            TextField("Enter session ID", text: $sessionId)
                .textFieldStyle(RoundedBorderTextFieldStyle())
                .padding()
                .keyboardType(.numberPad)
            
            Button(action: {
                // Add your submit button action here
                submitButtonTapped()
            }) {
                Text("Submit")
                    .foregroundColor(.white)
                    .padding(.horizontal, 40) // Increase the right and left padding
                    .padding(.vertical, 10) // Increase the top and bottom padding
                    .background(
                        RoundedRectangle(cornerRadius: 20) // Make it like a tube by using RoundedRectangle with a corner radius
                            .fill(Color.blue)
                    )
            }
            
            Toggle("AR Mode", isOn: $arModeEnabled)
                .padding(.leading)
        }
        .disabled(isLoading)
        .padding()
        .fullScreenCover(isPresented: $isPresentingDetailView) {
                    if let param = param {
                        StreamingView(connectionParam: param,isARsupport: arModeEnabled)
                            .edgesIgnoringSafeArea(.all)
                    }
                }
      
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
        UIApplication.shared.sendAction(#selector(UIResponder.resignFirstResponder), to: nil, from: nil, for: nil)
        if !sessionId.isEmpty {
            isLoading = true
            LensCustomer.validateSessionForSDK(sessionKey: sessionId, token: token, base: URL.init(string: "https://lens.localzoho.com")!) {  (validation) in
                isLoading = false
                switch validation {
                case .validCustomer(let param):
                    
                    
                    self.param = param
                    self.isPresentingDetailView = true
                    
                case .error(let error):
                    
                    print(" validateSessionForSDK error \(error!)")
                    
                default:break
                }
                
            }
            
        }
        
        
        
        // Set the isPresentingDetailView to true to present the detail view
        isPresentingDetailView = true
    }
}

