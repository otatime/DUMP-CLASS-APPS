//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionView.h"

@class CBLPinCellLayoutAttributes;

@interface CBLPinGridBaseView : CBLTraitCollectionView
{
    CBLPinCellLayoutAttributes *_layoutAttributes;
}

+ (float)totalHeightForPin:(id)arg1 displayOptions:(id)arg2 layoutAttributes:(id)arg3;
+ (BOOL)shouldDisplayForPin:(id)arg1 displayOptions:(id)arg2 layoutAttributes:(id)arg3;
@property(retain, nonatomic) CBLPinCellLayoutAttributes *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateWithPin:(id)arg1 withDisplayOptions:(id)arg2;

@end

