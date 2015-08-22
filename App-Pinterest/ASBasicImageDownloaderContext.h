//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSURL, NSURLSessionTask;

@interface ASBasicImageDownloaderContext : NSObject
{
    BOOL _invalid;
    struct RecursiveMutex _propertyLock;
    NSURL *_URL;
    NSURLSessionTask *_sessionTask;
    NSMutableArray *_callbackDatas;
}

+ (void)cancelContextWithURL:(id)arg1;
+ (id)contextForURL:(id)arg1;
@property(retain, nonatomic) NSMutableArray *callbackDatas; // @synthesize callbackDatas=_callbackDatas;
@property(nonatomic) __weak NSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createSessionTaskIfNecessaryWithBlock:(CDUnknownBlockType)arg1;
- (void)completeWithImage:(id)arg1 error:(id)arg2;
- (void)performProgressBlocks:(float)arg1;
- (void)addCallbackData:(id)arg1;
- (BOOL)isCancelled;
- (void)cancel;
- (id)initWithURL:(id)arg1;

@end

