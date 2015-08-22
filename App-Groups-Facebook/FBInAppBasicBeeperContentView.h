//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "InAppNotificationContentView.h"

@class FBRichTextView, NSAttributedString, NSString, UIImageView;

@interface FBInAppBasicBeeperContentView : UIView <InAppNotificationContentView>
{
    UIView *_separatorView;
    UIImageView *_handleView;
    id <FBInAppBasicBeeperContentViewDelegate> _delegate;
    NSAttributedString *_attributedMessage;
    UIView *_imageView;
    FBRichTextView *_messageView;
}

+ (float)messageFontSize;
@property(retain, nonatomic) FBRichTextView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) UIView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSAttributedString *attributedMessage; // @synthesize attributedMessage=_attributedMessage;
@property(nonatomic) __weak id <FBInAppBasicBeeperContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didReplaceNotification;
- (void)didIgnoreNotification;
- (void)didDismissNotification;
- (void)didSelectNotification;
- (BOOL)isAccessibilityElement;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
