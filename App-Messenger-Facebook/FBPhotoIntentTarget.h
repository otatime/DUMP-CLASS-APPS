//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIntentTarget.h"

@class NSString;

@interface FBPhotoIntentTarget : FBIntentTarget
{
    NSString *_FBID;
}

+ (id)photoTargetWithFBID:(id)arg1;
@property(readonly, copy, nonatomic) NSString *FBID; // @synthesize FBID=_FBID;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)fallbackURLs;

@end

