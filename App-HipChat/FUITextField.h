//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class UIColor, UIImage;

@interface FUITextField : UITextField
{
    UIImage *_flatBackgroundImage;
    UIImage *_flatHighlightedBackgroundImage;
    UIColor *_textFieldColor;
    UIColor *_borderColor;
    float _borderWidth;
    float _cornerRadius;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) float borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *textFieldColor; // @synthesize textFieldColor=_textFieldColor;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (id)textFieldImageWithColor:(id)arg1 borderColor:(id)arg2 borderWidth:(float)arg3 cornerRadius:(float)arg4;
- (void)configureTextField;
- (void)setTextColor:(id)arg1;

@end
