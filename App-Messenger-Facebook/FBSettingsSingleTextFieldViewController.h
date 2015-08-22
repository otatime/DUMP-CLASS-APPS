//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, UITextField;

@interface FBSettingsSingleTextFieldViewController : UIViewController <UITextFieldDelegate>
{
    UITextField *_urlTextField;
    NSString *_staticText;
}

@property(copy, nonatomic) NSString *staticText; // @synthesize staticText=_staticText;
@property(readonly, nonatomic) UITextField *urlTextField; // @synthesize urlTextField=_urlTextField;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)dealloc;
- (id)initWithDescription:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

