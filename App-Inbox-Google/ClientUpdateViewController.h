//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;

@interface ClientUpdateViewController : UIViewController
{
    UIImageView *iconView_;
    UILabel *noticeLabel_;
    UIView *separatorView_;
    UIButton *updateButton_;
    NSString *updateUrl;
}

@property(copy, nonatomic) NSString *updateUrl; // @synthesize updateUrl;
- (void).cxx_destruct;
- (void)updateButtonTapped:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)createSubviews;
- (int)preferredStatusBarStyle;
- (void)viewDidLoad;

@end
