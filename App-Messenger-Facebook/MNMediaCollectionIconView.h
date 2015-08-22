//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton;

@interface MNMediaCollectionIconView : UIView
{
    UIButton *_button;
    float _iconSize;
    NSString *_attributionID;
    id <MNMediaCollectionIconViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MNMediaCollectionIconViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *attributionID; // @synthesize attributionID=_attributionID;
- (void).cxx_destruct;
- (void)_iconPressed;
- (void)setImage:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithSize:(float)arg1;

@end

