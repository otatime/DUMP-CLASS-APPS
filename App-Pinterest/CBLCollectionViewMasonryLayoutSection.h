//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLCollectionViewMasonryLayout, CBLCollectionViewMasonryLayoutColumn, NSArray, NSMutableDictionary;

@interface CBLCollectionViewMasonryLayoutSection : NSObject
{
    BOOL _alwaysShowSectionHeader;
    BOOL _supportSupplementaryViews;
    id <CBLCollectionViewDelegateMasonryLayout> _layoutDelegate;
    CBLCollectionViewMasonryLayout *_layout;
    unsigned int _sectionIndex;
    unsigned int _columnCount;
    float _columnWidth;
    NSArray *_columns;
    NSMutableDictionary *_columnByIndexPath;
    struct CGPoint _origin;
}

@property(nonatomic) BOOL supportSupplementaryViews; // @synthesize supportSupplementaryViews=_supportSupplementaryViews;
@property(readonly, nonatomic) NSMutableDictionary *columnByIndexPath; // @synthesize columnByIndexPath=_columnByIndexPath;
@property(readonly, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(readonly, nonatomic) float columnWidth; // @synthesize columnWidth=_columnWidth;
@property(readonly, nonatomic) unsigned int columnCount; // @synthesize columnCount=_columnCount;
@property(readonly, nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) unsigned int sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(readonly, nonatomic) CBLCollectionViewMasonryLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) BOOL alwaysShowSectionHeader; // @synthesize alwaysShowSectionHeader=_alwaysShowSectionHeader;
@property(nonatomic) __weak id <CBLCollectionViewDelegateMasonryLayout> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (id)layoutAttributesForBackground;
- (id)layoutAttributesForFooter;
- (id)layoutAttributesForHeader;
@property(readonly, nonatomic) float tallestColumnHeight;
@property(readonly, nonatomic) CBLCollectionViewMasonryLayoutColumn *tallestColumn;
@property(readonly, nonatomic) CBLCollectionViewMasonryLayoutColumn *shortestColumn;
- (id)additionalPropertiesForItemAtIndexPath:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets insets;
@property(readonly, nonatomic) struct UIEdgeInsets footerInsets;
@property(readonly, nonatomic) struct UIEdgeInsets headerInsets;
@property(readonly, nonatomic) struct CGSize footerSize;
@property(readonly, nonatomic) struct CGSize headerSize;
- (float)heightForItemAtIndexPath:(id)arg1;
@property(readonly, nonatomic) unsigned int cellCount;
@property(readonly, nonatomic) struct CGSize cellSpacing;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForCellAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
@property(readonly, nonatomic) float height;
- (void)prepareLayout;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 sectionIndex:(unsigned int)arg2 columnAttributes:(id)arg3 origin:(struct CGPoint)arg4 supportSupplementaryViews:(BOOL)arg5;

@end
