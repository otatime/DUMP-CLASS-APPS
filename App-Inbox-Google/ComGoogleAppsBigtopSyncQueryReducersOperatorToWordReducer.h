//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncQueryReducersReductionStage.h"

@class IOSObjectArray;

@interface ComGoogleAppsBigtopSyncQueryReducersOperatorToWordReducer : ComGoogleAppsBigtopSyncQueryReducersReductionStage
{
    IOSObjectArray *operatorTypes_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (BOOL)typesCorrectWithComGoogleAppsBigtopSyncQueryParseContext:(id)arg1;
- (id)reduceNodeWithComGoogleAppsBigtopSyncQueryParseContext:(id)arg1;
- (id)getOperatorTypes;
- (id)initWithComGoogleAppsBigtopSyncQueryNodesTermNode_TypeEnumArray:(id)arg1;

@end
