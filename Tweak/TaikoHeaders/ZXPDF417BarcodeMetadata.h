//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ZXPDF417BarcodeMetadata : NSObject
{
    int _columnCount;	// 8 = 0x8
    int _errorCorrectionLevel;	// 12 = 0xc
    int _rowCountUpperPart;	// 16 = 0x10
    int _rowCountLowerPart;	// 20 = 0x14
    int _rowCount;	// 24 = 0x18
}

@property(readonly, nonatomic) int rowCount; // @synthesize rowCount=_rowCount;
@property(readonly, nonatomic) int rowCountLowerPart; // @synthesize rowCountLowerPart=_rowCountLowerPart;
@property(readonly, nonatomic) int rowCountUpperPart; // @synthesize rowCountUpperPart=_rowCountUpperPart;
@property(readonly, nonatomic) int errorCorrectionLevel; // @synthesize errorCorrectionLevel=_errorCorrectionLevel;
@property(readonly, nonatomic) int columnCount; // @synthesize columnCount=_columnCount;
- (id)initWithColumnCount:(int)arg1 rowCountUpperPart:(int)arg2 rowCountLowerPart:(int)arg3 errorCorrectionLevel:(int)arg4;

@end

