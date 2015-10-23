//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFInfinitePageViewItem.h"

#import "UIWebViewDelegate.h"

@class AFProgressHUDView, AFPurchasable, NSString, UIImageView, UILabel, UIView, UIWebView;

@interface AFSupplyShopFeaturedInfinitePageViewItem : AFInfinitePageViewItem <UIWebViewDelegate>
{
    AFPurchasable *_purchasable;
    id <AFSupplyShopFeaturedInfinitePageViewItemDelegate> _delegate;
    UIImageView *_logoView;
    UILabel *_titleView;
    UILabel *_subtitleView;
    UIView *_logoTitleContainerView;
    UIWebView *_webView;
    AFProgressHUDView *_hudView;
}

@property(retain, nonatomic) AFProgressHUDView *hudView; // @synthesize hudView=_hudView;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIView *logoTitleContainerView; // @synthesize logoTitleContainerView=_logoTitleContainerView;
@property(retain, nonatomic) UILabel *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic) __weak id <AFSupplyShopFeaturedInfinitePageViewItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AFPurchasable *purchasable; // @synthesize purchasable=_purchasable;
- (void).cxx_destruct;
- (void)tapDetected:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)reloadPackLogo;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
