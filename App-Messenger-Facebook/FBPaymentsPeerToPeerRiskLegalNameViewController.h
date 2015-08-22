//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "FBPaymentsPeerToPeerRiskViewControllerProtocol.h"
#import "UITableViewDelegate.h"

@class FBPaymentsPeerToPeerRiskLegalNameBodyView, FBPaymentsPeerToPeerRiskSectionFooterView, FBPaymentsPeerToPeerRiskSectionHeaderView, FBPaymentsPeerToPeerRiskTableViewDataSource, NSDictionary, NSString;

@interface FBPaymentsPeerToPeerRiskLegalNameViewController : UITableViewController <FBPaymentsPeerToPeerRiskViewControllerProtocol, UITableViewDelegate>
{
    FBPaymentsPeerToPeerRiskSectionHeaderView *_headerView;
    FBPaymentsPeerToPeerRiskSectionFooterView *_footerView;
    FBPaymentsPeerToPeerRiskLegalNameBodyView *_bodyView;
    FBPaymentsPeerToPeerRiskTableViewDataSource *_dataSource;
    BOOL _isFirstNameComplete;
    BOOL _isLastNameComplete;
    NSDictionary *_userInfo;
    id <FBPaymentsPeerToPeerRiskViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBPaymentsPeerToPeerRiskViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_onTextFieldChanged:(id)arg1;
- (void)_onTapNextButton;
- (void)_onCancelVerification;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserInfo:(id)arg1;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

