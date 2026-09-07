// swift-tools-version: 5.9
import PackageDescription

let zaUtilsModules = [
    "TechAppticsEventModel",
    "Foundation_Extention",
    "SnapKit_Extention",
    "UIKit_Extention",
    "Orientation",
    "OverlayViewController",
    "DrawerController",
    "VMNetworking",
    "AssistTableDataSource",
    "Reusable",
    "GenericOnBoard",
    "DatePickerController",
    "HeaderAccessoryBarViewMaker",
    "ATImpactFeedbacker",
    "Preview",
    "PagingController",
    "AssistSheet",
    "ATIcon",
    "KeyBoardChangeObserver",
    "CustomAlert",
    "ZAssistAlert",
    "ToastView",
    "NotificationView",
    "LottieHelper",
    "ZASwiftUIAlert",
    "GrowingTextView",
]

let irtcpModules = [
    "iRTCPMeeting",
    "MeetingClient",
    "AVCommonsCore",
    "AppBridge",
    "WMSPackage",
    "WebRTCExtras",
    "SQLCipher",
    "Starscream",
    "TraceKit",
    "TraceKitCore",
    "ZIPFoundation",
]

let topLevelBinaries: [(name: String, path: String)] = [
    ("Lens_Integration_SDK", "./Frameworks/Lens_Integration_SDK.xcframework"),
    ("Lens", "./Frameworks/Lens.xcframework"),
    ("WebRTC", "./Frameworks/WebRTC.xcframework"),
    ("AssistChatController", "./Frameworks/AssistChatController.xcframework"),
    ("ZohoLensArLibrary", "./Frameworks/ZohoLensArLibrary.xcframework"),
    ("ZSocketHandler", "./Frameworks/ZSocketHandler.xcframework"),
    ("Lottie", "./Frameworks/Lottie.xcframework"),
]

let binaryTargets: [Target] =
    topLevelBinaries.map { .binaryTarget(name: $0.name, path: $0.path) } +
    zaUtilsModules.map { .binaryTarget(name: $0, path: "./Frameworks/ZAUtils/\($0).xcframework") } +
    irtcpModules.map { .binaryTarget(name: $0, path: "./Frameworks/iRTCPMeeting/\($0).xcframework") }

let allBinaryNames =
    topLevelBinaries.map(\.name) + zaUtilsModules + irtcpModules

let package = Package(
    name: "LensIntegrationSDK",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "Lens_Integration_SDK",
            targets: allBinaryNames + ["LensIntegrationSDKDeps"]
        )
    ],
    dependencies: [
        .package(url: "https://github.com/SnapKit/SnapKit.git", from: "5.7.1"),
        .package(url: "https://github.com/kishorekumar007/ZReachability.swift.git", exact: "5.2.41")
    ],
    targets: binaryTargets + [
        .target(
            name: "LensIntegrationSDKDeps",
            dependencies: allBinaryNames.map { Target.Dependency.target(name: $0) } + [
                .product(name: "SnapKit", package: "SnapKit"),
                .product(name: "Reachability", package: "ZReachability.swift")
            ],
            path: "Sources/LensIntegrationSDKDeps"
        )
    ]
)
