//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaxXmlParsersDocumentBuilder.h"

@interface OrgApacheHarmonyXmlParsersDocumentBuilderImpl : JavaxXmlParsersDocumentBuilder
{
    BOOL coalescing_;
    id <OrgXmlSaxEntityResolver> entityResolver_;
    id <OrgXmlSaxErrorHandler> errorHandler_;
    BOOL ignoreComments_;
    BOOL ignoreElementContentWhitespace_;
    BOOL namespaceAware_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (id)init;
- (id)resolveCharacterReferenceWithNSString:(id)arg1 withInt:(int)arg2;
- (id)resolvePredefinedOrCharacterEntityWithNSString:(id)arg1;
- (void)setNamespaceAwareWithBoolean:(BOOL)arg1;
- (void)setIgnoreElementContentWhitespaceWithBoolean:(BOOL)arg1;
- (void)setCoalescingWithBoolean:(BOOL)arg1;
- (void)setIgnoreCommentsWithBoolean:(BOOL)arg1;
- (void)setErrorHandlerWithOrgXmlSaxErrorHandler:(id)arg1;
- (void)setEntityResolverWithOrgXmlSaxEntityResolver:(id)arg1;
- (void)appendTextWithOrgApacheHarmonyXmlDomDocumentImpl:(id)arg1 withOrgW3cDomNode:(id)arg2 withInt:(int)arg3 withNSString:(id)arg4;
- (void)parseWithOrgKxml2IoKXmlParser:(id)arg1 withOrgApacheHarmonyXmlDomDocumentImpl:(id)arg2 withOrgW3cDomNode:(id)arg3 withInt:(int)arg4;
- (id)parseWithOrgXmlSaxInputSource:(id)arg1;
- (id)newDocument;
- (BOOL)isValidating;
- (BOOL)isNamespaceAware;
- (id)getDOMImplementation;
- (void)reset;

@end
