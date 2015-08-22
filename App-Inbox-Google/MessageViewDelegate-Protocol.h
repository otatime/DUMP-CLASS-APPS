//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AttachmentCardView, MessageView, NSURL;

@protocol MessageViewDelegate <NSObject>
- (void)messageViewDidChangeHeight:(MessageView *)arg1 scrollNeeded:(BOOL)arg2;
- (void)messageViewDidTapEditButton:(MessageView *)arg1;
- (void)messageViewDidTapDiscardButton:(MessageView *)arg1;
- (void)messageViewDidTapMoreButton:(MessageView *)arg1;
- (void)messageView:(MessageView *)arg1 didToggleSenderDetails:(BOOL)arg2;
- (void)messageView:(MessageView *)arg1 didToggleQuotedTextButtonAtRegionIndex:(unsigned int)arg2;
- (void)messageView:(MessageView *)arg1 didSelectAttachmentCard:(AttachmentCardView *)arg2;
- (void)messageView:(MessageView *)arg1 didSelectUrl:(NSURL *)arg2;
@end
