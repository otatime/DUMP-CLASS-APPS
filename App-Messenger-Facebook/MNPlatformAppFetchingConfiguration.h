//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@interface MNPlatformAppFetchingConfiguration : FBValueObject <NSCopying>
{
    unsigned int _limit;
    float _iconSize;
    unsigned int _maxCachedResponseAgeInSeconds;
    struct CGSize _promotionBannerSize;
}

@property(readonly, nonatomic) unsigned int maxCachedResponseAgeInSeconds; // @synthesize maxCachedResponseAgeInSeconds=_maxCachedResponseAgeInSeconds;
@property(readonly, nonatomic) struct CGSize promotionBannerSize; // @synthesize promotionBannerSize=_promotionBannerSize;
@property(readonly, nonatomic) float iconSize; // @synthesize iconSize=_iconSize;
@property(readonly, nonatomic) unsigned int limit; // @synthesize limit=_limit;
- (id)initWithLimit:(unsigned int)arg1 iconSize:(float)arg2 promotionBannerSize:(struct CGSize)arg3 maxCachedResponseAgeInSeconds:(unsigned int)arg4;

@end
