//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class NSHashTable, _ASAsyncTransaction;

@interface CALayer (ASAsyncTransactionContainerTransactions)
- (void)asyncdisplaykit_asyncTransactionContainerDidCompleteTransaction:(id)arg1;
- (void)asyncdisplaykit_asyncTransactionContainerWillBeginTransaction:(id)arg1;

// Remaining properties
@property(retain, nonatomic, setter=asyncdisplaykit_setAsyncLayerTransactions:) NSHashTable *asyncdisplaykit_asyncLayerTransactions; // @dynamic asyncdisplaykit_asyncLayerTransactions;
@property(retain, nonatomic, setter=asyncdisplaykit_setCurrentAsyncLayerTransaction:) _ASAsyncTransaction *asyncdisplaykit_currentAsyncLayerTransaction; // @dynamic asyncdisplaykit_currentAsyncLayerTransaction;
@end

