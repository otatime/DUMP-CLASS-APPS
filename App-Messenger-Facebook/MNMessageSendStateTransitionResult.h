//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MNMessageSendState;

@interface MNMessageSendStateTransitionResult : NSObject <NSCopying>
{
    unsigned int _subtype;
    BOOL _finished_succeeded;
    MNMessageSendState *_toBeContinued_toState;
}

+ (id)toBeContinuedWithToState:(id)arg1;
+ (id)invalid;
+ (id)finishedWithSucceeded:(BOOL)arg1;
- (void).cxx_destruct;
- (void)matchFinished:(CDUnknownBlockType)arg1 toBeContinued:(CDUnknownBlockType)arg2 invalid:(CDUnknownBlockType)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

