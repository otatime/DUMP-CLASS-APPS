//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMMessageAppModel, FBMStringWithRedactedDescription, FBMUser, MNMessageCoreViewModel, MNMessageSourceAppAttributionViewModel, NSDictionary, NSObject<NSCopying>, NSSet, NSString;

@interface MNMessageRowBuilder : NSObject
{
    FBMMessageAppModel *_message;
    MNMessageCoreViewModel *_coreViewModel;
    FBMStringWithRedactedDescription *_accessibilityLabel;
    NSString *_accessibilityHint;
    NSString *_customLikeEmoji;
    FBMUser *_sender;
    unsigned int _previousType;
    unsigned int _nextType;
    unsigned int _profileImagePosition;
    unsigned int _readReceiptState;
    BOOL _displayAsSent;
    BOOL _isLastRow;
    BOOL _isLastRowFromMe;
    BOOL _isLastRowFromOthers;
    BOOL _shouldShowWideGutter;
    BOOL _previousIsSameMessageGroup;
    BOOL _nextIsSameMessageGroup;
    BOOL _shouldEnableHideMenuItem;
    BOOL _shouldExpandFailedTapArea;
    BOOL _showNonPushableBubble;
    NSSet *_readUserIds;
    NSDictionary *_viewModelsByElementKind;
    BOOL _shouldShowSentTextForNonMessengerUser;
    MNMessageSourceAppAttributionViewModel *_attributionViewModel;
    NSObject<NSCopying> *_attachmentViewModel;
}

+ (id)messageRowFromExistingMessageRow:(id)arg1;
+ (id)messageRow;
- (void).cxx_destruct;
- (id)withAttachmentViewModel:(id)arg1;
- (id)withAttributionViewModel:(id)arg1;
- (id)withShouldShowSentTextForNonMessengerUser:(BOOL)arg1;
- (id)withViewModelsByElementKind:(id)arg1;
- (id)withReadUserIds:(id)arg1;
- (id)withShowNonPushableBubble:(BOOL)arg1;
- (id)withShouldExpandFailedTapArea:(BOOL)arg1;
- (id)withShouldEnableHideMenuItem:(BOOL)arg1;
- (id)withNextIsSameMessageGroup:(BOOL)arg1;
- (id)withPreviousIsSameMessageGroup:(BOOL)arg1;
- (id)withShouldShowWideGutter:(BOOL)arg1;
- (id)withIsLastRowFromOthers:(BOOL)arg1;
- (id)withIsLastRowFromMe:(BOOL)arg1;
- (id)withIsLastRow:(BOOL)arg1;
- (id)withDisplayAsSent:(BOOL)arg1;
- (id)withReadReceiptState:(unsigned int)arg1;
- (id)withProfileImagePosition:(unsigned int)arg1;
- (id)withNextType:(unsigned int)arg1;
- (id)withPreviousType:(unsigned int)arg1;
- (id)withSender:(id)arg1;
- (id)withCustomLikeEmoji:(id)arg1;
- (id)withAccessibilityHint:(id)arg1;
- (id)withAccessibilityLabel:(id)arg1;
- (id)withCoreViewModel:(id)arg1;
- (id)withMessage:(id)arg1;
- (id)build;

@end

