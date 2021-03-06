//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBFeedVideoViewPoller.h"

@class NSString;

@interface FBFeedVideoViewTestPoller : NSObject <FBFeedVideoViewPoller>
{
    unsigned int _suspensionReasons;
    id <FBFeedVideoViewPollerTarget> _target;
}

@property(nonatomic) __weak id <FBFeedVideoViewPollerTarget> target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)poll;
- (void)removeSuspensionReason:(unsigned int)arg1;
- (void)addSuspensionReason:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

