//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter_AnyWrapper.h"

@class ComGoogleCumulusCommonIndexClientIosIosIdbAdapter_RefCounted, NSString;

@interface ComGoogleCumulusCommonIndexClientIosIosIdbAdapter_AnyWrapper : NSObject <ComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter_AnyWrapper>
{
    ComGoogleCumulusCommonIndexClientIosIosIdbAdapter_RefCounted *object_;
}

- (void)dealloc;
- (BOOL)isNullSerializedValue;
- (void)delete__;
- (id)getNative;
- (BOOL)isUndefined;
- (BOOL)isNull;
- (void)refAny;
- (id)initWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
