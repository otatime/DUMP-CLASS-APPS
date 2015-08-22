//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBFormElementView.h"

@class UIImageView, UILabel;

@interface FBFormPickerElementView : FBFormElementView
{
    UIImageView *_imageView;
    UILabel *_pickerLabel;
}

@property(readonly, nonatomic) UILabel *pickerLabel; // @synthesize pickerLabel=_pickerLabel;
- (void).cxx_destruct;
- (void)_populatePickerLabelFromElement;
- (float)_yOriginForLabelVerticallyCentered:(id)arg1;
- (id)pickerElement;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)prepareForElement:(id)arg1;
- (id)init;

@end
