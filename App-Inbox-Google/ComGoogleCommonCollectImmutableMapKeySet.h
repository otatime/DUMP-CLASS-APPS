//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectImmutableSet.h"

@class ComGoogleCommonCollectImmutableMap;

@interface ComGoogleCommonCollectImmutableMapKeySet : ComGoogleCommonCollectImmutableSet
{
    ComGoogleCommonCollectImmutableMap *map_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_containsWithId__params;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)__javaClone;
- (id)writeReplace;
- (BOOL)isPartialView;
- (id)createAsList;
- (BOOL)containsWithId:(id)arg1;
- (id)iterator;
- (int)size;
- (id)initWithComGoogleCommonCollectImmutableMap:(id)arg1;

@end
