//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface FBServiceResponseAccumulator : NSObject
{
    NSMutableDictionary *_responses;
    struct Mutex _lock;
    CDUnknownBlockType _completionBlock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    unsigned int _count;
}

@property(readonly, nonatomic) unsigned int count; // @synthesize count=_count;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)receivedResponse:(id)arg1 forKey:(id)arg2;
- (id)initWithCount:(unsigned int)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
