//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTImage_StockImageTypeEnum, NSString;

@protocol JBTImage <NSObject, JavaObject>
- (NSString *)getImageMetadataUrlForTimely;
- (int)getSecondaryColorSample;
- (int)getColorSample;
- (BOOL)shouldExpireFromCache;
- (void)getImageMetadataWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (BOOL)hasImageMetadata;
- (JBTImage_StockImageTypeEnum *)getStockImageType;
- (BOOL)hasImageUrl;
- (NSString *)getImageUrlWithJBTImageUrlSettings:(id <JBTImageUrlSettings>)arg1;
@end
