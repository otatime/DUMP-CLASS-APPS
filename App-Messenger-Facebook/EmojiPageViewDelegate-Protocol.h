//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EmojiPageView, NSString;

@protocol EmojiPageViewDelegate <NSObject>
- (void)emojiPageDidClickBackspace:(EmojiPageView *)arg1;
- (void)emojiPage:(EmojiPageView *)arg1 didPickEmoji:(NSString *)arg2;
@end

