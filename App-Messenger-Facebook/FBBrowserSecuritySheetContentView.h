//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface FBBrowserSecuritySheetContentView : UIView
{
    BOOL _isPageSecure;
    float _contentHeight;
    UIImageView *_lockImageView;
    UILabel *_urlLabel;
    UILabel *_secureLabel;
}

@property(readonly, nonatomic) BOOL isPageSecure; // @synthesize isPageSecure=_isPageSecure;
@property(readonly, nonatomic) UILabel *secureLabel; // @synthesize secureLabel=_secureLabel;
@property(readonly, nonatomic) UILabel *urlLabel; // @synthesize urlLabel=_urlLabel;
@property(readonly, nonatomic) UIImageView *lockImageView; // @synthesize lockImageView=_lockImageView;
@property(readonly, nonatomic) float contentHeight; // @synthesize contentHeight=_contentHeight;
- (void).cxx_destruct;
- (float)_getUILabelContentTextHeight:(id)arg1 withFont:(id)arg2 andWidth:(float)arg3;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithURL:(id)arg1 andIsPageSecure:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

