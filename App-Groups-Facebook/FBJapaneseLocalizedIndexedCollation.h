//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBCustomLocalizedIndexedCollation.h"

@class FBCache, NSArray, NSNotificationCenter, NSString;

@interface FBJapaneseLocalizedIndexedCollation : NSObject <FBCustomLocalizedIndexedCollation>
{
    NSNotificationCenter *_notificationCenter;
    FBCache *_collationCache;
}

- (void).cxx_destruct;
- (void)_onApplicationDidReceiveMemoryWarning:(id)arg1;
- (void)_onApplicationDidEnterBackground:(id)arg1;
- (unsigned int)collationCacheSize;
- (id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2;
- (int)sectionForSectionIndexTitleAtIndex:(int)arg1;
- (int)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2;
@property(readonly, nonatomic) NSArray *sectionTitles;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
- (void)dealloc;
- (id)initWithNotificationCenter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
