//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBModalDialogView, UIButton;

@protocol FBModalDialogViewDelegate <NSObject>

@optional
- (void)modalDialogView:(FBModalDialogView *)arg1 didSelectDismissButton:(UIButton *)arg2;
- (void)modalDialogView:(FBModalDialogView *)arg1 didSelectTertiaryButton:(UIButton *)arg2;
- (void)modalDialogView:(FBModalDialogView *)arg1 didSelectSecondaryButton:(UIButton *)arg2;
- (void)modalDialogView:(FBModalDialogView *)arg1 didSelectPrimaryButton:(UIButton *)arg2;
@end

