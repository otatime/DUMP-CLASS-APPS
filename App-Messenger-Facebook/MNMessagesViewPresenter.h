//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNLoadingViewControllerObserver.h"

@class MNLoadingViewController, NSString;

@interface MNMessagesViewPresenter : NSObject <FBSessionClassProvidable, MNLoadingViewControllerObserver>
{
    CDUnknownBlockType _presentationErrorHandlerCreatorBlock;
    BOOL _canTouchNavigationStack;
    unsigned int _loadingVCPushState;
    unsigned int _messagesVCPushState;
    BOOL _redrawPending;
    BOOL _presentationCompleteScheduled;
    BOOL _presentationCancelled;
    BOOL _isPresentationStrategyExecuting;
    BOOL _isTearingDown;
    CDUnknownBlockType _pushMessagesVCBlock;
    CDUnknownBlockType _pushLoadingVCBlock;
    CDUnknownBlockType _popLoadingVCBlock;
    CDUnknownBlockType _userCancelledPresentationBlock;
    MNLoadingViewController *_loadingViewController;
    id <MNMessagesViewPresentationStrategy> _presentationStrategy;
}

@property(retain, nonatomic) id <MNMessagesViewPresentationStrategy> presentationStrategy; // @synthesize presentationStrategy=_presentationStrategy;
@property(retain, nonatomic) MNLoadingViewController *loadingViewController; // @synthesize loadingViewController=_loadingViewController;
@property(copy, nonatomic) CDUnknownBlockType userCancelledPresentationBlock; // @synthesize userCancelledPresentationBlock=_userCancelledPresentationBlock;
@property(copy, nonatomic) CDUnknownBlockType popLoadingVCBlock; // @synthesize popLoadingVCBlock=_popLoadingVCBlock;
@property(copy, nonatomic) CDUnknownBlockType pushLoadingVCBlock; // @synthesize pushLoadingVCBlock=_pushLoadingVCBlock;
@property(copy, nonatomic) CDUnknownBlockType pushMessagesVCBlock; // @synthesize pushMessagesVCBlock=_pushMessagesVCBlock;
@property(nonatomic) BOOL isTearingDown; // @synthesize isTearingDown=_isTearingDown;
@property(nonatomic) BOOL isPresentationStrategyExecuting; // @synthesize isPresentationStrategyExecuting=_isPresentationStrategyExecuting;
- (void).cxx_destruct;
- (void)_popLoadingViewController;
- (void)_pushLoadingViewController;
- (void)_pushMessagesViewController;
- (void)_cleanUpPresentation;
- (void)_handleTearDownPresentation;
- (void)loadingControllerDidEndAnimation:(id)arg1;
- (void)loadingControllerDidBeginAnimation:(id)arg1;
- (void)_strategyWantsToPushLoadingVC;
- (void)_strategyWantsToPushMessagesVC;
- (void)cancelPendingPresentation;
- (void)presentMessagesViewController:(id)arg1 withStrategy:(id)arg2 loadingController:(id)arg3 pushMessagesVCBlock:(CDUnknownBlockType)arg4 pushLoadingVCBlock:(CDUnknownBlockType)arg5 popLoadingVCBlock:(CDUnknownBlockType)arg6 userCancelledPresentationBlock:(CDUnknownBlockType)arg7;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithPresentationErrorHandlerCreatorBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

