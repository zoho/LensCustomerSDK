//
//  CustomModel.swift
//  LensSDK_Sample
//
//  Created by Selva Pandian N on 23/02/23.
//

import Foundation
import UIKit

class  MenuCollectionViewCell: UICollectionViewCell {
    
    @IBOutlet weak var title: UILabel!
    
    func configure(menu: Menu) {
        self.layer.borderWidth = 2
        self.title.text = menu.title
    }
}

struct TalkSessionSetup {
    var isEnableSpeaker: Bool = true
    var isShowFrontCamera: Bool = false
    var isOnFlashLight: Bool = false
    var isMuteVideo: Bool = false
    var isMuteAudio: Bool = false
    var sys_id:String = ""
    init() {}
    
}
