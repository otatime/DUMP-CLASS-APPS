//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OrgW3cDomNamedNodeMap.h"

@class NSString, OrgApacheHarmonyXmlDomElementImpl;

@interface OrgApacheHarmonyXmlDomElementImpl_ElementAttrNamedNodeMapImpl : NSObject <OrgW3cDomNamedNodeMap>
{
    OrgApacheHarmonyXmlDomElementImpl *this$0_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithOrgApacheHarmonyXmlDomElementImpl:(id)arg1;
- (id)setNamedItemNSWithOrgW3cDomNode:(id)arg1;
- (id)setNamedItemWithOrgW3cDomNode:(id)arg1;
- (id)removeNamedItemNSWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)removeNamedItemWithNSString:(id)arg1;
- (id)itemWithInt:(int)arg1;
- (id)getNamedItemNSWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)getNamedItemWithNSString:(id)arg1;
- (int)indexOfItemNSWithNSString:(id)arg1 withNSString:(id)arg2;
- (int)indexOfItemWithNSString:(id)arg1;
- (int)getLength;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
