//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class FBMemTaggableActivity, FBMemTaggableActivitySuggestionsEdge, FBNetworkImageView, NSString;

@interface FBComposerTaggableActivityObjectTableViewCell : UITableViewCell
{
    FBNetworkImageView *_profilePictureView;
    FBNetworkImageView *_taggableActivityIconView;
    BOOL _shouldDisplaySingleIcon;
    BOOL _shouldShowHightlightStyle;
    FBMemTaggableActivity *_taggableActivity;
    FBMemTaggableActivitySuggestionsEdge *_taggableActivitySuggestionEdge;
    NSString *_freeformEntry;
    float _verticalPadding;
    float _horizontalPadding;
}

@property(nonatomic) BOOL shouldShowHightlightStyle; // @synthesize shouldShowHightlightStyle=_shouldShowHightlightStyle;
@property(nonatomic) BOOL shouldDisplaySingleIcon; // @synthesize shouldDisplaySingleIcon=_shouldDisplaySingleIcon;
@property(nonatomic) float horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(nonatomic) float verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(copy, nonatomic) NSString *freeformEntry; // @synthesize freeformEntry=_freeformEntry;
@property(retain, nonatomic) FBMemTaggableActivitySuggestionsEdge *taggableActivitySuggestionEdge; // @synthesize taggableActivitySuggestionEdge=_taggableActivitySuggestionEdge;
@property(retain, nonatomic) FBMemTaggableActivity *taggableActivity; // @synthesize taggableActivity=_taggableActivity;
- (void).cxx_destruct;
- (void)updateDisplayForHighlightedAndSelected;
- (void)updateCell;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1 session:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
