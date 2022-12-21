//
//  ViewController.swift
//  Sample_SDK
//
//  Created by kishore Kumar on 08/07/20.
//  Copyright © 2020 Kishore Kumar. All rights reserved.
//

import UIKit
import LensSDK
class ViewController: UIViewController {

    @IBOutlet weak var sessionID: UITextField!
    @IBOutlet weak var arSwitch: UISwitch!
    
    var param:CustomerSessionParams!
    override func viewDidLoad() {
        super.viewDidLoad()
        sessionID.text = "530118125"
    }

    @IBAction func start(_ sender: Any) {
        
        if let id = sessionID.text {
            let token = "wSsVR60i/kL2D6x5yGD8Iec/kVsEVAylER4ojgGk6if5HqvKp8dolhLIAQekGKUeQzVrFzIRrLsrzRkF2zQP3t0uy1gBXiiF9mqRe1U4J3x1p7jvkzfMW21dkxOILIoNwAxrmA=="
            LensCustomer.validateSession(sessionKey: id, token: token, base: URL.init(string: "https://lens.zoho.com")!) { (validation) in
                
                switch validation {
                case .validCustomer(let param):
                    //
                    self.param = param
                    DispatchQueue.main.async {
                        self.performSegue(withIdentifier: "streamingcontroller", sender: nil)
                    }
                case .error(let error):
                    print(error!)
                default:break
                }
                
            }
            self.sessionID.resignFirstResponder()
        }
    }
    
    @IBAction func onAREnabled(_ sender: UISwitch) {
        //self.arSwitch = sender.isOn
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        guard let controller = segue.destination as? StreamingViewController else {
            return
        }
        controller.connectionParam = self.param
        controller.talkSetup.isMuteAudio = false
        controller.isARsupport = arSwitch.isOn
        if #available(iOS 13.0, *) {
            controller.isModalInPresentation = true
        } else {
            // Fallback on earlier versions
        }
    }
    
    

}

//# Type a script or drag a script file from your workspace to insert its path.
//exec > /tmp/${PROJECT_NAME}_archive.log 2>&1
//
//UNIVERSAL_OUTPUTFOLDER=${BUILD_DIR}/${CONFIGURATION}-universal
//
//
//if [ "true" == ${ALREADYINVOKED:-false} ]
//then
//echo "RECURSION: Detected, stopping"
//else
//export ALREADYINVOKED="true"
//
//# make sure the output directory exists
//mkdir -p "${UNIVERSAL_OUTPUTFOLDER}"
//
//echo "Building for iPhoneSimulator"
//xcodebuild -workspace "${WORKSPACE_PATH}" -scheme "${TARGET_NAME}" -configuration ${CONFIGURATION} -sdk iphonesimulator -destination 'platform=iOS Simulator,name=iPhone 6' ONLY_ACTIVE_ARCH=NO ARCHS='i386 x86_64' BUILD_DIR="${BUILD_DIR}" BUILD_ROOT="${BUILD_ROOT}" ENABLE_BITCODE=YES OTHER_CFLAGS="-fembed-bitcode" BITCODE_GENERATION_MODE=bitcode clean build
//
//# Step 1. Copy the framework structure (from iphoneos build) to the universal folder
//echo "Copying to output folder"
//cp -R "${ARCHIVE_PRODUCTS_PATH}${INSTALL_PATH}/${FULL_PRODUCT_NAME}" "${UNIVERSAL_OUTPUTFOLDER}/"
//
//# Step 2. Copy Swift modules from iphonesimulator build (if it exists) to the copied framework directory
//SIMULATOR_SWIFT_MODULES_DIR="${BUILD_DIR}/${CONFIGURATION}-iphonesimulator/${TARGET_NAME}.framework/Modules/${TARGET_NAME}.swiftmodule/."
//if [ -d "${SIMULATOR_SWIFT_MODULES_DIR}" ]; then
//cp -R "${SIMULATOR_SWIFT_MODULES_DIR}" "${UNIVERSAL_OUTPUTFOLDER}/${TARGET_NAME}.framework/Modules/${TARGET_NAME}.swiftmodule"
//fi
//
//# Step 3. Create universal binary file using lipo and place the combined executable in the copied framework directory
//echo "Combining executables"
//lipo -create -output "${UNIVERSAL_OUTPUTFOLDER}/${EXECUTABLE_PATH}" "${BUILD_DIR}/${CONFIGURATION}-iphonesimulator/${EXECUTABLE_PATH}" "${ARCHIVE_PRODUCTS_PATH}${INSTALL_PATH}/${EXECUTABLE_PATH}"
//
//# Step 4. Create universal binaries for embedded frameworks
//#for SUB_FRAMEWORK in $( ls "${UNIVERSAL_OUTPUTFOLDER}/${TARGET_NAME}.framework/Frameworks" ); do
//#BINARY_NAME="${SUB_FRAMEWORK%.*}"
//#lipo -create -output "${UNIVERSAL_OUTPUTFOLDER}/${TARGET_NAME}.framework/Frameworks/${SUB_FRAMEWORK}/${BINARY_NAME}" "${BUILD_DIR}/${CONFIGURATION}-iphonesimulator/${SUB_FRAMEWORK}/${BINARY_NAME}" "${ARCHIVE_PRODUCTS_PATH}${INSTALL_PATH}/${TARGET_NAME}.framework/Frameworks/${SUB_FRAMEWORK}/${BINARY_NAME}"
//#done
//
//# Step 5. Convenience step to copy the framework to the project's directory
//
//echo "Copying to project dir"
//yes | cp -Rf "${UNIVERSAL_OUTPUTFOLDER}/${FULL_PRODUCT_NAME}" "${PROJECT_DIR}"
//cd
//open "${PROJECT_DIR}"
//
//fi

