//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OrgXmlSaxLocator.h"

@class NSString;

@interface OrgXmlSaxHelpersLocatorImpl : NSObject <OrgXmlSaxLocator>
{
    NSString *publicId_;
    NSString *systemId_;
    int lineNumber_;
    int columnNumber_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)setColumnNumberWithInt:(int)arg1;
- (void)setLineNumberWithInt:(int)arg1;
- (void)setSystemIdWithNSString:(id)arg1;
- (void)setPublicIdWithNSString:(id)arg1;
- (int)getColumnNumber;
- (int)getLineNumber;
- (id)getSystemId;
- (id)getPublicId;
- (id)initWithOrgXmlSaxLocator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
