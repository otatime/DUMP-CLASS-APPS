//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectForwardingMultimap.h"

#import "JavaIoSerializable.h"

@class NSString;

@interface ComGoogleCommonCollectMultimaps_UnmodifiableMultimap : ComGoogleCommonCollectForwardingMultimap <JavaIoSerializable>
{
    id <ComGoogleCommonCollectMultimap> delegate_;
    id <JavaUtilCollection> entries_;
    id <ComGoogleCommonCollectMultiset> keys_;
    id <JavaUtilSet> keySet_;
    id <JavaUtilCollection> values_;
    id <JavaUtilMap> map_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)values;
- (id)replaceValuesWithId:(id)arg1 withJavaLangIterable:(id)arg2;
- (id)removeAllWithId:(id)arg1;
- (BOOL)removeWithId:(id)arg1 withId:(id)arg2;
- (BOOL)putAllWithComGoogleCommonCollectMultimap:(id)arg1;
- (BOOL)putAllWithId:(id)arg1 withJavaLangIterable:(id)arg2;
- (BOOL)putWithId:(id)arg1 withId:(id)arg2;
- (id)keySet;
- (id)keys;
- (id)getWithId:(id)arg1;
- (id)entries;
- (id)asMap;
- (void)clear;
- (id)delegate;
- (id)initWithComGoogleCommonCollectMultimap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
