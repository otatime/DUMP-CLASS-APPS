//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBStreamingCachedImage, NSError;

@interface FBStreamingCachedImageOrError : NSObject
{
    FBStreamingCachedImage *_value;
    NSError *_error;
}

+ (id)newWithValue:(id)arg1 orError:(id)arg2;
+ (id)newWithError:(id)arg1;
+ (id)newWithValue:(id)arg1;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) FBStreamingCachedImage *value; // @synthesize value=_value;
- (void).cxx_destruct;

@end
