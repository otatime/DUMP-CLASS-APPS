//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MNSessionStateMachine : NSObject
{
    id <MNSessionStateMachineDelegate> _delegate;
    BOOL _isTransitioning;
    int _state;
}

@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)transitionToNextStateForApplicationState:(int)arg1;
- (id)description;
- (id)initWithDelegate:(id)arg1;

@end

