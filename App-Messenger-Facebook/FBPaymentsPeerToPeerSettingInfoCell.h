//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBPaymentsPeerToPeerSettingCell.h"

@class UILabel;

@interface FBPaymentsPeerToPeerSettingInfoCell : FBPaymentsPeerToPeerSettingCell
{
    UILabel *_substituteTextLabel;
    float _textHeadingSpace;
}

@property(nonatomic) float textHeadingSpace; // @synthesize textHeadingSpace=_textHeadingSpace;
- (void).cxx_destruct;
- (id)textLabel;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
