//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TopToolBar, TopToolBarMiddleButton, UIButton;

@protocol TopToolBarDelegate <NSObject>

@optional
- (void)topToolbarDidChangeTransparentState:(TopToolBar *)arg1;
- (void)topToolBar:(TopToolBar *)arg1 didSelectMiddleButton:(TopToolBarMiddleButton *)arg2 isLongPress:(BOOL)arg3;
- (void)topToolBarDidSelectTitleButton:(TopToolBar *)arg1;
- (void)topToolBar:(TopToolBar *)arg1 didSelectRightButton:(UIButton *)arg2;
- (void)topToolBarDidSelectLeftButton:(TopToolBar *)arg1;
@end

