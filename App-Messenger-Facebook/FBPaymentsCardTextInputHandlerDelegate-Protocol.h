//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBPaymentsCardTextInputHandler, FBPaymentsCardTextInputState, NSString, UIImage, UITextField;

@protocol FBPaymentsCardTextInputHandlerDelegate <NSObject>
- (void)textInputHandler:(FBPaymentsCardTextInputHandler *)arg1 didChangeContentInTextField:(UITextField *)arg2 isUserInput:(BOOL)arg3 isCompleted:(BOOL)arg4 image:(UIImage *)arg5 errorDescription:(NSString *)arg6 state:(FBPaymentsCardTextInputState *)arg7 isSecondMistake:(BOOL)arg8;
- (BOOL)textInputHandler:(FBPaymentsCardTextInputHandler *)arg1 shouldAllowEditingInTextField:(UITextField *)arg2;
@end

