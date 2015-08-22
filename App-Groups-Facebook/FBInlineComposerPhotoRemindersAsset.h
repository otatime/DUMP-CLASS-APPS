//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString, NSURL;

@interface FBInlineComposerPhotoRemindersAsset : FBValueObject <NSCopying>
{
    NSURL *_assetURL;
    NSURL *_groupURL;
    unsigned int _assetIndex;
    NSString *_dataSourceID;
}

@property(readonly, copy, nonatomic) NSString *dataSourceID; // @synthesize dataSourceID=_dataSourceID;
@property(readonly, nonatomic) unsigned int assetIndex; // @synthesize assetIndex=_assetIndex;
@property(readonly, copy, nonatomic) NSURL *groupURL; // @synthesize groupURL=_groupURL;
@property(readonly, copy, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (void).cxx_destruct;
- (id)initWithAssetURL:(id)arg1 groupURL:(id)arg2 assetIndex:(unsigned int)arg3 dataSourceID:(id)arg4;

@end
