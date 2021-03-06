//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBWebAppActionViewDelegate.h"
#import "FBWebAppActionViewSimpleDelegate.h"

@class NSString;

@interface FBWebAppLinkBannerViewController : UIViewController <FBWebAppActionViewDelegate, FBWebAppActionViewSimpleDelegate>
{
    unsigned int _displayState;
    id <FBWebAppLinkBannerViewControllerDelegate> _delegate;
    NSString *_appName;
    NSString *_displayStyle;
}

@property(copy, nonatomic) NSString *displayStyle; // @synthesize displayStyle=_displayStyle;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) __weak id <FBWebAppLinkBannerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int displayState; // @synthesize displayState=_displayState;
- (void).cxx_destruct;
- (void)webAppActionViewSimpleDidTapAction:(id)arg1;
- (void)webAppActionView:(id)arg1 didTapActionButton:(id)arg2;
- (void)webAppActionView:(id)arg1 didTapDismissButton:(id)arg2;
- (void)loadView;
- (id)initWithDisplayState:(unsigned int)arg1 appName:(id)arg2 displayStyle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

