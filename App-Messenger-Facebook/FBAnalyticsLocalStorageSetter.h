//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAnalyticsJavaScriptEvaluatorDelegate.h"

@class FBAnalyticsJavaScriptEvaluator, NSString;

@interface FBAnalyticsLocalStorageSetter : NSObject <FBAnalyticsJavaScriptEvaluatorDelegate>
{
    FBAnalyticsJavaScriptEvaluator *_javaScriptEvaluator;
    BOOL _startedJavaScriptEvaluator;
    CDUnknownBlockType _startCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType startCompletionBlock; // @synthesize startCompletionBlock=_startCompletionBlock;
- (void).cxx_destruct;
- (void)_onJavaScriptEvaluationComplete;
- (void)_injectDeviceID:(id)arg1 usingHTML:(id)arg2 baseURL:(id)arg3 evaluatingJS:(id)arg4;
- (BOOL)localStorageExistsOnDisk;
- (id)_localStorageFilePath;
- (void)javaScriptEvaluator:(id)arg1 didFailWithError:(id)arg2;
- (void)javaScriptEvaluator:(id)arg1 didSucceedWithResponse:(id)arg2;
- (void)stop;
- (void)startWithDeviceID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithJavaScriptEvaluator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

