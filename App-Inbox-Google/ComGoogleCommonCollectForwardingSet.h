//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectForwardingCollection.h"

#import "JavaUtilSet.h"

@class NSString;

@interface ComGoogleCommonCollectForwardingSet : ComGoogleCommonCollectForwardingCollection <JavaUtilSet>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_standardEqualsWithId__params;
+ (id)__annotations_equalsWithId__params;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (int)standardHashCode;
- (BOOL)standardEqualsWithId:(id)arg1;
- (BOOL)standardRemoveAllWithJavaUtilCollection:(id)arg1;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)delegate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
