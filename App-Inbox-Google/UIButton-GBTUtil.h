//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface UIButton (GBTUtil)
+ (id)gbt_buttonWithTarget:(id)arg1 action:(SEL)arg2 title:(id)arg3 backgroundNormalImage:(id)arg4 backgroundHighlightedImage:(id)arg5;
+ (id)gbt_buttonWithTarget:(id)arg1 action:(SEL)arg2 title:(id)arg3 normalImageName:(id)arg4 highlightedImageName:(id)arg5;
+ (id)gbt_insertButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)gbt_deleteButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)gbt_saveButtonWithTarget:(id)arg1 action:(SEL)arg2 stretchableNormalBackgroundImage:(id)arg3 stretchableHighlightedBackgroundImage:(id)arg4;
+ (id)gbt_doneButtonWithTarget:(id)arg1 action:(SEL)arg2 stretchableNormalBackgroundImage:(id)arg3 stretchableHighlightedBackgroundImage:(id)arg4;
+ (id)gbt_doneButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)gbt_cancelButtonWithTarget:(id)arg1 action:(SEL)arg2 withTitle:(id)arg3 stretchableNormalBackgroundImage:(id)arg4 stretchableHighlightedBackgroundImage:(id)arg5;
+ (id)gbt_closeButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)gbt_cancelButtonWithTarget:(id)arg1 action:(SEL)arg2 stretchableNormalBackgroundImage:(id)arg3 stretchableHighlightedBackgroundImage:(id)arg4;
+ (id)gbt_cancelButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)gbt_backButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)gbt_buttonWithTarget:(id)arg1 action:(SEL)arg2 stretchableNormalBackgroundImage:(id)arg3 stretchableHighlightedBackgroundImage:(id)arg4;
+ (void)gbt_applyImagesToButton:(id)arg1 normalImage:(id)arg2 disabledImage:(id)arg3 highlightedImage:(id)arg4 selectedImage:(id)arg5;
+ (void)gbt_applyImagesToButton:(id)arg1 normalImageName:(id)arg2 disabledImageName:(id)arg3 highlightedImageName:(id)arg4 selectedImageName:(id)arg5;
+ (id)gbt_buttonWithTarget:(id)arg1 action:(SEL)arg2 normalImageName:(id)arg3 highlightedImageName:(id)arg4 selectedImageName:(id)arg5;
+ (id)gbt_buttonWithTarget:(id)arg1 action:(SEL)arg2 quantumIconName:(id)arg3 normalColor:(id)arg4 highlightedColor:(id)arg5 disabledColor:(id)arg6 selectedColor:(id)arg7;
+ (id)gbt_buttonWithTarget:(id)arg1 action:(SEL)arg2 quantumIconName:(id)arg3 controlStates:(unsigned int)arg4;
+ (id)gbt_buttonWithTarget:(id)arg1 action:(SEL)arg2 quantumIconName:(id)arg3;
+ (id)gbt_buttonWithTarget:(id)arg1 action:(SEL)arg2 iconType:(int)arg3 normalColor:(id)arg4 highlightedColor:(id)arg5 disabledColor:(id)arg6 selectedColor:(id)arg7;
+ (id)gbt_buttonWithTarget:(id)arg1 action:(SEL)arg2 iconType:(int)arg3 controlStates:(unsigned int)arg4;
+ (id)gbt_buttonWithTarget:(id)arg1 action:(SEL)arg2 iconType:(int)arg3;
+ (id)gbt_buttonWithTarget:(id)arg1 action:(SEL)arg2 normalImageName:(id)arg3 highlightedImageName:(id)arg4;
+ (id)gbt_buttonWithTarget:(id)arg1 action:(SEL)arg2;
- (void)gbt_addInkSplashOnColoredBackgroundWithMaxRadius:(float)arg1;
- (void)gbt_addInkSplashWithInkColor:(id)arg1;
- (void)gbt_addInkSplashOnToolbarWithInkColor:(id)arg1;
- (void)gbt_addInkSplashOnColoredBackground;
- (void)gbt_addInkSplashOnWhiteBackground;
- (void)gbt_addInkSplashOnColoredToolbar;
- (void)gbt_addInkSplashOnWhiteToolbar;
- (void)gbt_addInkSplash:(id)arg1 maxRippleRadius:(float)arg2;
- (void)gbt_setAllTextActionTitle:(id)arg1 forState:(unsigned int)arg2;
@end
