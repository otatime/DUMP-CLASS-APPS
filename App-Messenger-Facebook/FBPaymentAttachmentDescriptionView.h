//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBPaymentAttachmentViewModel, FBRichTextView;

@interface FBPaymentAttachmentDescriptionView : UIView
{
    FBRichTextView *_titleTextView;
    FBRichTextView *_descriptionTextView;
    FBPaymentAttachmentViewModel *_viewModel;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 forWidth:(float)arg2;
- (void).cxx_destruct;
- (void)updateWithViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

