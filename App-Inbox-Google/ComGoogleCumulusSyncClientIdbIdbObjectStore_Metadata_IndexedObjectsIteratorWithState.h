//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusSyncClientIdbIdbObjectStore_Metadata_IndexedObjectsIterator.h"

#import "ComGoogleCumulusCommonIndexIndexIteratorWithState.h"

@class ComGoogleCumulusSyncClientIdbIdbObjectStore, NSString;

@interface ComGoogleCumulusSyncClientIdbIdbObjectStore_Metadata_IndexedObjectsIteratorWithState : ComGoogleCumulusSyncClientIdbIdbObjectStore_Metadata_IndexedObjectsIterator <ComGoogleCumulusCommonIndexIndexIteratorWithState>
{
    id <JavaUtilSet> slices_;
    ComGoogleCumulusSyncClientIdbIdbObjectStore *store_;
    id <ComGoogleCumulusCommonIndexIndexIteratorWithState_State> currentState_;
}

- (void)dealloc;
- (id)getState;
- (void)advanceAsyncInternal;
- (BOOL)advanceToInternal;
@property(readonly, copy) NSString *description;
- (id)initWithComGoogleCumulusSyncClientIdbIdbObjectStore_Metadata:(id)arg1 withComGoogleCumulusSyncClientIdbIdbObjectStore:(id)arg2 withJavaUtilCollection:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
