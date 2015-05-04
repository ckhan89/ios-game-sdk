//
//  StringEncryption.h
//
//  Created by DAVID VEKSLER on 2/4/09.
//

#import <CommonCrypto/CommonDigest.h>
#import <CommonCrypto/CommonCryptor.h>


#define kAppotaGameSDKChosenCipherBlockSize	kCCBlockSizeAES128
#define kAppotaGameSDKChosenCipherKeySize	kCCKeySizeAES128
#define kAppotaGameSDKChosenDigestLength		CC_SHA1_DIGEST_LENGTH

@interface AppotaGameSDKStringEncryption : NSObject

+ (NSString *) EncryptString:(NSString *)plainSourceStringToEncrypt;
+ (NSString *) DecryptString:(NSString *) base64StringToDecrypt;

- (void)testSymmetricEncryption;

- (NSData *)encrypt:(NSData *)plainText key:(NSData *)aSymmetricKey padding:(CCOptions *)pkcs7;
- (NSData *)decrypt:(NSData *)plainText key:(NSData *)aSymmetricKey padding:(CCOptions *)pkcs7;

- (NSData *)doCipher:(NSData *)plainText key:(NSData *)aSymmetricKey
			 context:(CCOperation)encryptOrDecrypt padding:(CCOptions *)pkcs7;

- (NSData*) md5data: ( NSString *) str;


@end
