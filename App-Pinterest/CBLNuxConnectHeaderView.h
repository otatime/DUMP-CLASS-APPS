//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class CALayer, CBLNuxConnectStepData, CBLNuxHeaderView, CBLTapTargetButton, NSString, UIButton, UIImageView;

@interface CBLNuxConnectHeaderView : UIView <UIScrollViewDelegate>
{
    BOOL _facebookConnected;
    BOOL _twitterConnected;
    id <CBLNuxConnectHeaderViewDelegate> _delegate;
    float _shortHeaderHeight;
    int _currentNetwork;
    CBLNuxConnectStepData *_stepData;
    CBLNuxHeaderView *_headerView;
    UIButton *_facebookButton;
    UIButton *_twitterButton;
    CBLTapTargetButton *_skipButton;
    CALayer *_buttonSeparator;
    UIImageView *_connectedCaret;
    float _lastContentOffset;
}

+ (float)totalHeight;
@property(nonatomic) float lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(retain, nonatomic) UIImageView *connectedCaret; // @synthesize connectedCaret=_connectedCaret;
@property(retain, nonatomic) CALayer *buttonSeparator; // @synthesize buttonSeparator=_buttonSeparator;
@property(retain, nonatomic) CBLTapTargetButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) UIButton *twitterButton; // @synthesize twitterButton=_twitterButton;
@property(retain, nonatomic) UIButton *facebookButton; // @synthesize facebookButton=_facebookButton;
@property(retain, nonatomic) CBLNuxHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) CBLNuxConnectStepData *stepData; // @synthesize stepData=_stepData;
@property(nonatomic) int currentNetwork; // @synthesize currentNetwork=_currentNetwork;
@property(nonatomic) float shortHeaderHeight; // @synthesize shortHeaderHeight=_shortHeaderHeight;
@property(nonatomic) BOOL twitterConnected; // @synthesize twitterConnected=_twitterConnected;
@property(nonatomic) BOOL facebookConnected; // @synthesize facebookConnected=_facebookConnected;
@property(nonatomic) __weak id <CBLNuxConnectHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutCaret;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)skipButtonTapped;
- (void)twitterButtonTapped:(id)arg1;
- (void)facebookButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

