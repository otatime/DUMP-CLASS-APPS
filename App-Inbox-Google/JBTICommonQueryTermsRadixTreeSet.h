//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTICommonQueryTermsRadixTreeSet_Node;

@interface JBTICommonQueryTermsRadixTreeSet : NSObject
{
    JBTICommonQueryTermsRadixTreeSet_Node *root_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)pushNodeWithJBTICommonQueryTermsRadixTreeSet_Node:(id)arg1 withJBTICommonQueryTermsRadixTreeSet_Node:(id)arg2 withInt:(int)arg3;
+ (void)splitNodeWithJBTICommonQueryTermsRadixTreeSet_Node:(id)arg1 withJBTICommonQueryTermsRadixTreeSet_Node:(id)arg2 withJavaLangCharSequence:(id)arg3 withInt:(int)arg4;
+ (id)expectedValueWithJBTICommonQueryTermsRadixTreeSet_NodeArray:(id)arg1;
- (void)dealloc;
- (id)getRootFortesting;
- (void)addAllWithNSStringArray:(id)arg1;
- (void)addWithNSString:(id)arg1;
- (BOOL)isEmpty;
- (id)buildTextRegionsWithNSString:(id)arg1;
- (id)initWithJBTICommonQueryTermsRadixTreeSet_Node:(id)arg1;
- (id)init;

@end
