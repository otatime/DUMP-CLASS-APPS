//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface THJoinGroupUtil : NSObject
{
}

+ (void)_leaveGroup:(id)arg1 session:(id)arg2 source:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
+ (void)_joinGroup:(id)arg1 session:(id)arg2 source:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
+ (void)joinButtonTappedOnGroup:(id)arg1 session:(id)arg2 source:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
+ (void)configureJoinButton:(id)arg1 joinState:(id)arg2 isInList:(BOOL)arg3;

@end
