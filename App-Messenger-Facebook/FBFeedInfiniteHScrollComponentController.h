//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKComponentController.h"

@class NSObject<OS_dispatch_queue>;

@interface FBFeedInfiniteHScrollComponentController : CKComponentController
{
    unsigned int _currentLoadIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _numberOfEdges;
}

- (void).cxx_destruct;
- (void)didUpdateEdge:(id)arg1 handle:(id)arg2;
- (void)_processFetchResponse:(id)arg1 component:(id)arg2;
- (void)nearingEnd;
- (void)didUpdateComponent;
- (id)init;

@end

