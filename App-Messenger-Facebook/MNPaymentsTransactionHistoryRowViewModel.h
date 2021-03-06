//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class MNPaymentsTransferCellViewModel, NSString;

@interface MNPaymentsTransactionHistoryRowViewModel : FBValueObject <NSCopying>
{
    int _type;
    NSString *_cellIdentifier;
    MNPaymentsTransferCellViewModel *_cellViewModel;
    NSString *_contentModeIdentifier;
}

@property(readonly, copy, nonatomic) NSString *contentModeIdentifier; // @synthesize contentModeIdentifier=_contentModeIdentifier;
@property(readonly, copy, nonatomic) MNPaymentsTransferCellViewModel *cellViewModel; // @synthesize cellViewModel=_cellViewModel;
@property(readonly, copy, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier=_cellIdentifier;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(int)arg1 cellIdentifier:(id)arg2 cellViewModel:(id)arg3 contentModeIdentifier:(id)arg4;

@end

