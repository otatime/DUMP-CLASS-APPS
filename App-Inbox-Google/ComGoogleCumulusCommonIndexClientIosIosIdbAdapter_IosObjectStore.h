//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusCommonIndexClientIosIosIdbAdapter_TxScopedObject.h"

#import "ComGoogleCumulusCommonIndexIdbAdapter_ObjectStore.h"

@class ComGoogleCumulusCommonIndexClientIosIosIdbAdapter, NSString;

@interface ComGoogleCumulusCommonIndexClientIosIosIdbAdapter_IosObjectStore : ComGoogleCumulusCommonIndexClientIosIosIdbAdapter_TxScopedObject <ComGoogleCumulusCommonIndexIdbAdapter_ObjectStore>
{
    ComGoogleCumulusCommonIndexClientIosIosIdbAdapter *this$0_;
    NSString *name_;
}

- (void)dealloc;
- (id)getIndexNames;
- (id)deleteNativeWithId:(id)arg1;
- (id)delete__WithComGoogleCumulusCommonIndexIdbAdapter_Key:(id)arg1;
- (id)putNativeWithId:(id)arg1 withId:(id)arg2;
- (id)putWithComGoogleCumulusCommonIndexIdbAdapter_Value:(id)arg1 withComGoogleCumulusCommonIndexIdbAdapter_Key:(id)arg2;
- (id)getNativeWithId:(id)arg1;
- (id)getWithComGoogleCumulusCommonIndexIdbAdapter_Key:(id)arg1;
- (id)indexNativeWithNSString:(id)arg1;
- (id)indexWithNSString:(id)arg1;
- (id)createIndexNativeWithNSString:(id)arg1 withNSString:(id)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4;
- (id)createIndexWithNSString:(id)arg1 withNSString:(id)arg2 withComGoogleCumulusCommonIndexIdbAdapter_IndexParameters:(id)arg3;
- (id)openCursorNativeWithId:(id)arg1 withNSString:(id)arg2;
- (id)openCursorWithComGoogleCumulusCommonIndexIdbAdapter_KeyRange:(id)arg1 withComGoogleCumulusCommonIndexIdbAdapter_CursorDirectionEnum:(id)arg2;
- (id)openCursorWithComGoogleCumulusCommonIndexIdbAdapter_KeyRange:(id)arg1;
- (id)initWithComGoogleCumulusCommonIndexClientIosIosIdbAdapter:(id)arg1 withId:(id)arg2 withComGoogleCumulusCommonIndexClientIosIosIdbAdapter_IosTransaction:(id)arg3 withNSString:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
