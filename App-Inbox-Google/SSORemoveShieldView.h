//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QTMActivityIndicator, UILabel;

@interface SSORemoveShieldView : UIView
{
    QTMActivityIndicator *_activityIndicator;
    UILabel *_captionLabel;
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) QTMActivityIndicator *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

