//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBPersistentCache, NSString;

@interface FBHScrollOffsetStore : NSObject
{
    NSString *_key;
    FBPersistentCache *_cache;
}

- (void).cxx_destruct;
@property(nonatomic) float offset;
- (id)initWithKey:(id)arg1 persistentCache:(id)arg2;
- (id)init;

@end

