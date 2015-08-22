//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IBActionSheetTitleView, NSMutableArray, NSString;

@interface IBActionSheet : UIView
{
    BOOL _visible;
    BOOL _hasCancelButton;
    BOOL _hasDestructiveButton;
    BOOL _shouldCancelOnTouch;
    BOOL _blurBackground;
    UIView *_transparentView;
    NSMutableArray *_buttons;
    NSString *_title;
    IBActionSheetTitleView *_titleView;
    id <IBActionSheetDelegate> _delegate;
    int _buttonResponse;
    int _cancelButtonIndex;
    int _destructiveButtonIndex;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property int destructiveButtonIndex; // @synthesize destructiveButtonIndex=_destructiveButtonIndex;
@property int cancelButtonIndex; // @synthesize cancelButtonIndex=_cancelButtonIndex;
@property BOOL blurBackground; // @synthesize blurBackground=_blurBackground;
@property BOOL shouldCancelOnTouch; // @synthesize shouldCancelOnTouch=_shouldCancelOnTouch;
@property BOOL hasDestructiveButton; // @synthesize hasDestructiveButton=_hasDestructiveButton;
@property BOOL hasCancelButton; // @synthesize hasCancelButton=_hasCancelButton;
@property BOOL visible; // @synthesize visible=_visible;
@property int buttonResponse; // @synthesize buttonResponse=_buttonResponse;
@property __weak id <IBActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IBActionSheetTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(retain) UIView *transparentView; // @synthesize transparentView=_transparentView;
- (void).cxx_destruct;
- (void)setDestructiveButtonFont:(id)arg1;
- (void)setCancelButtonFont:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setFont:(id)arg1 forButton:(id)arg2;
- (void)setFont:(id)arg1 forButtonAtIndex:(int)arg2;
- (void)setFont:(id)arg1;
- (int)numberOfButtons;
- (id)buttonTitleAtIndex:(int)arg1;
- (void)setButtonHighlightTextColor:(id)arg1 forButtonAtIndex:(int)arg2;
- (void)setButtonHighlightTextColor:(id)arg1;
- (void)setButtonHighlightBackgroundColor:(id)arg1 forButtonAtIndex:(int)arg2;
- (void)setButtonHighlightBackgroundColor:(id)arg1;
- (id)buttonTextColorAtIndex:(int)arg1;
- (id)buttonBackgroundColorAtIndex:(int)arg1;
- (void)setButtonTextColor:(id)arg1 forButtonAtIndex:(int)arg2;
- (void)setButtonBackgroundColor:(id)arg1 forButtonAtIndex:(int)arg2;
- (void)setTextColor:(id)arg1 ForButton:(id)arg2;
- (void)setTitleBackgroundColor:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setButtonBackgroundColor:(id)arg1;
- (void)setButtonTextColor:(id)arg1;
- (void)rotateToCurrentOrientation;
- (void)removeFromView;
- (void)cancelSelection;
- (void)showInView:(id)arg1;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)buttonClicked:(id)arg1;
- (int)addButtonWithTitle:(id)arg1;
- (void)unhighlightPressedButton:(id)arg1;
- (void)highlightPressedButton:(id)arg1;
- (void)setUpTheActions;
- (void)setUpTheActionSheet;
- (id)initWithTitle:(id)arg1 callback:(CDUnknownBlockType)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitlesArray:(id)arg5;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitlesArray:(id)arg5;
- (id)initWithTitle:(id)arg1 callback:(CDUnknownBlockType)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
- (id)init;

@end

