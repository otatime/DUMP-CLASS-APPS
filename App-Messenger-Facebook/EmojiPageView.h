//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "EmojiViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIButton;

@interface EmojiPageView : UIView <EmojiViewDelegate>
{
    id <EmojiPageViewDelegate> _delegate;
    NSMutableArray *_emojiViews;
    NSArray *_emojiSet;
    int _numberOfRows;
    int _numberOfColumns;
    UIButton *_backspaceButton;
}

+ (int)numberOfColumnsThatFitsWidth:(float)arg1;
+ (int)numberOfRowsThatFitsHeight:(float)arg1;
+ (float)heightForNumberOfRows:(int)arg1;
@property(retain, nonatomic) UIButton *backspaceButton; // @synthesize backspaceButton=_backspaceButton;
@property(nonatomic) int numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) int numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(retain, nonatomic) NSArray *emojiSet; // @synthesize emojiSet=_emojiSet;
@property(retain, nonatomic) NSMutableArray *emojiViews; // @synthesize emojiViews=_emojiViews;
@property(nonatomic) id <EmojiPageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setEmojiSet:(id)arg1 numberOfRows:(int)arg2 numberOfColumns:(int)arg3;
- (void)updateEmojiViews:(unsigned int)arg1;
- (void)emojiView:(id)arg1 didPickEmoji:(id)arg2;
- (void)layoutSubviews;
- (void)backspacePressed:(id)arg1;
- (void)setUseFlatStyle:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

