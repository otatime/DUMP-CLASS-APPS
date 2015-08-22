//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OrgXmlSaxAttributeList.h"

@class JavaUtilArrayList, NSString;

@interface OrgXmlSaxHelpersAttributeListImpl : NSObject <OrgXmlSaxAttributeList>
{
    JavaUtilArrayList *names_;
    JavaUtilArrayList *types_;
    JavaUtilArrayList *values_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations;
- (void)dealloc;
- (id)getValueWithNSString:(id)arg1;
- (id)getTypeWithNSString:(id)arg1;
- (id)getValueWithInt:(int)arg1;
- (id)getTypeWithInt:(int)arg1;
- (id)getNameWithInt:(int)arg1;
- (int)getLength;
- (void)clear;
- (void)removeAttributeWithNSString:(id)arg1;
- (void)addAttributeWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (void)setAttributeListWithOrgXmlSaxAttributeList:(id)arg1;
- (id)initWithOrgXmlSaxAttributeList:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
