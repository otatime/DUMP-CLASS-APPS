//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLShareObjectActivityView;

@protocol CBLShareObjectActivityViewDelegate <NSObject>
- (void)CBLSharePinActivitiesViewDidTapOther:(CBLShareObjectActivityView *)arg1;
- (void)CBLSharePinActivitiesViewDidTapSMS:(CBLShareObjectActivityView *)arg1;
- (void)CBLSharePinActivitiesViewDidTapEmail:(CBLShareObjectActivityView *)arg1;
- (void)CBLSharePinActivitiesViewDidTapLine:(CBLShareObjectActivityView *)arg1;
- (void)CBLSharePinActivitiesViewDidTapFBMessenger:(CBLShareObjectActivityView *)arg1;
- (void)CBLSharePinActivitiesViewDidTapWhatsApp:(CBLShareObjectActivityView *)arg1;
- (void)CBLSharePinActivitiesViewDidTapTwitter:(CBLShareObjectActivityView *)arg1;
- (void)CBLSharePinActivitiesViewDidTapFacebook:(CBLShareObjectActivityView *)arg1;
- (void)CBLSharePinActivitiesViewDidTapClose:(CBLShareObjectActivityView *)arg1;

@optional
- (void)CBLSharePinActivitiesViewDidTapCopyLink:(CBLShareObjectActivityView *)arg1;
- (void)CBLSharePinActivitiesViewDidTapFlag:(CBLShareObjectActivityView *)arg1;
- (void)CBLSharePinActivitiesViewDidTapSaveImage:(CBLShareObjectActivityView *)arg1;
@end

