//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject<CBLBrickLayoutDelegate>;

@interface CBLBrickLayout : UICollectionViewLayout
{
    BOOL _alwaysShowSectionHeaders;
    NSObject<CBLBrickLayoutDelegate> *_delegate;
    float _gutterMargin;
    NSArray *_previousLayoutAttributes;
    NSMutableArray *_sections;
    NSMutableDictionary *_originsForSection;
    NSMutableArray *_deleteIndexPaths;
    NSMutableArray *_addedIndexPaths;
    struct CGPoint _furthestOrigin;
    struct CGRect _previousLayoutRect;
}

@property(retain, nonatomic) NSMutableArray *addedIndexPaths; // @synthesize addedIndexPaths=_addedIndexPaths;
@property(retain, nonatomic) NSMutableArray *deleteIndexPaths; // @synthesize deleteIndexPaths=_deleteIndexPaths;
@property(retain, nonatomic) NSMutableDictionary *originsForSection; // @synthesize originsForSection=_originsForSection;
@property(nonatomic) struct CGPoint furthestOrigin; // @synthesize furthestOrigin=_furthestOrigin;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(nonatomic) struct CGRect previousLayoutRect; // @synthesize previousLayoutRect=_previousLayoutRect;
@property(retain, nonatomic) NSArray *previousLayoutAttributes; // @synthesize previousLayoutAttributes=_previousLayoutAttributes;
@property(nonatomic) BOOL alwaysShowSectionHeaders; // @synthesize alwaysShowSectionHeaders=_alwaysShowSectionHeaders;
@property(nonatomic) float gutterMargin; // @synthesize gutterMargin=_gutterMargin;
@property(nonatomic) __weak NSObject<CBLBrickLayoutDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)invalidateLayout;
- (id)init;

@end

