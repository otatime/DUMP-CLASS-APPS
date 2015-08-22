//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SLKTextViewController.h"

#import "CBLConversationAddPinViewControllerDelegate.h"
#import "CBLConversationEarlierMessagesHeaderView.h"
#import "CBLConversationMessageCellDelegate.h"
#import "CBLRemoteModelCollectionDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class CBLConversation, CBLConversationAddPinViewController, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, UIButton, UILabel, UIView;

@interface CBLChatViewController : SLKTextViewController <CBLConversationAddPinViewControllerDelegate, CBLConversationEarlierMessagesHeaderView, CBLConversationMessageCellDelegate, CBLRemoteModelCollectionDelegate, UIViewControllerTransitioningDelegate>
{
    BOOL _addingPin;
    BOOL _pollingStarted;
    CBLConversation *_conversation;
    UILabel *_titleViewLabel;
    UIView *_viewForPinAdded;
    UIButton *_addPinButton;
    CBLConversationAddPinViewController *_addPinViewController;
    NSMutableArray *_pendingMessages;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    double _fetchDelay;
}

@property(nonatomic) BOOL pollingStarted; // @synthesize pollingStarted=_pollingStarted;
@property(nonatomic) double fetchDelay; // @synthesize fetchDelay=_fetchDelay;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(retain, nonatomic) NSMutableArray *pendingMessages; // @synthesize pendingMessages=_pendingMessages;
@property(retain, nonatomic) CBLConversationAddPinViewController *addPinViewController; // @synthesize addPinViewController=_addPinViewController;
@property(retain, nonatomic) UIButton *addPinButton; // @synthesize addPinButton=_addPinButton;
@property(retain, nonatomic) UIView *viewForPinAdded; // @synthesize viewForPinAdded=_viewForPinAdded;
@property(retain, nonatomic) UILabel *titleViewLabel; // @synthesize titleViewLabel=_titleViewLabel;
@property(nonatomic, getter=isAddingPin) BOOL addingPin; // @synthesize addingPin=_addingPin;
@property(retain, nonatomic) CBLConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (void)settingsButtonPressed:(id)arg1;
- (void)contextualMenuSelectedOption:(id)arg1;
- (void)handleScrollViewShouldScrollToTop;
- (void)didTapAddPinButton:(id)arg1;
- (void)sendMessageWithText:(id)arg1 andPin:(id)arg2 animated:(BOOL)arg3;
- (void)didPressRightButton:(id)arg1;
- (id)localLayoutAttributes;
- (void)checkForNewMessages;
- (void)stopPolling;
- (void)startPolling;
- (void)remoteModelCollectionDidClear:(id)arg1;
- (void)remoteModelCollectionDidUpdateContent:(id)arg1;
- (BOOL)shouldShowTimeStampForMessageAtIndexPath:(id)arg1;
- (void)loadConversationMessages;
- (id)animationControllerForDismissedController:(id)arg1;
- (void)addPinControllerDidCancel:(id)arg1;
- (void)addPinController:(id)arg1 didSelectPin:(id)arg2 cell:(id)arg3 layoutAttributes:(id)arg4;
- (void)conversationHeaderView:(id)arg1 tappedLoadEarlierMessagesButton:(id)arg2;
- (void)conversationMessageCell:(id)arg1 tappedSender:(id)arg2;
- (void)conversationMessageCell:(id)arg1 tappedObject:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithConversation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

