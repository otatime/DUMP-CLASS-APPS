//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilAbstractList.h"

#import "JavaIoSerializable.h"
#import "JavaUtilRandomAccess.h"

@class NSString;

@interface ComGoogleCommonCollectLists_TransformingRandomAccessList : JavaUtilAbstractList <JavaUtilRandomAccess, JavaIoSerializable>
{
    id <JavaUtilList> fromList_;
    id <ComGoogleCommonBaseFunction> function_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (int)size;
- (id)removeWithInt:(int)arg1;
- (BOOL)isEmpty;
- (id)listIteratorWithInt:(int)arg1;
- (id)iterator;
- (id)getWithInt:(int)arg1;
- (void)clear;
- (id)initWithJavaUtilList:(id)arg1 withComGoogleCommonBaseFunction:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

