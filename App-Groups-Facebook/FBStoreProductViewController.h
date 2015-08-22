//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SKStoreProductViewControllerDelegate.h"

@class FBWeakProxy, NSArray, NSDictionary, NSMutableArray, NSString, SKStoreProductViewController, UIView;

@interface FBStoreProductViewController : UIViewController <SKStoreProductViewControllerDelegate>
{
    NSMutableArray *_storeKitControllersInProgress;
    SKStoreProductViewController *_storeKitController;
    UIView *_navigationBarView;
    FBWeakProxy *_weakProxy;
    NSDictionary *_loadParameters;
    int _maxNumberOfAttempts;
    double _delayBetweenAttempts;
    CDUnknownBlockType _loadCompletionBlock;
    NSMutableArray *_loadAttemptExtras;
    double _loadProductFinishedTime;
    double _presentedTime;
    double _dismissedTime;
    BOOL _loadCompleted;
    int _orientationWhenPresented;
    BOOL _loadWasSuccessful;
    id <FBStoreProductViewControllerDelegate> _delegate;
    int _loadAttemptCount;
    int _loadAttemptThatSucceeded;
}

@property(readonly, nonatomic) int loadAttemptThatSucceeded; // @synthesize loadAttemptThatSucceeded=_loadAttemptThatSucceeded;
@property(readonly, nonatomic) int loadAttemptCount; // @synthesize loadAttemptCount=_loadAttemptCount;
@property(readonly, nonatomic) BOOL loadWasSuccessful; // @synthesize loadWasSuccessful=_loadWasSuccessful;
@property(readonly, copy, nonatomic) NSArray *loadAttemptExtras; // @synthesize loadAttemptExtras=_loadAttemptExtras;
@property(nonatomic) id <FBStoreProductViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyProductViewControllerDidFinish;
- (void)_didPressCancel;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)productViewControllerDidAppear:(id)arg1;
- (void)_dismissProductViewControllerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_presentProductViewController;
- (id)_dimmingViewBehindModal;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)_navigationBarView;
- (id)_navBarBackgroundImageForIOS7;
@property(readonly, nonatomic) double timeSpentAfterLoad; // @dynamic timeSpentAfterLoad;
@property(readonly, nonatomic) double timeSpentBeforeLoad; // @dynamic timeSpentBeforeLoad;
@property(readonly, nonatomic) double timeSpent; // @dynamic timeSpent;
- (void)loadProductWithParameters:(id)arg1 numberOfAttempts:(int)arg2 delayBetweenAttempts:(double)arg3 timeoutAfterDelay:(double)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)reliablyLoadProductWithParameters:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadProductWithParameters:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_timeoutAfterDelay;
- (void)_scheduleAnotherLoad;
- (id)_createAndPrepareStoreProductViewController;
- (void)_loadCompletedWithResult:(BOOL)arg1 error:(id)arg2 duration:(double)arg3 loadAttempt:(int)arg4 storeKitController:(id)arg5;
- (void)_dismissStoreKitControllerIfPresented:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)createStoreProductViewController;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
