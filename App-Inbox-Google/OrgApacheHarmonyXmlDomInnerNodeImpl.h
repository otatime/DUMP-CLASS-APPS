//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgApacheHarmonyXmlDomLeafNodeImpl.h"

@interface OrgApacheHarmonyXmlDomInnerNodeImpl : OrgApacheHarmonyXmlDomLeafNodeImpl
{
    id <JavaUtilList> children_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (BOOL)matchesNameOrWildcardWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)dealloc;
- (void)getElementsByTagNameNSWithOrgApacheHarmonyXmlDomNodeListImpl:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (void)getElementsByTagNameWithOrgApacheHarmonyXmlDomNodeListImpl:(id)arg1 withNSString:(id)arg2;
- (BOOL)hasTextContentWithOrgW3cDomNode:(id)arg1;
- (void)getTextContentWithJavaLangStringBuilder:(id)arg1;
- (id)getTextContent;
- (id)replaceChildWithOrgW3cDomNode:(id)arg1 withOrgW3cDomNode:(id)arg2;
- (id)removeChildWithOrgW3cDomNode:(id)arg1;
- (void)refreshIndicesWithInt:(int)arg1;
- (void)normalize;
- (BOOL)isParentOfWithOrgW3cDomNode:(id)arg1;
- (id)insertChildAtWithOrgW3cDomNode:(id)arg1 withInt:(int)arg2;
- (id)insertBeforeWithOrgW3cDomNode:(id)arg1 withOrgW3cDomNode:(id)arg2;
- (BOOL)hasChildNodes;
- (id)getNextSibling;
- (id)getLastChild;
- (id)getFirstChild;
- (id)getChildNodes;
- (id)appendChildWithOrgW3cDomNode:(id)arg1;
- (id)initWithOrgApacheHarmonyXmlDomDocumentImpl:(id)arg1;

@end

