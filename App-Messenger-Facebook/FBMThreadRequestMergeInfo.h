//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMBatchThreadHandlerRequest, FBMBatchThreadResponse, NSHashTable;

@interface FBMThreadRequestMergeInfo : NSObject
{
    BOOL _isLongRunning;
    unsigned int _requestState;
    NSHashTable *_requestDependsOn;
    NSHashTable *_requestDependents;
    FBMBatchThreadHandlerRequest *_request;
    FBMBatchThreadResponse *_currentResponse;
    id <FBMThreadRequestListener> _listener;
}

@property(retain, nonatomic) id <FBMThreadRequestListener> listener; // @synthesize listener=_listener;
@property(retain, nonatomic) FBMBatchThreadResponse *currentResponse; // @synthesize currentResponse=_currentResponse;
@property(retain, nonatomic) FBMBatchThreadHandlerRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSHashTable *requestDependents; // @synthesize requestDependents=_requestDependents;
@property(retain, nonatomic) NSHashTable *requestDependsOn; // @synthesize requestDependsOn=_requestDependsOn;
@property(nonatomic) BOOL isLongRunning; // @synthesize isLongRunning=_isLongRunning;
@property(nonatomic) unsigned int requestState; // @synthesize requestState=_requestState;
- (void).cxx_destruct;
- (id)init;

@end

