//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ChatControllerDelegate.h"
#import "ChatDisplayMessageDelegate.h"
#import "ChatMessageCellDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class AHCTabBarScrollManager, AccountContext, ChatAncientHistoryUpdateHandler, ChatController, ChatMessageCollectionViewCell, ChatRealTimeMessageUpdateHandler, ChatRecentHistoryUpdateHandler, NSString, NativeChatFlowLayout, UICollectionView, UILongPressGestureRecognizer, UITapGestureRecognizer, User;

@interface NativeChatViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, ChatControllerDelegate, ChatDisplayMessageDelegate, ChatMessageCellDelegate, UIActionSheetDelegate>
{
    BOOL _toolbarIsVisible;
    id <ChatInputHandler> _inputHandler;
    UICollectionView *_collectionView;
    NativeChatFlowLayout *_chatLayout;
    ChatController *_chatController;
    AccountContext *_accountContext;
    ChatMessageCollectionViewCell *_sizingMessageCell;
    AHCTabBarScrollManager *_scrollManager;
    ChatAncientHistoryUpdateHandler *_ancientHistoryUpdateHandler;
    ChatRecentHistoryUpdateHandler *_recentHistoryUpdateHandler;
    ChatRealTimeMessageUpdateHandler *_realTimeMessageUpdateHandler;
    id <ChatUpdateHandler> _currentUpdateHandler;
    User *_engagedUser;
    UITapGestureRecognizer *_singleTapGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    struct CGSize _sizingMessageCellMaxSize;
    struct UIEdgeInsets _toolbarOverlayVisibleInsets;
    struct UIEdgeInsets _inputViewInsets;
    struct CGRect _lastKnownKeyboardRect;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGesture; // @synthesize singleTapGesture=_singleTapGesture;
@property(nonatomic) __weak User *engagedUser; // @synthesize engagedUser=_engagedUser;
@property(retain, nonatomic) id <ChatUpdateHandler> currentUpdateHandler; // @synthesize currentUpdateHandler=_currentUpdateHandler;
@property(retain, nonatomic) ChatRealTimeMessageUpdateHandler *realTimeMessageUpdateHandler; // @synthesize realTimeMessageUpdateHandler=_realTimeMessageUpdateHandler;
@property(retain, nonatomic) ChatRecentHistoryUpdateHandler *recentHistoryUpdateHandler; // @synthesize recentHistoryUpdateHandler=_recentHistoryUpdateHandler;
@property(retain, nonatomic) ChatAncientHistoryUpdateHandler *ancientHistoryUpdateHandler; // @synthesize ancientHistoryUpdateHandler=_ancientHistoryUpdateHandler;
@property(nonatomic) BOOL toolbarIsVisible; // @synthesize toolbarIsVisible=_toolbarIsVisible;
@property(retain, nonatomic) AHCTabBarScrollManager *scrollManager; // @synthesize scrollManager=_scrollManager;
@property(nonatomic) struct CGRect lastKnownKeyboardRect; // @synthesize lastKnownKeyboardRect=_lastKnownKeyboardRect;
@property(nonatomic) struct CGSize sizingMessageCellMaxSize; // @synthesize sizingMessageCellMaxSize=_sizingMessageCellMaxSize;
@property(retain, nonatomic) ChatMessageCollectionViewCell *sizingMessageCell; // @synthesize sizingMessageCell=_sizingMessageCell;
@property(nonatomic) __weak AccountContext *accountContext; // @synthesize accountContext=_accountContext;
@property(retain, nonatomic) ChatController *chatController; // @synthesize chatController=_chatController;
@property(retain, nonatomic) NativeChatFlowLayout *chatLayout; // @synthesize chatLayout=_chatLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <ChatInputHandler> inputHandler; // @synthesize inputHandler=_inputHandler;
@property(nonatomic) struct UIEdgeInsets inputViewInsets; // @synthesize inputViewInsets=_inputViewInsets;
@property(nonatomic) struct UIEdgeInsets toolbarOverlayVisibleInsets; // @synthesize toolbarOverlayVisibleInsets=_toolbarOverlayVisibleInsets;
- (void).cxx_destruct;
- (id)createCollectionView;
- (void)longPressGestureFired:(id)arg1;
- (void)singleTapGestureFired:(id)arg1;
- (void)displayOneToOneChatActionSheetWithUserJidString:(id)arg1;
- (id)messageCellAtPoint:(struct CGPoint)arg1;
- (id)messageCellForIndexPath:(id)arg1;
- (void)updateChatViewScrollIndicatorInsets;
- (struct UIEdgeInsets)calculateUIInsetsIncludeToolbar:(BOOL)arg1;
- (void)updateChatViewInsetsWithToolbarVisibility:(BOOL)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)longPressSucceededWithUserJidString:(id)arg1;
- (void)singleTapSucceededWithUserJidString:(id)arg1;
- (void)toggleCollapsibleMessageCell:(id)arg1;
- (void)reloadSections:(id)arg1 insertSections:(id)arg2 deleteSections:(id)arg3 reloadItems:(id)arg4 insertItems:(id)arg5 deletItems:(id)arg6;
- (void)prepareForRealTimeMessage;
- (void)prepareForAncientHistory;
- (void)prepareForRecentHistory;
- (void)chatDisplayMessageDidReload:(id)arg1;
- (void)resizeText:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)updateChatViewInsetsForInputViewInsets:(struct UIEdgeInsets)arg1;
- (void)updateChatViewInsetsWithTabViewVisibleStatus:(BOOL)arg1;
- (id)initWithChatController:(id)arg1 accountContext:(id)arg2 tabBarScrollManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

