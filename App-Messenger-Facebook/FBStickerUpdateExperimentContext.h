//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBStickerUpdateExperimentContext : FBExperimentContext
{
    BOOL _stickerUpdateEnabled;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)experimentName;
+ (id)parameterConfigurations;
@property(readonly, nonatomic, getter=isStickerUpdateEnabled) BOOL stickerUpdateEnabled; // @synthesize stickerUpdateEnabled=_stickerUpdateEnabled;

@end

