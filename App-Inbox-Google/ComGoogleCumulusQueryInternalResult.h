//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusApiPluginQueryProcessorResult.h"

@interface ComGoogleCumulusQueryInternalResult : ComGoogleCumulusApiPluginQueryProcessorResult
{
}

+ (void)initialize;
+ (id)fromNetResponseWithJavaUtilMap:(id)arg1 withComGoogleCumulusQueryQueryProto_Response:(id)arg2 withBoolean:(BOOL)arg3;
+ (id)fromQueryResultWithJavaUtilMap:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2 withBoolean:(BOOL)arg3;
+ (id)newBuilder;
+ (id)toInternalResultWithComGoogleCumulusApiPluginQueryProcessorResult:(id)arg1;
- (id)getTypedObjectInfos;
- (id)getObjectInfosWithJavaUtilList:(id)arg1;
- (id)getObjectInfos;
- (void)clearSyncObjects;
- (void)addSyncObjectWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1 withComGoogleCumulusTypeTypeProto_Command:(id)arg2;
- (id)getSyncObjects;
- (id)getResultProto;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withJavaUtilMap:(id)arg2 withBoolean:(BOOL)arg3;
- (id)initWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withJavaUtilMap:(id)arg2;

@end

