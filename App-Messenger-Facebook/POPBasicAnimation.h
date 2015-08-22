//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "POPPropertyAnimation.h"

@class CAMediaTimingFunction;

@interface POPBasicAnimation : POPPropertyAnimation
{
}

+ (id)defaultAnimation;
+ (id)easeInEaseOutAnimation;
+ (id)easeOutAnimation;
+ (id)easeInAnimation;
+ (id)linearAnimation;
+ (id)animationWithPropertyNamed:(id)arg1;
+ (id)animation;
- (void)_appendDescription:(id)arg1 debug:(BOOL)arg2;
@property(retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property(nonatomic) double duration;
- (id)init;
- (void)_initState;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

