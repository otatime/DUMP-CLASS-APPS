//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusQueryQueryProto_Result_Builder;

@interface ComGoogleCumulusQueryInternalResult_Builder : NSObject
{
    ComGoogleCumulusQueryQueryProto_Result_Builder *queryResult_;
    id <JavaUtilMap> syncObjects_;
}

- (void)dealloc;
- (BOOL)checkRankWithNSString:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg2;
- (id)build;
- (id)addObjectInfoWithComGoogleCumulusTypeTypeProto_Command:(id)arg1 withComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg2;
- (id)addObjectInfoWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1 withComGoogleCumulusTypeTypeProto_Command:(id)arg2;
- (id)addObjectInfoWithComGoogleCumulusQueryQueryProto_Result_ObjectInfo:(id)arg1;
- (id)setSyncObjectsWithJavaUtilMap:(id)arg1;
- (id)setIsSplitResultWithBoolean:(BOOL)arg1;
- (id)setIsRequeryWithBoolean:(BOOL)arg1;
- (id)setClearCachedResultWithBoolean:(BOOL)arg1;
- (id)setAbsoluteCountWithInt:(int)arg1;
- (id)setHasMoreWithBoolean:(BOOL)arg1;
- (id)setConstraintsWithComGoogleCumulusQueryQueryProto_Constraints:(id)arg1;
- (id)setIsFullResultWithBoolean:(BOOL)arg1;
- (id)setIsContinuousUpdateWithBoolean:(BOOL)arg1;
- (id)setSyncSourceWithComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum:(id)arg1;
- (id)setSourceWithComGoogleCumulusQueryQueryProto_Result_SourceEnum:(id)arg1;
- (id)setKeyWithComGoogleCumulusQueryQueryProto_QueryKey:(id)arg1;
- (id)mergeFromWithComGoogleCumulusQueryQueryProto_Result:(id)arg1;
- (id)init;

@end

