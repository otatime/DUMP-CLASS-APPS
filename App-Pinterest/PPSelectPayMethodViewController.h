//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPBaseViewController.h"

@class NSArray, NSString, PPAlertView, PPFundingOption, PPPaymentAttributeSelectionCell, PPPaymentFundingOptionTableViewDataSource, PPPaymentShippingAddressTableViewDataSource, PPRowBasedTableViewSection, PPSectionBasedTableViewDelegate, PPZebraCreditCardInfo, PayPalPayment, PayPalShippingAddress, UISwitch, UITableView, UITableViewCell, UIView;

@interface PPSelectPayMethodViewController : PPBaseViewController
{
    BOOL _allowRememberMe;
    BOOL _hidePurchaseSummary;
    BOOL _firstAppearance;
    BOOL _subviewHasJustBeenPushed;
    BOOL _wasLoggedIn;
    BOOL _isLoggedIn;
    id <PPSelectPayMethodDelegate> _delegate;
    int _loginState;
    PayPalPayment *_payment;
    NSString *_paypalUserDisplayString;
    PPZebraCreditCardInfo *_creditCard;
    UITableView *_paySelectTableView;
    PPSectionBasedTableViewDelegate *_tableViewDelegate;
    PPRowBasedTableViewSection *_summarySection;
    PPRowBasedTableViewSection *_primarySection;
    PPRowBasedTableViewSection *_secondarySection;
    UITableViewCell *_purchaseSummaryRow;
    PPAlertView *_alert;
    UIView *_useCreditCardView;
    UISwitch *_rememberUserSwitch;
    PPPaymentAttributeSelectionCell *_fundingOptionCell;
    PPPaymentFundingOptionTableViewDataSource *_fundingOptionDataSource;
    PPPaymentAttributeSelectionCell *_shippingAddressCell;
    PPPaymentShippingAddressTableViewDataSource *_shippingAddressDataSource;
}

+ (id)alloc;
@property(retain, nonatomic) PPPaymentShippingAddressTableViewDataSource *shippingAddressDataSource; // @synthesize shippingAddressDataSource=_shippingAddressDataSource;
@property(retain, nonatomic) PPPaymentAttributeSelectionCell *shippingAddressCell; // @synthesize shippingAddressCell=_shippingAddressCell;
@property(retain, nonatomic) PPPaymentFundingOptionTableViewDataSource *fundingOptionDataSource; // @synthesize fundingOptionDataSource=_fundingOptionDataSource;
@property(retain, nonatomic) PPPaymentAttributeSelectionCell *fundingOptionCell; // @synthesize fundingOptionCell=_fundingOptionCell;
@property(nonatomic) BOOL isLoggedIn; // @synthesize isLoggedIn=_isLoggedIn;
@property(nonatomic) BOOL wasLoggedIn; // @synthesize wasLoggedIn=_wasLoggedIn;
@property(retain, nonatomic) UISwitch *rememberUserSwitch; // @synthesize rememberUserSwitch=_rememberUserSwitch;
@property(retain, nonatomic) UIView *useCreditCardView; // @synthesize useCreditCardView=_useCreditCardView;
@property(retain, nonatomic) PPAlertView *alert; // @synthesize alert=_alert;
@property(retain, nonatomic) UITableViewCell *purchaseSummaryRow; // @synthesize purchaseSummaryRow=_purchaseSummaryRow;
@property(retain, nonatomic) PPRowBasedTableViewSection *secondarySection; // @synthesize secondarySection=_secondarySection;
@property(retain, nonatomic) PPRowBasedTableViewSection *primarySection; // @synthesize primarySection=_primarySection;
@property(retain, nonatomic) PPRowBasedTableViewSection *summarySection; // @synthesize summarySection=_summarySection;
@property(retain, nonatomic) PPSectionBasedTableViewDelegate *tableViewDelegate; // @synthesize tableViewDelegate=_tableViewDelegate;
@property(retain, nonatomic) UITableView *paySelectTableView; // @synthesize paySelectTableView=_paySelectTableView;
@property(nonatomic) BOOL subviewHasJustBeenPushed; // @synthesize subviewHasJustBeenPushed=_subviewHasJustBeenPushed;
@property(nonatomic) BOOL firstAppearance; // @synthesize firstAppearance=_firstAppearance;
@property(retain, nonatomic) PPZebraCreditCardInfo *creditCard; // @synthesize creditCard=_creditCard;
@property(retain, nonatomic) NSString *paypalUserDisplayString; // @synthesize paypalUserDisplayString=_paypalUserDisplayString;
@property(retain, nonatomic) PayPalPayment *payment; // @synthesize payment=_payment;
@property(nonatomic) BOOL hidePurchaseSummary; // @synthesize hidePurchaseSummary=_hidePurchaseSummary;
@property(nonatomic) BOOL allowRememberMe; // @synthesize allowRememberMe=_allowRememberMe;
@property(nonatomic) int loginState; // @synthesize loginState=_loginState;
@property(nonatomic) __weak id <PPSelectPayMethodDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)paymentAttributeSelectionCells;
- (void)userDidConfirm;
- (void)showPaymentDetails:(id)arg1;
- (void)userDidCancel;
- (void)forgetCreditCardConfirmed;
- (void)logoutPayPalConfirmed;
- (void)confirmClearStored:(id)arg1 cancel:(id)arg2 ok:(id)arg3 selector:(SEL)arg4;
- (void)forgetCreditCard;
- (void)logoutPayPal;
- (void)useCreditCard;
- (void)usePayPal;
- (void)getShippingAndFundingOptionsFromServiceManager:(id)arg1;
- (void)createShippingFundingOptionPayment;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)refreshTable:(BOOL)arg1;
- (void)clearLoginState;
- (BOOL)hasStoredPaymentMethod;
- (void)animateToggleRememberMe;
- (id)rememberMeRow;
@property(readonly, nonatomic) BOOL isRememberMeOn;
- (void)updatePurchaseSummaryRow;
- (id)analyticsTrackingVersion;
@property(retain, nonatomic) PayPalShippingAddress *selectedShippingAddress;
@property(retain, nonatomic) NSArray *shippingAddresses;
- (void)setShippingAddresses:(id)arg1 withShippingAddressOption:(int)arg2;
@property(readonly, nonatomic) PPFundingOption *selectedFundingOption;
@property(retain, nonatomic) NSArray *fundingOptions;
- (id)initWithDelegate:(id)arg1;

@end

