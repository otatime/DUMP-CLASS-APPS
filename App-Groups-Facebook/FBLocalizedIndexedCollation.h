//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UILocalizedIndexedCollation;

@interface FBLocalizedIndexedCollation : NSObject
{
    CDUnknownBlockType _localizedIndexedCollationBlock;
    id <FBCustomLocalizedIndexedCollation> _customLocalizedIndexedCollation;
    UILocalizedIndexedCollation *_standardLocalizedIndexedCollation;
}

- (void).cxx_destruct;
- (id)_localizedIndexedCollation;
- (id)sortedArrayFromArray:(id)arg1 collationStringSelector:(SEL)arg2;
- (int)sectionForSectionIndexTitleAtIndex:(int)arg1;
- (int)sectionForObject:(id)arg1 collationStringSelector:(SEL)arg2;
@property(readonly, nonatomic) NSArray *sectionTitles;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
- (id)initWithLocalizedIndexedCollationBlock:(CDUnknownBlockType)arg1 customLocalizedIndexedCollation:(id)arg2;
- (id)init;

@end

