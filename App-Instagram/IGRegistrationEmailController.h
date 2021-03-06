//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGRegistrationStepObject.h"
#import "IGTextFieldDelegate.h"

@class IGRegistrationNavigationBar, IGRegistrationStepView, NSString, UIView;

@interface IGRegistrationEmailController : NSObject <IGTextFieldDelegate, IGRegistrationStepObject>
{
    BOOL _submitting;
    id <IGRegistrationEmailControllerDelegate> _delegate;
    IGRegistrationStepView *_stepView;
    IGRegistrationNavigationBar *_navBar;
    UIView *_iconView;
}

@property(nonatomic) BOOL submitting; // @synthesize submitting=_submitting;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) IGRegistrationNavigationBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) IGRegistrationStepView *stepView; // @synthesize stepView=_stepView;
@property(nonatomic) __weak id <IGRegistrationEmailControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)validateEmail:(id)arg1;
- (BOOL)validateField:(id)arg1 withAlert:(BOOL)arg2;
- (void)verifyEmailAndContinue;
- (void)setIsVerifying:(BOOL)arg1;
- (void)nextButtonTapped;
- (void)stepViewWillAppear;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

