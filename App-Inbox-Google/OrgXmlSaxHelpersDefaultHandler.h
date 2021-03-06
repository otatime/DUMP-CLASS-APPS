//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OrgXmlSaxContentHandler.h"
#import "OrgXmlSaxDTDHandler.h"
#import "OrgXmlSaxEntityResolver.h"
#import "OrgXmlSaxErrorHandler.h"

@class NSString;

@interface OrgXmlSaxHelpersDefaultHandler : NSObject <OrgXmlSaxEntityResolver, OrgXmlSaxDTDHandler, OrgXmlSaxContentHandler, OrgXmlSaxErrorHandler>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)init;
- (void)fatalErrorWithOrgXmlSaxSAXParseException:(id)arg1;
- (void)errorWithOrgXmlSaxSAXParseException:(id)arg1;
- (void)warningWithOrgXmlSaxSAXParseException:(id)arg1;
- (void)skippedEntityWithNSString:(id)arg1;
- (void)processingInstructionWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)ignorableWhitespaceWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)charactersWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)endElementWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (void)startElementWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withOrgXmlSaxAttributes:(id)arg4;
- (void)endPrefixMappingWithNSString:(id)arg1;
- (void)startPrefixMappingWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)endDocument;
- (void)startDocument;
- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id)arg1;
- (void)unparsedEntityDeclWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4;
- (void)notationDeclWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (id)resolveEntityWithNSString:(id)arg1 withNSString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

