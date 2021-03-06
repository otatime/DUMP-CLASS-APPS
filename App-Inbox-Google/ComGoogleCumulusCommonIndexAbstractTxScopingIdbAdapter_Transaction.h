//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonIndexIdbAdapter_Transaction.h"

@class ComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter, NSString;

@interface ComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter_Transaction : NSObject <ComGoogleCumulusCommonIndexIdbAdapter_Transaction>
{
    id <ComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter_TxWrapper> txWrapper_;
    ComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter *this$0_;
    id <JavaUtilList> objects_;
    id <JavaUtilList> onCloseHandlers_;
    id <ComGoogleCumulusCommonIndexIdbAdapter_Listener> onAbort_;
    id <ComGoogleCumulusCommonIndexIdbAdapter_Listener> onError_;
    id <ComGoogleCumulusCommonIndexIdbAdapter_Listener> onComplete_;
}

- (void)dealloc;
- (id)getMode;
- (id)objectStoreWithNSString:(id)arg1;
- (id)getErrorMessage;
- (id)createTxEventListenerWithLong:(long long)arg1;
- (id)getTxEventListenerWithLong:(long long)arg1;
- (void)handleEventWithComGoogleCumulusCommonIndexIdbAdapter_EventTypeEnum:(id)arg1;
- (void)close;
- (void)registerOncloseWithJavaLangRunnable:(id)arg1;
- (void)registerObjectWithComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter_TxScopedObject:(id)arg1;
- (void)setOnerrorWithComGoogleCumulusCommonIndexIdbAdapter_Listener:(id)arg1;
- (void)setOnabortWithComGoogleCumulusCommonIndexIdbAdapter_Listener:(id)arg1;
- (void)setOncompleteWithComGoogleCumulusCommonIndexIdbAdapter_Listener:(id)arg1;
- (id)initWithComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter:(id)arg1 withComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter_TxWrapper:(id)arg2 withLong:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

