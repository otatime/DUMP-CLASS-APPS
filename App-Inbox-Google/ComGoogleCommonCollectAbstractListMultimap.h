//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractMapBasedMultimap.h"

#import "ComGoogleCommonCollectListMultimap.h"

@class NSString;

@interface ComGoogleCommonCollectAbstractListMultimap : ComGoogleCommonCollectAbstractMapBasedMultimap <ComGoogleCommonCollectListMultimap>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_equalsWithId__params;
+ (id)__annotations_putWithId_withId__params;
+ (id)__annotations_replaceValuesWithId_withJavaLangIterable__params;
+ (id)__annotations_removeAllWithId__params;
+ (id)__annotations_getWithId__params;
- (BOOL)isEqual:(id)arg1;
- (id)asMap;
- (BOOL)putWithId:(id)arg1 withId:(id)arg2;
- (id)replaceValuesWithId:(id)arg1 withJavaLangIterable:(id)arg2;
- (id)removeAllWithId:(id)arg1;
- (id)getWithId:(id)arg1;
- (id)createUnmodifiableEmptyCollection;
- (id)createCollection;
- (id)initWithJavaUtilMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
