//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBKeyboardFocusedViewDisplayer : NSObject
{
    float _keyboardOffset;
    float _keyboardHeight;
}

- (void)keyboardWillHideWithBeginFrame:(struct CGRect)arg1 endFrame:(struct CGRect)arg2 duration:(double)arg3 curve:(int)arg4 scrollView:(id)arg5;
- (void)keyboardWillShowWithBeginFrame:(struct CGRect)arg1 endFrame:(struct CGRect)arg2 duration:(double)arg3 curve:(int)arg4 scrollView:(id)arg5;
- (id)init;
- (id)initWithKeyboardOffset:(float)arg1;

@end
