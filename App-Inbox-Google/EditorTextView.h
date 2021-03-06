//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "EditorContentView.h"

@class NSMutableAttributedString, NSString;

@interface EditorTextView : UIView <EditorContentView>
{
    NSMutableAttributedString *mutableContent_;
    BOOL newFrameNeeded_;
    struct CGSize suggestedTextSize_;
    struct __CTFrame *textFrameRef_;
    struct __CTFramesetter *textFrameSetter_;
    id <EditorContentViewDelegate> contentViewDelegate;
}

+ (id)textViewWithText:(id)arg1;
@property(nonatomic) __weak id <EditorContentViewDelegate> contentViewDelegate; // @synthesize contentViewDelegate;
@property(readonly, nonatomic) id content; // @synthesize content=mutableContent_;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)releaseFrameReferences;
- (float)lineTopForLine:(struct __CTLine *)arg1 lineOrigin:(struct CGPoint)arg2;
- (int)lineIndexForPosition:(id)arg1 inLines:(id)arg2;
- (float)lineHeightForLine:(struct __CTLine *)arg1;
- (void)createFrameAndSetterIfNeeded;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)textInRange:(id)arg1;
- (id)splitAtPosition:(id)arg1;
- (id)selectionRectsForRange:(id)arg1 isEndOfRange:(BOOL)arg2;
- (void)removeAttributes:(id)arg1 forRange:(id)arg2;
- (BOOL)mergeIfPossible:(id)arg1;
- (void)insertContent:(id)arg1 atPosition:(id)arg2;
- (struct CGRect)expandCaretRect:(struct CGRect)arg1;
- (void)deleteContentInRange:(id)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (struct CGRect)caretRectForPosition:(id)arg1 adjustForNewLine:(BOOL)arg2;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (id)attributesAtPosition:(id)arg1;
- (id)attributedStringInRange:(id)arg1;
- (void)addAttributes:(id)arg1 forRange:(id)arg2;
@property(readonly, nonatomic) NSString *plainTextContent;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL contentIsExtendable;
@property(readonly, nonatomic) unsigned int contentLength;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 content:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

