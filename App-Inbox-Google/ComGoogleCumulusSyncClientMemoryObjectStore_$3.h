//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonIndexIndexIterableWithState.h"

@class ComGoogleCumulusSyncClientMemoryObjectStore, NSString;

@interface ComGoogleCumulusSyncClientMemoryObjectStore_$3 : NSObject <ComGoogleCumulusCommonIndexIndexIterableWithState>
{
    ComGoogleCumulusSyncClientMemoryObjectStore *this$0_;
    id <JavaUtilCollection> val$slices_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientMemoryObjectStore:(id)arg1 withJavaUtilCollection:(id)arg2;
- (id)createIterator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
