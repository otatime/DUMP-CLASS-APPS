//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "JavaUtilMap.h"

@class IOSClass, NSString;

@interface JavaUtilCollections_CheckedMap : NSObject <JavaUtilMap, JavaIoSerializable>
{
    id <JavaUtilMap> m_;
    IOSClass *keyType_;
    IOSClass *valueType_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)entrySet;
- (id)values;
- (id)keySet;
- (void)clear;
- (void)putAllWithJavaUtilMap:(id)arg1;
- (id)removeWithId:(id)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (id)getWithId:(id)arg1;
- (BOOL)containsValueWithId:(id)arg1;
- (BOOL)containsKeyWithId:(id)arg1;
- (BOOL)isEmpty;
- (int)size;
- (id)initWithJavaUtilMap:(id)arg1 withIOSClass:(id)arg2 withIOSClass:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
