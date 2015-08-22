//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHTTPURLResponse, NSObject<OS_dispatch_queue>;

@interface FBResponseProcessor : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <FBRequest> _request;
    id <FBDataDeserializing> _dataDeserializer;
    NSHTTPURLResponse *_HTTPURLResponse;
    id <FBResponseProcessorDelegate> _delegate;
}

@property(nonatomic) __weak id <FBResponseProcessorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSHTTPURLResponse *HTTPURLResponse; // @synthesize HTTPURLResponse=_HTTPURLResponse;
@property(readonly, nonatomic) id <FBDataDeserializing> dataDeserializer; // @synthesize dataDeserializer=_dataDeserializer;
@property(readonly, nonatomic) id <FBRequest> request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)_propagateError:(id)arg1 withHooks:(id)arg2;
- (id)description;
- (void)processData:(id)arg1 withConfiguration:(id)arg2;
- (id)initWithRequest:(id)arg1 dataDeserializer:(id)arg2 HTTPURLResponse:(id)arg3 callbackQueue:(id)arg4;

@end

