//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OrgXmlpullV1XmlSerializer.h"

@class IOSBooleanArray, IOSIntArray, IOSObjectArray, JavaIoBufferedWriter, NSString;

@interface OrgKxml2IoKXmlSerializer : NSObject <OrgXmlpullV1XmlSerializer>
{
    JavaIoBufferedWriter *writer_;
    BOOL pending_;
    int auto__;
    int depth_;
    IOSObjectArray *elementStack_;
    IOSIntArray *nspCounts_;
    IOSObjectArray *nspStack_;
    IOSBooleanArray *indent_;
    BOOL unicode_;
    NSString *encoding_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)reportInvalidCharacterWithChar:(unsigned short)arg1;
- (void)dealloc;
- (id)init;
- (void)processingInstructionWithNSString:(id)arg1;
- (void)commentWithNSString:(id)arg1;
- (void)cdsectWithNSString:(id)arg1;
- (id)textWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)textWithNSString:(id)arg1;
- (int)getDepth;
- (id)getName;
- (id)getNamespace;
- (id)endTagWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)flush;
- (id)attributeWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (id)startTagWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)startDocumentWithNSString:(id)arg1 withJavaLangBoolean:(id)arg2;
- (void)setOutputWithJavaIoOutputStream:(id)arg1 withNSString:(id)arg2;
- (void)setOutputWithJavaIoWriter:(id)arg1;
- (void)setPrefixWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)setPropertyWithNSString:(id)arg1 withId:(id)arg2;
- (void)setFeatureWithNSString:(id)arg1 withBoolean:(BOOL)arg2;
- (void)ignorableWhitespaceWithNSString:(id)arg1;
- (id)getPropertyWithNSString:(id)arg1;
- (id)getPrefixWithNSString:(id)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3;
- (id)getPrefixWithNSString:(id)arg1 withBoolean:(BOOL)arg2;
- (BOOL)getFeatureWithNSString:(id)arg1;
- (void)entityRefWithNSString:(id)arg1;
- (void)endDocument;
- (void)docdeclWithNSString:(id)arg1;
- (void)writeEscapedWithNSString:(id)arg1 withInt:(int)arg2;
- (void)checkWithBoolean:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

