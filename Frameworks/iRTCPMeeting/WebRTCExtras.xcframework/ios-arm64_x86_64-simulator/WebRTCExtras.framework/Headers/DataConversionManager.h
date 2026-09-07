// DataConversionManager.h

#import <Foundation/Foundation.h>

@interface DataConversionManager : NSObject

+ (instancetype)shared;
- (NSData *)encodeMessageToData:(NSDictionary<NSString *, id> *)msg;
- (NSDictionary<NSString *, id> *)decodeDataToMessage:(NSData *)data;

@end
