//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSMutableDictionary, NSString, UIColor, UIFont;

@interface SmartMailSimpleSnippetView : UIView <UIGestureRecognizerDelegate>
{
    NSMutableDictionary *attributes_;
    BOOL configuredForTL_;
    BOOL configuredForTaskAssist_;
    NSMutableDictionary *contentViewActions_;
    UIView *separator_;
    SmartMailSimpleSnippetView *weakSelf_;
    BOOL _forceUnifiedTemplates;
    float horizontalPadding_;
    float horizontalInnerPadding_;
    unsigned int numberOfLines_;
    CDUnknownBlockType _actionBlockForEntireView;
    id <SmartMailInteractionSupport> _smartMailDelegate;
    int _lineItemType;
}

+ (id)snippetForTaskAssistWithDelegate:(id)arg1;
+ (id)snippetForTLWithDelegate:(id)arg1;
+ (BOOL)isActionSupported:(id)arg1;
+ (void)initialize;
@property(nonatomic) int lineItemType; // @synthesize lineItemType=_lineItemType;
@property(nonatomic) __weak id <SmartMailInteractionSupport> smartMailDelegate; // @synthesize smartMailDelegate=_smartMailDelegate;
@property(nonatomic) BOOL forceUnifiedTemplates; // @synthesize forceUnifiedTemplates=_forceUnifiedTemplates;
@property(copy, nonatomic) CDUnknownBlockType actionBlockForEntireView; // @synthesize actionBlockForEntireView=_actionBlockForEntireView;
@property(nonatomic) unsigned int numberOfLines; // @synthesize numberOfLines=numberOfLines_;
@property(nonatomic) float horizontalInnerPadding; // @synthesize horizontalInnerPadding=horizontalInnerPadding_;
@property(nonatomic) float horizontalPadding; // @synthesize horizontalPadding=horizontalPadding_;
- (void).cxx_destruct;
- (struct CGPoint)accessibilityActivationPoint;
- (void)addSubview:(id)arg1 withActionBlock:(CDUnknownBlockType)arg2;
- (id)textColorForResponse:(id)arg1;
- (id)labelWithText:(id)arg1 textColor:(id)arg2 font:(id)arg3 shouldUppercase:(BOOL)arg4;
- (id)labelWithText:(id)arg1 textColor:(id)arg2 font:(id)arg3;
- (id)labelWithAttributedText:(id)arg1 accessibilityText:(id)arg2;
- (CDUnknownBlockType)actionBlockForSelectingLink:(id)arg1 withClickableAction:(id)arg2;
- (CDUnknownBlockType)actionBlockForGoTo:(id)arg1;
- (CDUnknownBlockType)actionBlockForButton:(id)arg1 targetView:(id)arg2 withSpinnerPlaceholder:(id)arg3;
- (void)addPickContact:(id)arg1;
- (void)addSnooze:(id)arg1 withItem:(id)arg2;
- (void)addButton:(id)arg1;
- (void)addUriIntent:(id)arg1;
- (void)addEmail:(id)arg1 withName:(id)arg2;
- (void)addSMS:(id)arg1;
- (void)addSetAlias:(id)arg1;
- (void)addCall:(id)arg1 showNumber:(id)arg2;
- (void)addRSVP:(id)arg1;
- (void)addViewMap:(id)arg1;
- (void)addGoTo:(id)arg1 hasMoreDetail:(id)arg2;
- (void)configureForTaskAssist;
- (void)configureForTL;
- (void)snippetTapped:(id)arg1;
- (void)createSubviews;
- (id)subviewFramesWithViewSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(retain, nonatomic) UIColor *textColor; // @dynamic textColor;
@property(nonatomic) BOOL separatorShown; // @dynamic separatorShown;
@property(readonly, nonatomic) BOOL isInteractive;
@property(retain, nonatomic) UIFont *font; // @dynamic font;
- (void)prepareForReuse;
- (void)addText:(id)arg1 textColor:(id)arg2 font:(id)arg3;
- (void)addImage:(id)arg1;
- (void)addAttributedText:(id)arg1 accessibilityText:(id)arg2;
- (void)addAction:(id)arg1 imageName:(id)arg2 withAssociatedObject:(id)arg3;
- (void)addAction:(id)arg1 withAssociatedObject:(id)arg2;
- (void)addAction:(id)arg1 imageName:(id)arg2;
- (void)addAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

