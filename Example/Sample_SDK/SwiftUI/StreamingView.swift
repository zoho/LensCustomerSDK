//
//  StreamingView.swift
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
import ARKit

enum SessionMenu: String, Identifiable  {
    case video, audio, liveText, ScanQR, swapCamera, freeze , exit , chat
    var id: String {
           return self.rawValue
       }
       
    var title: String {
        self.rawValue.capitalized
    }
}


struct MenuView: View {
    var menu: SessionMenu
    
    var body: some View {
        VStack {
            Text(menu.title)
                .padding()
//                .frame(maxWidth: .infinity)
                .background(Color(UIColor.systemBackground))
                .cornerRadius(10)
                .overlay(
                    RoundedRectangle(cornerRadius: 10)
                        .stroke(Color.blue, lineWidth: 2)
                )
        }
    }
}



struct StreamingView: View {
    let connectionParam: CustomerSessionParams?
    let isARsupport:Bool
    @State var selectedMenu: SessionMenu? = nil
    @State var updateTrigger: Bool = false
    @State var showLoader: Bool = false


    let sessionMenus: [SessionMenu] = [
        .freeze,.liveText,.swapCamera,.ScanQR
    ]

    var body: some View {
        ZStack {
//            if connectionParam != nil {
//            VideoStreamingViewWrapper(connectionParam: connectionParam, selectedMenu:$selectedMenu, updateTrigger: $updateTrigger, showLoader: $showLoader)
            MyViewControllerRepresentable(connectionParam: connectionParam, selectedMenu: $selectedMenu, updateTrigger: $updateTrigger)
                
//            }
//            B(someProperty: $selectedMenu)
            VStack {
                HStack {
                    
                    Button(action: {
                        // Handle exit button action
                        menuItemSelected(.exit)
                    }) {
                        Text(SessionMenu.exit.title)
                            .padding()
                            
                            .background(Color.red)
                            .foregroundColor(.white)
                            .cornerRadius(10)
                            
                    }
                    Spacer()
                    
                    MenuView(menu: .video)
                        .onTapGesture {
                            // Handle menu item selection
                            menuItemSelected(.video)
                        }
                    
                    MenuView(menu: .audio)
                        .onTapGesture {
                            // Handle menu item selection
                            menuItemSelected(.audio)
                        }
                 
                }.padding([.all], 10)
                .padding([.top], 34)
                
                Spacer() // Empty space between HStack and ScrollView
                
                ScrollView(.horizontal, showsIndicators: true) {
                    LazyHStack(spacing: 20) {
                        ForEach(sessionMenus) { item in
                            MenuView(menu: item)
                                .onTapGesture {
                                    // Handle menu item selection
                                    menuItemSelected(item)
                                }
                        }
                    }
                    .padding(.horizontal)
                }.frame(height: 100)
                


            }
            if showLoader {
                VStack{
                    Spacer()
                    Text("Loader")
                    Spacer()
                }
            }
            
            
            
        }
        
    }
 
       func menuItemSelected(_ item: SessionMenu) {
           selectedMenu = item
           updateTrigger.toggle()
           
       }
    
}


struct MyViewControllerRepresentable: UIViewControllerRepresentable {
   
    typealias UIViewControllerType = StreamingViewControllerForSwiftUI

    let connectionParam: CustomerSessionParams?
    @Binding var selectedMenu: SessionMenu?
    @Binding var updateTrigger: Bool
    
    func makeUIViewController(context: Context) -> StreamingViewControllerForSwiftUI {
        let myViewController = StreamingViewControllerForSwiftUI.getViewcontroller(param: connectionParam, isARSupported: true)
        // Additional setup if needed
        return myViewController
    }

    func updateUIViewController(_ uiViewController: StreamingViewControllerForSwiftUI, context: Context) {
       
        if updateTrigger {
            // implementing to get call a same sessionmenu selection every time tapped.

        }
        
            // Update the view based on the selectedMenu value
            let lensObject = uiViewController.lensObject
            switch selectedMenu {
            case .exit:
            
                lensObject?.closeRoom()
            case .video:
                if !(lensObject?.getStreamType == .up) {
    
                    lensObject?.shareCamera()
                } else {
                    lensObject?.stopCamera()
                }
            case .audio:
                if uiViewController.talkSetup.isMuteAudio {
                    lensObject?.unmuteAudio()
                    uiViewController.talkSetup.isMuteAudio = false
                } else {
                    //Mute audio
                    lensObject?.muteAudio()
                    uiViewController.talkSetup.isMuteAudio = true
    
                }
            case .freeze:
    
                if uiViewController.talkSetup.isMuteVideo {
                   lensObject?.unmuteVideo()
                    uiViewController.talkSetup.isMuteVideo = false
    
                } else {
                    lensObject?.muteVideo()
                    uiViewController.talkSetup.isMuteVideo = true
    
                }
                break
            case .liveText:
                lensObject?.requestOCR()
                print("")
    
            case .ScanQR:
                lensObject?.requestQR(retryMode: .RETRY_UNTIL_TIME_LIMIT)
    
            case .swapCamera:
                if lensObject?.isCameraFacingFront ?? false {
                   lensObject?.swapToBackCamera()
                } else {
                   lensObject?.swapToFrontCamera()
                }
                
            default:
                break
            }
    }
}

