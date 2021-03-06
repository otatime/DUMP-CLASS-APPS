//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface LetterAvatarView : UIView
{
    unsigned short letter_;
    UIColor *circleColor_;
}

+ (id)defaultColorForLetter:(unsigned short)arg1;
+ (id)avatarViewForFrame:(struct CGRect)arg1 letter:(unsigned short)arg2;
+ (void)initialize;
@property(nonatomic) unsigned short letter; // @synthesize letter=letter_;
@property(retain, nonatomic) UIColor *circleColor; // @synthesize circleColor=circleColor_;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

