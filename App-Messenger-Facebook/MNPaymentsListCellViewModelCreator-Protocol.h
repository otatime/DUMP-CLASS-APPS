//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNPaymentsTransactionHistoryRowViewModel, MNPaymentsTransferCellViewModel;

@protocol MNPaymentsListCellViewModelCreator <NSObject>
- (MNPaymentsTransactionHistoryRowViewModel *)historyRowViewModelForTransferDetails:(id <MNPaymentsPayableDataModel>)arg1 contentMode:(int)arg2;
- (MNPaymentsTransferCellViewModel *)transferCellViewModelForTransferDetails:(id <MNPaymentsPayableDataModel>)arg1;
@end

