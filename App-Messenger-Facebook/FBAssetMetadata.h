//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary;

@interface FBAssetMetadata : FBValueObject <NSCopying, NSCoding>
{
    NSDictionary *_metadataDictionary;
    unsigned int _assetType;
    double _duration;
}

@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) unsigned int assetType; // @synthesize assetType=_assetType;
@property(readonly, copy, nonatomic) NSDictionary *metadataDictionary; // @synthesize metadataDictionary=_metadataDictionary;
- (void).cxx_destruct;
- (id)initWithMetadataDictionary:(id)arg1 assetType:(unsigned int)arg2 duration:(double)arg3;

@end

