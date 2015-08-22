//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, PPLinkButton, UIImageView, UILabel, UIView;

@interface PPPaymentMethodCell : UITableViewCell <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _showUserInfo;
    UIView *_topView;
    CDUnknownBlockType _touchBlock;
    float _tableRowHeight;
    UIView *_userInfoView;
    UIView *_loginActionView;
    UILabel *_userInfoLabel;
    PPLinkButton *_logoutButton;
    UIImageView *_logoView;
    int _signalForAnalyticsKVO;
}

@property(nonatomic) int signalForAnalyticsKVO; // @synthesize signalForAnalyticsKVO=_signalForAnalyticsKVO;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) PPLinkButton *logoutButton; // @synthesize logoutButton=_logoutButton;
@property(retain, nonatomic) UILabel *userInfoLabel; // @synthesize userInfoLabel=_userInfoLabel;
@property(retain, nonatomic) UIView *loginActionView; // @synthesize loginActionView=_loginActionView;
@property(retain, nonatomic) UIView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(readonly, nonatomic) float tableRowHeight; // @synthesize tableRowHeight=_tableRowHeight;
@property(nonatomic) BOOL showUserInfo; // @synthesize showUserInfo=_showUserInfo;
@property(copy, nonatomic) CDUnknownBlockType touchBlock; // @synthesize touchBlock=_touchBlock;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUserInfoVisible:(BOOL)arg1 animated:(BOOL)arg2 complete:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSString *userInfoString;
- (void)dealloc;
- (id)init;
- (void)ppZebraAnalyticsWidgetAddLinkName:(id)arg1 forViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

