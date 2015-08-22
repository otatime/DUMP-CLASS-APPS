//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

#import "FBEntityPickerProtocol.h"
#import "UIGestureRecognizerDelegate.h"

@class FBEntityTokenView, NSMutableArray, NSString, UIColor, UIFont, UIImage, UIImageView, UILabel, UITapGestureRecognizer;

@interface FBEntityPickerTextField : UITextField <UIGestureRecognizerDelegate, FBEntityPickerProtocol>
{
    NSMutableArray *_cellViews;
    FBEntityTokenView *_selectedCell;
    UILabel *_customPlaceholderLabel;
    UIImageView *_customPlaceholderImageView;
    id <FBEntityPickerTextFieldDelegate> _pickerDelegate;
    Class _tokenClass;
    UITapGestureRecognizer *_tapRecognizer;
    int _lineCount;
    struct CGPoint _cursorOrigin;
    BOOL _needsCellResize;
    struct _flags {
        unsigned int isInTextChanged:1;
        unsigned int delegateTextFieldDidAddObject_DEPRECATED:1;
        unsigned int delegateTextFieldWillRemoveObject_DEPRECATED:1;
        unsigned int delegateTextFieldHeightWillChange:1;
        unsigned int delegateTextFieldHeightDidChange:1;
        unsigned int delegateTextFieldSearchTextChanged:1;
        unsigned int isInternalTextChange:1;
        unsigned int delegateTextFieldUserWillDeleteObjectByTyping:1;
        unsigned int delegateTextFieldSupportsEditing:1;
        unsigned int delegateTextFieldDidReceiveTap:1;
    } _;
    BOOL _forceBlackTintColor;
    UILabel *_truncationLabel;
    NSString *_emptyStateAccessibilityLabel;
    NSString *_searchText;
    float _paddingRatio;
    unsigned int _maxLines;
    unsigned int _tokensTruncated;
    UIFont *_placeholderFont;
    float _placeholderImageMargin;
    float _placeholderTextMargin;
    float _placeholderImageSize;
    float _tokenMarginX;
    float _tokenPaddingX;
    float _cursorMarginX;
    float _minimumLineHeight;
    struct UIEdgeInsets _tokenExtraContentInsets;
}

@property(nonatomic) struct UIEdgeInsets tokenExtraContentInsets; // @synthesize tokenExtraContentInsets=_tokenExtraContentInsets;
@property(nonatomic) float minimumLineHeight; // @synthesize minimumLineHeight=_minimumLineHeight;
@property(nonatomic) float cursorMarginX; // @synthesize cursorMarginX=_cursorMarginX;
@property(nonatomic) float tokenPaddingX; // @synthesize tokenPaddingX=_tokenPaddingX;
@property(nonatomic) float tokenMarginX; // @synthesize tokenMarginX=_tokenMarginX;
@property(nonatomic) float placeholderImageSize; // @synthesize placeholderImageSize=_placeholderImageSize;
@property(nonatomic) float placeholderTextMargin; // @synthesize placeholderTextMargin=_placeholderTextMargin;
@property(nonatomic) float placeholderImageMargin; // @synthesize placeholderImageMargin=_placeholderImageMargin;
@property(retain, nonatomic) UIFont *placeholderFont; // @synthesize placeholderFont=_placeholderFont;
@property(nonatomic) BOOL forceBlackTintColor; // @synthesize forceBlackTintColor=_forceBlackTintColor;
@property(readonly, nonatomic) unsigned int tokensTruncated; // @synthesize tokensTruncated=_tokensTruncated;
@property(nonatomic) unsigned int maxLines; // @synthesize maxLines=_maxLines;
@property(nonatomic) float paddingRatio; // @synthesize paddingRatio=_paddingRatio;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(copy, nonatomic) NSString *emptyStateAccessibilityLabel; // @synthesize emptyStateAccessibilityLabel=_emptyStateAccessibilityLabel;
@property(readonly, nonatomic) UILabel *truncationLabel; // @synthesize truncationLabel=_truncationLabel;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (BOOL)hasTokensTruncated;
- (id)cellViewsPassingTest:(CDUnknownBlockType)arg1;
- (void)sortTokensWithOptions:(unsigned int)arg1 usingTokenViewComparator:(CDUnknownBlockType)arg2;
- (id)cellViewForTokenIdentifier:(id)arg1;
- (id)cellViewForObject:(id)arg1;
- (void)deselectCells;
- (void)removeAllCellsAndText;
- (void)removeCellWithObjectUsingGraphQLID:(id)arg1;
- (void)removeCellWithObject:(id)arg1;
- (void)_removeCellWithObject:(id)arg1 useGraphQLID:(BOOL)arg2;
- (id)insertCellWithObject:(id)arg1 atIndex:(unsigned int)arg2;
- (id)addCellWithObject:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setText:(id)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)deleteBackward;
- (void)_textFieldDone;
- (void)_textFieldDidChange;
- (void)_internalTextReset;
- (BOOL)_hasRealText;
- (void)_viewWasTapped:(id)arg1;
- (float)_heightWithLines:(int)arg1;
- (float)_marginY;
- (void)_updateHeight;
- (void)_selectLastSelectableCell;
- (void)_removeSelectedCellDueToUserInteraction;
- (void)_cellSelectionChanged:(id)arg1;
- (float)_layoutCells;
- (float)_lineHeight;
- (void)_updateCellSeparatorsTail;
- (void)_updateCellSeparatorsFocus;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
@property(readonly, nonatomic) unsigned int cellCount;
@property(nonatomic) __weak UIColor *placeholderTextColor;
@property(retain, nonatomic) UIImage *placeholderImage;
@property(copy, nonatomic) NSString *placeholder;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 tokenClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

