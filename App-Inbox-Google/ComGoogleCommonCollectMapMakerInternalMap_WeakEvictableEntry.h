//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectMapMakerInternalMap_WeakEntry.h"

#import "ComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry.h"

@class NSString;

@interface ComGoogleCommonCollectMapMakerInternalMap_WeakEvictableEntry : ComGoogleCommonCollectMapMakerInternalMap_WeakEntry <ComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry>
{
    id <ComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry> nextEvictable_;
    id <ComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry> previousEvictable_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithJavaLangRefReferenceQueue_withId_withInt_withComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry__params;
- (void)dealloc;
- (void)setPreviousEvictableWithComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry:(id)arg1;
- (id)getPreviousEvictable;
- (void)setNextEvictableWithComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry:(id)arg1;
- (id)getNextEvictable;
- (id)initWithJavaLangRefReferenceQueue:(id)arg1 withId:(id)arg2 withInt:(int)arg3 withComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

