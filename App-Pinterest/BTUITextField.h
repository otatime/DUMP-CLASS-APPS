//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@interface BTUITextField : UITextField
{
    id <BTUITextFieldEditDelegate> _editDelegate;
}

@property(nonatomic) __weak id <BTUITextFieldEditDelegate> editDelegate; // @synthesize editDelegate=_editDelegate;
- (void).cxx_destruct;
- (void)insertText:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;

@end

