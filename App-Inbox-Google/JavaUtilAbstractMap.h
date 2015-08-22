//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilMap.h"

@class NSString;

@interface JavaUtilAbstractMap : NSObject <JavaUtilMap>
{
    id <JavaUtilSet> keySet_;
    id <JavaUtilCollection> valuesCollection_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)clone;
- (id)values;
@property(readonly, copy) NSString *description;
- (int)size;
- (id)removeWithId:(id)arg1;
- (void)putAllWithJavaUtilMap:(id)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (id)keySet;
- (BOOL)isEmpty;
@property(readonly) unsigned int hash;
- (id)getWithId:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)entrySet;
- (BOOL)containsValueWithId:(id)arg1;
- (BOOL)containsKeyWithId:(id)arg1;
- (void)clear;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
