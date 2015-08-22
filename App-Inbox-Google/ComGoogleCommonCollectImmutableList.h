//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectImmutableCollection.h"

#import "JavaUtilList.h"
#import "JavaUtilRandomAccess.h"

@class NSString;

@interface ComGoogleCommonCollectImmutableList : ComGoogleCommonCollectImmutableCollection <JavaUtilList, JavaUtilRandomAccess>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_equalsWithId__params;
+ (id)__annotations_removeWithInt_;
+ (id)__annotations_addWithInt_withId_;
+ (id)__annotations_setWithInt_withId_;
+ (id)__annotations_addAllWithInt_withJavaUtilCollection_;
+ (id)__annotations_containsWithId__params;
+ (id)__annotations_lastIndexOfWithId__params;
+ (id)__annotations_indexOfWithId__params;
+ (void)initialize;
+ (id)builder;
+ (id)asImmutableListWithNSObjectArray:(id)arg1 withInt:(int)arg2;
+ (id)asImmutableListWithNSObjectArray:(id)arg1;
+ (id)constructWithNSObjectArray:(id)arg1;
+ (id)copyOfWithNSObjectArray:(id)arg1;
+ (id)copyOfWithJavaUtilIterator:(id)arg1;
+ (id)copyOfWithJavaUtilCollection:(id)arg1;
+ (id)copyOfWithJavaLangIterable:(id)arg1;
+ (id)ofWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3 withId:(id)arg4 withId:(id)arg5 withId:(id)arg6 withId:(id)arg7 withId:(id)arg8 withId:(id)arg9 withId:(id)arg10 withId:(id)arg11 withId:(id)arg12 withNSObjectArray:(id)arg13;
+ (id)ofWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3 withId:(id)arg4 withId:(id)arg5 withId:(id)arg6 withId:(id)arg7 withId:(id)arg8 withId:(id)arg9 withId:(id)arg10 withId:(id)arg11;
+ (id)ofWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3 withId:(id)arg4 withId:(id)arg5 withId:(id)arg6 withId:(id)arg7 withId:(id)arg8 withId:(id)arg9 withId:(id)arg10;
+ (id)ofWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3 withId:(id)arg4 withId:(id)arg5 withId:(id)arg6 withId:(id)arg7 withId:(id)arg8 withId:(id)arg9;
+ (id)ofWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3 withId:(id)arg4 withId:(id)arg5 withId:(id)arg6 withId:(id)arg7 withId:(id)arg8;
+ (id)ofWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3 withId:(id)arg4 withId:(id)arg5 withId:(id)arg6 withId:(id)arg7;
+ (id)ofWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3 withId:(id)arg4 withId:(id)arg5 withId:(id)arg6;
+ (id)ofWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3 withId:(id)arg4 withId:(id)arg5;
+ (id)ofWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3 withId:(id)arg4;
+ (id)ofWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3;
+ (id)ofWithId:(id)arg1 withId:(id)arg2;
+ (id)ofWithId:(id)arg1;
+ (id)of;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)writeReplace;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)reverse;
- (int)copyIntoArrayWithNSObjectArray:(id)arg1 withInt:(int)arg2;
- (id)asList;
- (id)removeWithInt:(int)arg1;
- (void)addWithInt:(int)arg1 withId:(id)arg2;
- (id)setWithInt:(int)arg1 withId:(id)arg2;
- (BOOL)addAllWithInt:(int)arg1 withJavaUtilCollection:(id)arg2;
- (id)subListUncheckedWithInt:(int)arg1 withInt:(int)arg2;
- (id)subListWithInt:(int)arg1 withInt:(int)arg2;
- (BOOL)containsWithId:(id)arg1;
- (int)lastIndexOfWithId:(id)arg1;
- (int)indexOfWithId:(id)arg1;
- (id)listIteratorWithInt:(int)arg1;
- (id)listIterator;
- (id)iterator;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
