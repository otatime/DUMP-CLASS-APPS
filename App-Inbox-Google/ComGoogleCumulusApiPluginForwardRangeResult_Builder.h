//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusApiPluginRange_Builder.h"

@class ComGoogleCumulusApiPluginForwardRangeResult;

@interface ComGoogleCumulusApiPluginForwardRangeResult_Builder : ComGoogleCumulusApiPluginRange_Builder
{
    ComGoogleCumulusApiPluginForwardRangeResult *this$1_;
    id <JavaUtilMap> syncObjectBuildingMap_;
}

- (void)dealloc;
- (id)build;
- (id)getOrCreateMatchForRefWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1 withBoolean:(BOOL)arg2;
- (id)setHasMoreWithBoolean:(BOOL)arg1;
- (id)clearObjectCommandsWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1;
- (id)clearObjectCommands;
- (id)clearMatches;
- (id)addCommandsWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1 withNSString:(id)arg2 withJavaUtilCollection:(id)arg3;
- (id)addMatchesWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1 withJavaUtilMap:(id)arg2 withNSString:(id)arg3 withJavaUtilCollection:(id)arg4 withBoolean:(BOOL)arg5;
- (id)addMatchesWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1 withJavaUtilMap:(id)arg2 withNSString:(id)arg3 withJavaUtilCollection:(id)arg4;
- (id)addMatchesWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1 withJavaUtilMap:(id)arg2 withNSString:(id)arg3 withComGoogleCumulusTypeTypeProto_CommandArray:(id)arg4;
- (id)addMatchesWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1 withJavaUtilMap:(id)arg2 withComGoogleCumulusTypeTypeProto_CommandArray:(id)arg3;
- (id)addMatchesWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1 withJavaUtilMap:(id)arg2;
- (id)addMatchWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1 withComGoogleCumulusQueryQueryProto_QueryKey:(id)arg2 withBoolean:(BOOL)arg3;
- (id)addRequiredQueryKeysWithJavaUtilCollection:(id)arg1;
- (id)setContinuationTokenWithNSString:(id)arg1;
- (id)mergeFromWithComGoogleCumulusApiPluginForwardRangeResult:(id)arg1;
- (BOOL)getHasMore;
- (id)getSyncObjectWithNSString:(id)arg1;
- (id)getRequiredQueryKeys;
- (id)getContinuationToken;
- (id)getMatchWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1;
- (id)getObjects;
- (id)initWithComGoogleCumulusApiPluginForwardRangeResult:(id)arg1;

@end
