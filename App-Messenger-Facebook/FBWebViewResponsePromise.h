//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBWebViewResponse;

@interface FBWebViewResponsePromise : NSObject
{
    struct Promise<std::__1::pair<FBWebViewResponse *, NSError *>> _promise;
    FBWebViewResponse *_response;
}

@property(readonly, nonatomic) FBWebViewResponse *response; // @synthesize response=_response;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setFailure:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)then:(CDUnknownBlockType)arg1 otherwise:(CDUnknownBlockType)arg2;

@end

