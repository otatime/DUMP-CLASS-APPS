//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContentCell.h"

@class UIImageView;

@interface IGDirectLikeCell : IGDirectContentCell
{
    UIImageView *_likeImageView;
}

+ (float)likeCellHeight;
@property(retain, nonatomic) UIImageView *likeImageView; // @synthesize likeImageView=_likeImageView;
- (void).cxx_destruct;
- (float)likeAlpha;
- (float)likeXOffset;
- (void)layoutSubviews;
- (struct CGRect)tapTargetFrame;
- (id)initWithFrame:(struct CGRect)arg1;

@end

