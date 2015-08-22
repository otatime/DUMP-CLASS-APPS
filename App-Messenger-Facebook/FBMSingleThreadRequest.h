//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class FBMSingleThreadRequestFilter, MNModelRequestConfiguration;

@interface FBMSingleThreadRequest : NSObject <NSCopying>
{
    FBMSingleThreadRequestFilter *_filter;
    MNModelRequestConfiguration *_configuration;
    CDUnknownBlockType _fetchedBlock;
    CDUnknownBlockType _threadNotCreatedBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _progressBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType threadNotCreatedBlock; // @synthesize threadNotCreatedBlock=_threadNotCreatedBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType fetchedBlock; // @synthesize fetchedBlock=_fetchedBlock;
@property(readonly, copy, nonatomic) MNModelRequestConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) FBMSingleThreadRequestFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFilter:(id)arg1 configuration:(id)arg2 fetchedBlock:(CDUnknownBlockType)arg3 threadNotCreatedBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6;
- (id)init;

@end

