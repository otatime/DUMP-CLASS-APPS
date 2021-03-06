//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MNPermissionsViewDelegate.h"

@class FBMPermissionsViewConfiguration, NSString;

@interface MNPermissionsViewController : UIViewController <MNPermissionsViewDelegate>
{
    FBMPermissionsViewConfiguration *_configuration;
    id <MNPermissionsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <MNPermissionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)permissionsViewDidPressDismissButton:(id)arg1;
- (void)permissionsViewDidPressActionButton:(id)arg1;
- (void)loadView;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

