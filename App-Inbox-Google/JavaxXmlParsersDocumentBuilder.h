//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JavaxXmlParsersDocumentBuilder : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (BOOL)isXIncludeAware;
- (id)getSchema;
- (id)getDOMImplementation;
- (id)newDocument;
- (void)setErrorHandlerWithOrgXmlSaxErrorHandler:(id)arg1;
- (void)setEntityResolverWithOrgXmlSaxEntityResolver:(id)arg1;
- (BOOL)isValidating;
- (BOOL)isNamespaceAware;
- (id)parseWithOrgXmlSaxInputSource:(id)arg1;
- (id)parseWithJavaIoFile:(id)arg1;
- (id)parseWithNSString:(id)arg1;
- (id)parseWithJavaIoInputStream:(id)arg1 withNSString:(id)arg2;
- (id)parseWithJavaIoInputStream:(id)arg1;
- (void)reset;
- (id)init;

@end
