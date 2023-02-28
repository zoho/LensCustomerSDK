Pod::Spec.new do |s|

  # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.

  #

  s.name         = "LensSDK"
  s.version      = "2.4.0"
  s.summary      = "A remote support framework for Zoho Assist Lens"

  # This description is used to generate tags and improve search results.
  #   * Think: What does it do? Why did you write it? What is the focus?
  #   * Try to keep it short, snappy and to the point.
  #   * Write the description between the DESC delimiters below.
  #   * Finally, don't worry about the indent, CocoaPods strips it!
  s.homepage = "https://git.csez.zohocorpin.com/igarage/ZAssistKit"
  s.description  = "A remote support framework for Zoho Assist Lens"
  s.license      = { :type => "MIT", :text=> <<-LICENSE
  MIT License

  Copyright (c) 2017 Zoho

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in allcd
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE
  LICENSE
}

  s.author       = { "Kishore Kumar" => "kishorekumar.n@zohocorp.com" }
  # s.platform     = :ios, '8.0'
  s.ios.deployment_target = '11.0'

  s.frameworks = 'UIKit','Foundation', 'CoreMedia'

  s.source       = { :git => "https://github.com/zoho/LensCustomerSDK.git", :tag => s.version}

  s.dependency 'GoogleWebRTC' #, "1.1.28913"
  s.dependency 'SnapKit' #, '~> 4.0.0'

  s.dependency 'ReachabilitySwift' #, '4.3.0'


  s.vendored_frameworks = 'SDK/**/*.framework'

  s.module_name  = "LensSDK"

  s.requires_arc = true
  s.swift_versions = '5.0'
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

  # s.xcconfig = { 'HEADER_SEARCH_PATHS' => '$(SDKROOT)/usr/include/libxml2', 'SWIFT_INCLUDE_PATHS' => '$(PODS_ROOT)/CommonCryptoSwift/Sources/CCommonCrypto' }
  # s.preserve_paths = 'Sources/CCommonCrypto/module.modulemap'
#  live path
    # s.xcconfig = { 'HEADER_SEARCH_PATHS' => '$(PODS_ROOT)/LensSDK/SDK/Starscream/Starscream.framework/zlib' }
#dev
#  s.xcconfig = { 'HEADER_SEARCH_PATHS' => '${PODS_ROOT}/../../SDK/Starscream/Starscream.framework/zlib' }

end
