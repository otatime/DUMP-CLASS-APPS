//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNRegistrationExistingAccount, MNRegistrationFlowController;

@protocol MNRegistrationFlowControllerDelegate <NSObject>
- (void)registrationFlowControllerSwitchToFacebookLoginFlow:(MNRegistrationFlowController *)arg1;
- (void)registrationFlowController:(MNRegistrationFlowController *)arg1 didRequestLoginApprovalWithExistingAccount:(MNRegistrationExistingAccount *)arg2;
- (void)registrationFlowController:(MNRegistrationFlowController *)arg1 didCompleteWithPhoneNumber:(id <FBPhoneNumber>)arg2 isPartial:(BOOL)arg3;
@end

