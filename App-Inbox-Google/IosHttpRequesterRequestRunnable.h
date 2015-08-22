//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class GTMHTTPFetcherService, IosHttpRequester, JCGCuHttpRequest, NSString;

@interface IosHttpRequesterRequestRunnable : NSObject <JavaLangRunnable>
{
    IosHttpRequester *requester_;
    JCGCuHttpRequest *request_;
    id <JCGCuCallback> callback_;
    float timeoutInterval_;
    GTMHTTPFetcherService *fetcherService_;
}

- (void)run;
- (void)dealloc;
- (id)initWithRequester:(id)arg1 withRequest:(id)arg2 callback:(id)arg3 timeoutInterval:(float)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
