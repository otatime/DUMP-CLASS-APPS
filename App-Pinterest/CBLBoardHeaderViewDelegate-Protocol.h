//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLUser, UIButton, UIView;

@protocol CBLBoardHeaderViewDelegate <NSObject>

@optional
- (void)boardHeaderDidTapAddCollaborators;
- (void)boardHeaderDidTapShare:(UIButton *)arg1;
- (void)boardHeaderDidTapSend;
- (void)boardHeaderWantsToEditDescription;
- (void)boardHeaderViewTappedTransparentView:(UIView *)arg1;
- (void)boardHeaderDidTapMoreCollaborators;
- (void)boardHeaderDidSelectFollowers;
- (void)boardHeaderDidSelectPins;
- (void)boardHeaderWantsToIgnoreInvite;
- (void)boardHeaderWantsToAcceptInvite;
- (void)boardHeaderWantsToEditBoard:(UIButton *)arg1;
- (void)boardHeaderWantsToUnFollowBoard;
- (void)boardHeaderWantsToFollowBoard;
- (void)boardHeaderDidSelectPinner:(CBLUser *)arg1;
@end

