typedef enum FclBlowfishMode
{
    modeEBC,    // electronic-code-book
    modeCBC     // cipher-block-chaining
} FclBlowfishMode;

typedef enum FclBlowfishPadding
{
    paddingRFC,
    paddingZero
} FclBlowfishPadding;

@interface DesHelper : NSObject {
    FclBlowfishMode mode;
    FclBlowfishPadding padding;
    unsigned short int N, blockSize;
    
@private
    SInt32 P[16 + 2];
    SInt32 S[4][256];}
@property(nonatomic, retain) NSString *Key; // Maximum 448 Bits, will be encoded using ASCII
@property(nonatomic, retain) NSString *IV;  // 8 Byte ASCII
+ (NSString*) decryptUseDES:(NSString*)cipherText key:(NSString*)key;
+ (NSString *) encryptUseDES:(NSString *)clearText key:(NSString *)key;
- (NSString *)encrypt:(NSData *)plain withMode:(FclBlowfishMode)pMode
          withPadding:(FclBlowfishPadding)pPadding;
- (NSString *)decrypt:(NSData *)crypted withMode:(FclBlowfishMode)pMode
          withPadding:(FclBlowfishPadding)pPadding;
- (void)prepare;
- (NSString *)pad:(NSString *)plain;
- (NSString *)removePad:(NSString *)plain;
- (void)encipher:(SInt32 *)xl xr:(SInt32 *)xr;
- (void)decipher:(SInt32 *)xl xr:(SInt32 *)xr;
- (SInt32)F:(SInt32)v;
@end

static inline void FclSwap(SInt32 *l, SInt32 *r) {
    *l ^= *r;
    *r ^= *l;
    *l ^= *r;
}