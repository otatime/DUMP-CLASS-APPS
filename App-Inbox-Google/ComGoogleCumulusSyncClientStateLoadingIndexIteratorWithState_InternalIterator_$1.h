//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiTypeIndexedObjectLoader_IndexIdLoadCallback.h"

@class ComGoogleCumulusSyncClientStateLoadingIndexIteratorWithState_InternalIterator, NSString;

@interface ComGoogleCumulusSyncClientStateLoadingIndexIteratorWithState_InternalIterator_$1 : NSObject <ComGoogleCumulusApiTypeIndexedObjectLoader_IndexIdLoadCallback>
{
    ComGoogleCumulusSyncClientStateLoadingIndexIteratorWithState_InternalIterator *this$0_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientStateLoadingIndexIteratorWithState_InternalIterator:(id)arg1;
- (void)onErrorWithIntArray:(id)arg1 withJavaLangException:(id)arg2;
- (void)onSuccessWithIntArray:(id)arg1 withComGoogleCumulusApiTypeObjectReader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

