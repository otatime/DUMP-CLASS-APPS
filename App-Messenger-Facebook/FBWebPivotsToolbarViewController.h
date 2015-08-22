//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBWebPivotsToolbarViewDelegate.h"

@class FBUserSession, FBWebPivotsToolbarView, NSString;

@interface FBWebPivotsToolbarViewController : UIViewController <FBWebPivotsToolbarViewDelegate>
{
    FBUserSession *_session;
    id <FBWebPivotsToolbarViewControllerDelegate> _delegate;
    FBWebPivotsToolbarView *_toolbarView;
}

@property(retain, nonatomic) FBWebPivotsToolbarView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(nonatomic) __weak id <FBWebPivotsToolbarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (BOOL)isToolbarViewFullyVisible;
- (id)_createToolTipNuxWithMessage:(id)arg1 forView:(id)arg2;
- (void)resetSubtitle;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setCloseButtonEnabled:(BOOL)arg1;
- (void)setShareButtonEnabled:(BOOL)arg1;
- (void)setForwardButtonEnabled:(BOOL)arg1;
- (void)setBackButtonEnabled:(BOOL)arg1;
- (void)_didTapToolbarWithGestureRecogniser:(id)arg1;
- (void)webPivotsToolbarViewDidSelectSubtitleButton:(id)arg1;
- (void)webPivotsToolbarViewDidSelectCloseButton:(id)arg1;
- (void)webPivotsToolbarViewDidSelectShareButton:(id)arg1;
- (void)webPivotsToolbarViewDidSelectForwardButton:(id)arg1;
- (void)webPivotsToolbarViewDidSelectBackButton:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

