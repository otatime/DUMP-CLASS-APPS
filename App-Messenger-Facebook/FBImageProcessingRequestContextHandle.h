//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBImageProcessingSubPipeDelegate.h"

@class NSString;

@interface FBImageProcessingRequestContextHandle : NSObject <FBImageProcessingSubPipeDelegate>
{
    BOOL _pruneOldestFirst;
    BOOL _prioritizeNewRequestsWhenSorting;
}

@property(nonatomic) BOOL prioritizeNewRequestsWhenSorting; // @synthesize prioritizeNewRequestsWhenSorting=_prioritizeNewRequestsWhenSorting;
@property(nonatomic) BOOL pruneOldestFirst; // @synthesize pruneOldestFirst=_pruneOldestFirst;
- (void)imageProcessingSubPipe:(id)arg1 willPruneOrderedProcessRequests:(id)arg2;
- (void)imageProcessingSubPipe:(id)arg1 willProcessRequests:(id)arg2 needSort:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

