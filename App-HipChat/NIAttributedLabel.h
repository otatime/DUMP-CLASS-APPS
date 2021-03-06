//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

#import "UIActionSheetDelegate.h"

@class NSArray, NSAttributedString, NSDictionary, NSMutableArray, NSMutableAttributedString, NSString, NSTextCheckingResult, NSTimer, UIColor;

@interface NIAttributedLabel : UILabel <UIActionSheetDelegate>
{
    BOOL _autoDetectLinks;
    BOOL _deferLinkDetection;
    BOOL _linksHaveUnderlines;
    BOOL _detectingLinks;
    BOOL _linksHaveBeenDetected;
    struct __CTFrame *_textFrame;
    UIColor *_linkColor;
    UIColor *_highlightedLinkBackgroundColor;
    NSDictionary *_attributesForLinks;
    NSDictionary *_attributesForHighlightedLink;
    float _lineHeight;
    int _verticalTextAlignment;
    int _underlineStyle;
    int _underlineStyleModifier;
    float _shadowBlur;
    float _strokeWidth;
    UIColor *_strokeColor;
    float _textKern;
    NSString *_tailTruncationString;
    id <NIAttributedLabelDelegate> _delegate;
    NSMutableAttributedString *_mutableAttributedString;
    NSArray *_detectedlinkLocations;
    NSMutableArray *_explicitLinkLocations;
    NSTextCheckingResult *_originalLink;
    NSTextCheckingResult *_touchedLink;
    NSTimer *_longPressTimer;
    NSTextCheckingResult *_actionSheetLink;
    NSArray *_accessibleElements;
    NSMutableArray *_images;
    unsigned long long _dataDetectorTypes;
    struct CGPoint _touchPoint;
}

+ (id)mutableAttributedStringFromLabel:(id)arg1;
+ (unsigned char)lineBreakModeFromUILineBreakMode:(int)arg1;
+ (unsigned char)alignmentFromUITextAlignment:(int)arg1;
@property(retain, nonatomic) NSMutableArray *images; // @synthesize images=_images;
@property(copy, nonatomic) NSArray *accessibleElements; // @synthesize accessibleElements=_accessibleElements;
@property(retain, nonatomic) NSTextCheckingResult *actionSheetLink; // @synthesize actionSheetLink=_actionSheetLink;
@property(nonatomic) struct CGPoint touchPoint; // @synthesize touchPoint=_touchPoint;
@property(retain, nonatomic) NSTimer *longPressTimer; // @synthesize longPressTimer=_longPressTimer;
@property(retain, nonatomic) NSTextCheckingResult *touchedLink; // @synthesize touchedLink=_touchedLink;
@property(retain, nonatomic) NSTextCheckingResult *originalLink; // @synthesize originalLink=_originalLink;
@property(retain, nonatomic) NSMutableArray *explicitLinkLocations; // @synthesize explicitLinkLocations=_explicitLinkLocations;
@property(copy, nonatomic) NSArray *detectedlinkLocations; // @synthesize detectedlinkLocations=_detectedlinkLocations;
@property(nonatomic) BOOL linksHaveBeenDetected; // @synthesize linksHaveBeenDetected=_linksHaveBeenDetected;
@property BOOL detectingLinks; // @synthesize detectingLinks=_detectingLinks;
@property(retain, nonatomic) NSMutableAttributedString *mutableAttributedString; // @synthesize mutableAttributedString=_mutableAttributedString;
@property(nonatomic) __weak id <NIAttributedLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *tailTruncationString; // @synthesize tailTruncationString=_tailTruncationString;
@property(nonatomic) float textKern; // @synthesize textKern=_textKern;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) float strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(nonatomic) float shadowBlur; // @synthesize shadowBlur=_shadowBlur;
@property(nonatomic) int underlineStyleModifier; // @synthesize underlineStyleModifier=_underlineStyleModifier;
@property(nonatomic) int underlineStyle; // @synthesize underlineStyle=_underlineStyle;
@property(nonatomic) int verticalTextAlignment; // @synthesize verticalTextAlignment=_verticalTextAlignment;
@property(nonatomic) float lineHeight; // @synthesize lineHeight=_lineHeight;
@property(copy, nonatomic) NSDictionary *attributesForHighlightedLink; // @synthesize attributesForHighlightedLink=_attributesForHighlightedLink;
@property(copy, nonatomic) NSDictionary *attributesForLinks; // @synthesize attributesForLinks=_attributesForLinks;
@property(nonatomic) BOOL linksHaveUnderlines; // @synthesize linksHaveUnderlines=_linksHaveUnderlines;
@property(retain, nonatomic) UIColor *highlightedLinkBackgroundColor; // @synthesize highlightedLinkBackgroundColor=_highlightedLinkBackgroundColor;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(nonatomic) BOOL deferLinkDetection; // @synthesize deferLinkDetection=_deferLinkDetection;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) BOOL autoDetectLinks; // @synthesize autoDetectLinks=_autoDetectLinks;
- (void).cxx_destruct;
- (void)insertImage:(id)arg1 atIndex:(int)arg2 margins:(struct UIEdgeInsets)arg3 verticalTextAlignment:(int)arg4;
- (void)insertImage:(id)arg1 atIndex:(int)arg2 margins:(struct UIEdgeInsets)arg3;
- (void)insertImage:(id)arg1 atIndex:(int)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (BOOL)isAccessibilityElement;
- (void)invalidateAccessibleElements;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)drawAttributedString:(id)arg1 rect:(struct CGRect)arg2;
- (void)drawHighlightWithRect:(struct CGRect)arg1;
- (void)drawImages;
- (int)numberOfDisplayedLines;
- (id)mutableAttributedStringWithAdditions;
- (void)_applyLinkStyleWithResults:(id)arg1 toAttributedString:(id)arg2;
- (void)_longPressTimerDidFire:(id)arg1;
- (id)actionSheetForResult:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)_rectsForLink:(id)arg1;
- (BOOL)isPoint:(struct CGPoint)arg1 nearLink:(id)arg2;
- (struct CGRect)_rectForRange:(struct _NSRange)arg1 inLine:(struct __CTLine *)arg2 lineOrigin:(struct CGPoint)arg3;
- (id)linkAtPoint:(struct CGPoint)arg1;
- (struct CGAffineTransform)_transformForCoreText;
- (float)_verticalOffsetForBounds:(struct CGRect)arg1;
- (void)_processLinksInAttributedString:(id)arg1;
- (id)linkAtIndex:(long)arg1;
- (struct CGRect)getLineBounds:(struct __CTLine *)arg1 point:(struct CGPoint)arg2;
- (void)detectLinks;
- (void)_deferLinkDetection;
- (id)_matchesFromAttributedString:(id)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setTextKern:(float)arg1 range:(struct _NSRange)arg2;
- (void)setStrokeColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)setStrokeWidth:(float)arg1 range:(struct _NSRange)arg2;
- (void)setUnderlineStyle:(int)arg1 modifier:(int)arg2 range:(struct _NSRange)arg3;
- (void)setFont:(id)arg1 range:(struct _NSRange)arg2;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)setTextColor:(id)arg1;
- (void)setLineBreakMode:(int)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)removeAllExplicitLinks;
- (void)addLink:(id)arg1 range:(struct _NSRange)arg2;
- (void)setAttributedText:(id)arg1;
- (id)attributedText;
@property(copy, nonatomic) NSAttributedString *attributedString;
- (void)setText:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)attributedTextDidChange;
- (void)resetTextFrame;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_configureDefaults;
@property(nonatomic) struct __CTFrame *textFrame; // @synthesize textFrame=_textFrame;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

