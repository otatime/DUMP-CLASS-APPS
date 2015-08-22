//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MNCollectionViewLayoutAttributesMap : NSObject
{
    NSMutableDictionary *_attributesByIndexPath;
}

- (void).cxx_destruct;
- (void)enumerateIndexPathsAndLayoutAttributesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_layoutAttributesAtIndexPath:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)_addLayoutAttributes:(id)arg1;
- (id)layoutAttributesForElementWithCategory:(unsigned int)arg1 kind:(id)arg2 atIndexPath:(id)arg3;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesAtIndexPath:(id)arg1;
- (id)layoutAttributesPassingTest:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithLayoutAttributes:(id)arg1;
- (id)init;

@end
