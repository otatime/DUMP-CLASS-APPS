//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilIterator.h"

@class NSString;

@interface JavaUtilAbstractMap_1AbstractMapValuesCollection_$1 : NSObject <JavaUtilIterator>
{
    id <JavaUtilIterator> setIterator_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJavaUtilAbstractMap_1AbstractMapValuesCollection:(id)arg1;
- (void)remove;
- (id)next;
- (BOOL)hasNext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
