//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "FBPaymentsCardInfoViewDelegate.h"
#import "MNConnectionStatusPluginServiceListener.h"

@class FBMemPeerToPeerPaymentMethod, FBPaymentsCardViewDataSource, FBPaymentsCardViewSectionFooterView, FBPaymentsCardViewSectionHeaderView, FBPaymentsPeerToPeerCardBINNumberChecker, FBPaymentsPeerToPeerNavigationCoordinator, MNPaymentsFlowSessionController, NSMutableDictionary, NSNumber, NSString;

@interface FBPaymentsCardViewController : UITableViewController <FBPaymentsCardInfoViewDelegate, MNConnectionStatusPluginServiceListener>
{
    NSString *_flowId;
    FBMemPeerToPeerPaymentMethod *_paymentMethod;
    FBPaymentsCardViewDataSource *_viewDataSource;
    NSString *_errorDescription;
    FBPaymentsCardViewSectionHeaderView *_infoSectionHeaderView;
    FBPaymentsCardViewSectionFooterView *_infoSectionFooterView;
    FBPaymentsCardViewSectionFooterView *_makePrimarySectionFooterView;
    int _presentingMode;
    FBPaymentsPeerToPeerNavigationCoordinator *_navigationCoordinator;
    id <FBPaymentsPeerToPeerPaymentMethodsCoordinator> _paymentMethodsCoordinator;
    id <MNConnectionStatusPluginService> _connectionStatusService;
    id <MNSoundPluginService> _soundService;
    id <MNNavigationPluginService> _navigationService;
    FBPaymentsPeerToPeerCardBINNumberChecker *_cardBINNumberChecker;
    MNPaymentsFlowSessionController *_flowSessionController;
    NSString *_lastCheckedBIN;
    NSNumber *_soundName;
    NSMutableDictionary *_errorMessagesForInfoViews;
    BOOL _shouldDisableErrorMessage;
    BOOL _isHandlingErrorAlert;
    BOOL _isValidatingCard;
    id <FBPaymentsCardViewControllerDelegate> _delegate;
}

@property(nonatomic) BOOL isValidatingCard; // @synthesize isValidatingCard=_isValidatingCard;
@property(nonatomic) __weak id <FBPaymentsCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleDeleteCardCallback:(BOOL)arg1 error:(id)arg2;
- (void)_deleteCard;
- (void)_didTapDeclineButton:(id)arg1;
- (void)_didTapLearnMoreButton:(id)arg1;
- (void)_didBecomePrimaryCard:(id)arg1;
- (void)_handleMakePrimaryCardCallback:(BOOL)arg1 paymentMethod:(id)arg2 error:(id)arg3;
- (void)_makePrimaryCard;
- (void)_onCancel;
- (void)_handleAddCardCallback:(BOOL)arg1 paymentMethod:(id)arg2 error:(id)arg3;
- (void)_handleUpdateCardCallback:(BOOL)arg1 paymentMethod:(id)arg2 error:(id)arg3;
- (void)_saveCard:(id)arg1;
- (void)_updateCardViewOrientationIsLandscapeMode:(BOOL)arg1;
- (void)_dismissLoadingIndicatorOverlayIfDisconnected;
- (void)_updateUIToReflectToCurrentConnectionStatus;
- (void)_updateInfoSectionFooterViewWithConfiguration:(id)arg1;
- (void)_updateInfoSectionHeaderView;
- (void)_updateSaveCardBarButtonItemEnabledState;
- (void)_updateNavigationItemWithRightBarButtonTitle:(id)arg1 Animated:(BOOL)arg2;
- (void)_applyConfiguration:(id)arg1 animated:(BOOL)arg2;
- (void)_clearForm;
- (void)_showDebitCreditWebView;
- (void)_handleCheckBinFailure;
- (void)infoView:(id)arg1 didChangeContentsInTextAndImageView:(id)arg2 isUserInput:(BOOL)arg3 errorDescription:(id)arg4 shouldAlert:(BOOL)arg5;
- (void)connectionStatusPluginServiceDidChangeConnectionStatus:(id)arg1;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (id)initWithConfiguration:(id)arg1 flowId:(id)arg2 navigationCoordinator:(id)arg3 paymentMethodsCoordinator:(id)arg4 connectionStatusService:(id)arg5 soundService:(id)arg6 networkDispatcher:(id)arg7 navigationService:(id)arg8 flowSessionController:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

