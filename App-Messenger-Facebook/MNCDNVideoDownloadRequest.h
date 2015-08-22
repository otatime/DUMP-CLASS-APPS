//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface MNCDNVideoDownloadRequest : FBValueObject <NSCopying>
{
    NSString *_videoId;
    NSString *_cacheKey;
    unsigned int _lengthInBytes;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _progressBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(readonly, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) unsigned int lengthInBytes; // @synthesize lengthInBytes=_lengthInBytes;
@property(readonly, copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(readonly, copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (id)initWithVideoId:(id)arg1 cacheKey:(id)arg2 lengthInBytes:(unsigned int)arg3 callbackQueue:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6 progressBlock:(CDUnknownBlockType)arg7;

@end

