//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, SKProduct, UIImage;

@interface IStorePackage : NSObject
{
    NSString *m_ProductIdentifier;	// 8 = 0x8
    NSString *m_Title;	// 16 = 0x10
    NSString *m_Description;	// 24 = 0x18
    NSString *m_Price;	// 32 = 0x20
    NSMutableArray *m_SongArray;	// 40 = 0x28
    _Bool m_BuyFlag;	// 48 = 0x30
    NSString *m_IconURL;	// 56 = 0x38
    _Bool m_Downloaded;	// 64 = 0x40
    _Bool m_Restored;	// 65 = 0x41
    int m_BonusDoncoin;	// 68 = 0x44
    NSString *m_SampleAllowedFlags;	// 72 = 0x48
    _Bool _descriptionImageDownloadFailed;	// 80 = 0x50
    _Bool _prize;	// 81 = 0x51
    NSString *_plan;	// 88 = 0x58
    NSString *_descriptionURL;	// 96 = 0x60
    UIImage *_descriptionImage;	// 104 = 0x68
    SKProduct *_skProduct;	// 112 = 0x70
}

@property(nonatomic) _Bool prize; // @synthesize prize=_prize;
@property(retain, nonatomic) SKProduct *skProduct; // @synthesize skProduct=_skProduct;
@property(nonatomic) _Bool descriptionImageDownloadFailed; // @synthesize descriptionImageDownloadFailed=_descriptionImageDownloadFailed;
@property(retain, nonatomic) UIImage *descriptionImage; // @synthesize descriptionImage=_descriptionImage;
@property(copy, nonatomic) NSString *descriptionURL; // @synthesize descriptionURL=_descriptionURL;
@property(readonly, nonatomic) NSString *plan; // @synthesize plan=_plan;
@property(copy, nonatomic) NSString *sampleAllowedFlags; // @synthesize sampleAllowedFlags=m_SampleAllowedFlags;
@property(nonatomic) int bonusDoncoin; // @synthesize bonusDoncoin=m_BonusDoncoin;
@property(nonatomic) _Bool restored; // @synthesize restored=m_Restored;
@property(nonatomic) _Bool downloaded; // @synthesize downloaded=m_Downloaded;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=m_IconURL;
@property(nonatomic) _Bool buyFlag; // @synthesize buyFlag=m_BuyFlag;
@property(readonly, nonatomic) NSArray *songArray; // @synthesize songArray=m_SongArray;
@property(readonly, nonatomic) NSString *price; // @synthesize price=m_Price;
@property(copy, nonatomic) NSString *description; // @synthesize description=m_Description;
@property(readonly, nonatomic) NSString *title; // @synthesize title=m_Title;
@property(readonly, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=m_ProductIdentifier;
- (void)setTitle:(id)arg1 price:(id)arg2;
- (int)songCount;
- (id)songList;
- (void)addSong:(id)arg1;
- (void)dealloc;
- (id)initWithProductIdentifier:(id)arg1 description:(id)arg2 plan:(id)arg3;

@end
