//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgApacheHarmonyXmlDomLeafNodeImpl.h"

#import "OrgW3cDomProcessingInstruction.h"

@class NSString;

@interface OrgApacheHarmonyXmlDomProcessingInstructionImpl : OrgApacheHarmonyXmlDomLeafNodeImpl <OrgW3cDomProcessingInstruction>
{
    NSString *target_;
    NSString *data_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)setDataWithNSString:(id)arg1;
- (id)getTarget;
- (id)getNodeValue;
- (short)getNodeType;
- (id)getNodeName;
- (id)getData;
- (id)initWithOrgApacheHarmonyXmlDomDocumentImpl:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

