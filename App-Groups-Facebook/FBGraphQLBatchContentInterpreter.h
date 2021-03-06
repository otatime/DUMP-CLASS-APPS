//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBContentInterpreting.h"

@class FBGraphQLBatchRequest, NSDictionary, NSString;

@interface FBGraphQLBatchContentInterpreter : NSObject <FBContentInterpreting>
{
    FBGraphQLBatchRequest *_request;
    CDUnknownBlockType _parseBlock;
    unsigned int _responseCount;
    NSDictionary *_labelToQueryMap;
}

- (void).cxx_destruct;
- (id)interpret:(id)arg1 responseProcessor:(id)arg2 error:(id *)arg3;
- (id)initWithRequest:(id)arg1 parseBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

