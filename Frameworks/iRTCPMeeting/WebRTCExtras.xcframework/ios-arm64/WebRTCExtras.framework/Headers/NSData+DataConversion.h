//
//  NSData+DataConversion.h
//  WebRTCExtras
//
//  Created by Aravindh on 31/07/24.
//

#import <Foundation/Foundation.h>

@interface NSData (Extensions)

- (int64_t)getInt64AtIndex:(NSInteger)index;
- (int32_t)getInt32AtIndex:(NSInteger)index;
- (int16_t)getInt16AtIndex:(NSInteger)index;
- (int8_t)getInt8AtIndex:(NSInteger)index;
- (NSString *)getStringAtIndex:(NSInteger)index length:(NSInteger)length;

@end
