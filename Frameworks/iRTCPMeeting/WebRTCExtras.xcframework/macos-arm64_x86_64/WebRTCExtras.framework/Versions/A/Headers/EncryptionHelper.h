// EncryptionHelper.h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface EncryptedResultObjC : NSObject
@property (nonatomic, readonly) NSData *iv;
@property (nonatomic, readonly) NSData *encrypted;
@property (nonatomic, readonly) NSNumber *ratchetCount;
- (instancetype)initWithIV:(NSData *)iv
                 encrypted:(NSData *)encrypted
              ratchetCount:(NSNumber *)ratchetCount;
@end

@interface MasterKeyResultObjC : NSObject
@property (nonatomic, readonly) NSData *masterKey;
@property (nonatomic, readonly) NSString *fingerPrint;
- (instancetype)initWithMasterKey:(NSData *)masterKey
                      fingerPrint:(NSString *)fingerPrint;
@end

@interface EncryptionHelper : NSObject

- (instancetype)initWithDataMode:(NSNumber *)dataMode
                      streamType:(NSNumber *)streamType
                 ratchetInterval:(NSNumber *)ratchetInterval;

- (void)initializeEncryption:(NSData *)masterKey;

- (MasterKeyResultObjC *)generateMasterKeyAndFingerPrint;

- (NSData *)deriveSessionKeyWithMasterKey:(NSData *)masterKey
                                     info:(NSString *)info;

- (NSData *)ratchetCurrentKey:(NSNumber *)targetRatchet;

- (NSNumber *)getRatchetCount;

// Canonical selector
- (EncryptedResultObjC *)encrypt:(NSData *)data;
// Alias to match callers expecting encryptWithData:
- (EncryptedResultObjC *)encryptWithData:(NSData *)data;

// Canonical selector
- (NSData *)decrypt:(NSData *)encryptedData
                 iv:(NSData *)iv
            ratchet:(NSNumber *)ratchet;
// Alias to match callers expecting decryptWithData:iv:ratchet:
- (NSData *)decryptWithData:(NSData *)encryptedData
                         iv:(NSData *)iv
                    ratchet:(NSNumber *)ratchet;

- (void)close;

@end

NS_ASSUME_NONNULL_END
