//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusSyncClientObjectManager_LoadObjectsCallback.h"

@class ComGoogleCumulusCommonBaseProto_ObjectId, ComGoogleCumulusCommonBaseProto_ObjectReference, ComGoogleCumulusSyncClientCommandAborter_$1, NSString;

@interface ComGoogleCumulusSyncClientCommandAborter_$1_$1 : NSObject <ComGoogleCumulusSyncClientObjectManager_LoadObjectsCallback>
{
    ComGoogleCumulusSyncClientCommandAborter_$1 *this$0_;
    ComGoogleCumulusCommonBaseProto_ObjectReference *val$ref_;
    ComGoogleCumulusCommonBaseProto_ObjectId *val$oid_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientCommandAborter_$1:(id)arg1 withComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg2 withComGoogleCumulusCommonBaseProto_ObjectId:(id)arg3;
- (void)onLoadWithComGoogleCumulusSyncClientObjectManager_ObjectGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

