//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMBatchMembersAdder, FBMGroupThreadKey, NSError;

@protocol FBMMembersAdderDelegate <NSObject>
- (void)membersAdder:(FBMBatchMembersAdder *)arg1 couldNotAddMembersToGroupThreadKey:(FBMGroupThreadKey *)arg2 withError:(NSError *)arg3;
- (void)membersAdder:(FBMBatchMembersAdder *)arg1 didAddMembersToGroupThreadKey:(FBMGroupThreadKey *)arg2;
@end

