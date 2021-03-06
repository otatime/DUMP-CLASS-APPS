//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractMultimap.h"

#import "ComGoogleCommonCollectFilteredMultimap.h"

@class NSString;

@interface ComGoogleCommonCollectFilteredKeyMultimap : ComGoogleCommonCollectAbstractMultimap <ComGoogleCommonCollectFilteredMultimap>
{
    id <ComGoogleCommonCollectMultimap> unfiltered_;
    id <ComGoogleCommonBasePredicate> keyPredicate_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_containsKeyWithId__params;
- (void)dealloc;
- (id)createKeys;
- (id)createAsMap;
- (id)createValues;
- (id)createEntries;
- (id)entryIterator;
- (id)getWithId:(id)arg1;
- (id)createKeySet;
- (void)clear;
- (id)unmodifiableEmptyCollection;
- (id)removeAllWithId:(id)arg1;
- (BOOL)containsKeyWithId:(id)arg1;
- (int)size;
- (id)entryPredicate;
- (id)unfiltered;
- (id)initWithComGoogleCommonCollectMultimap:(id)arg1 withComGoogleCommonBasePredicate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

