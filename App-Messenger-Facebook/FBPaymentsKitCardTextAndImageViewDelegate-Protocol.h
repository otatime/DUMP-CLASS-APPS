//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBPaymentsKitCardTextAndImageView, NSString;

@protocol FBPaymentsKitCardTextAndImageViewDelegate <NSObject>
- (int)getCurrentCardAssociation:(FBPaymentsKitCardTextAndImageView *)arg1;
- (void)textAndImageViewDidChange:(FBPaymentsKitCardTextAndImageView *)arg1 isUserInput:(BOOL)arg2 isCompleted:(BOOL)arg3 errorDescription:(NSString *)arg4 shouldAlert:(BOOL)arg5;
@end

