//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaxXmlTransformResult.h"

@class NSString;

@interface JavaxXmlTransformSaxSAXResult : NSObject <JavaxXmlTransformResult>
{
    id <OrgXmlSaxContentHandler> handler_;
    id <OrgXmlSaxExtLexicalHandler> lexhandler_;
    NSString *systemId_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getSystemId;
- (void)setSystemIdWithNSString:(id)arg1;
- (id)getLexicalHandler;
- (void)setLexicalHandlerWithOrgXmlSaxExtLexicalHandler:(id)arg1;
- (id)getHandler;
- (void)setHandlerWithOrgXmlSaxContentHandler:(id)arg1;
- (id)initWithOrgXmlSaxContentHandler:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
