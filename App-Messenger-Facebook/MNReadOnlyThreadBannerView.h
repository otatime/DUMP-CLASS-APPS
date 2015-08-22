//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIActionSheetDelegate.h"

@class FBRichTextView, NSString, UIToolbar;

@interface MNReadOnlyThreadBannerView : UIView <UIActionSheetDelegate>
{
    id <MNReadOnlyThreadBannerViewDelegate> _delegate;
    FBRichTextView *_textView;
    UIToolbar *_toolbar;
    struct _NSRange _takeActionRange;
}

@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) struct _NSRange takeActionRange; // @synthesize takeActionRange=_takeActionRange;
@property(retain, nonatomic) FBRichTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <MNReadOnlyThreadBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)_attributedAction:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (void)_initToolbar;
- (void)_initTextView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
