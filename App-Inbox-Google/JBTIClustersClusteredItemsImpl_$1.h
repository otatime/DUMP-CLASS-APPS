//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTICommonTransaction_CommitListener.h"

@class JBTIClustersClusteredItemsImpl, NSString;

@interface JBTIClustersClusteredItemsImpl_$1 : NSObject <JBTICommonTransaction_CommitListener>
{
    JBTIClustersClusteredItemsImpl *this$0_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTIClustersClusteredItemsImpl:(id)arg1;
- (void)onTxCommittedWithJBTICommonTransaction:(id)arg1 withJBTICommonSapiCallback:(id)arg2 withJBTSpan:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

