//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComposeTokenView, NSString;

@protocol ComposeTokenViewDelegate <NSObject>
- (void)composeTokenViewDidLongPress:(ComposeTokenView *)arg1;
- (void)composeTokenViewDidBecomeFirstResponder:(ComposeTokenView *)arg1;
- (void)composeTokenView:(ComposeTokenView *)arg1 didInsertText:(NSString *)arg2;
- (void)composeTokenViewDidDelete:(ComposeTokenView *)arg1;
@end
