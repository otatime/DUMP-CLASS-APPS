//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPathStyle.h"

@class UIColor;

@interface IGPathStyleOuterShadow : IGPathStyle
{
    float _size;
    UIColor *_color;
    struct CGPoint _offset;
}

+ (id)shadowWithYOffset:(float)arg1 color:(id)arg2;
+ (id)shadowWithYOffset:(float)arg1 size:(float)arg2 color:(id)arg3;
+ (id)shadowWithOffset:(struct CGPoint)arg1 size:(float)arg2 color:(id)arg3;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) float size; // @synthesize size=_size;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (void)applyToPath:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithOffset:(struct CGPoint)arg1 size:(float)arg2 color:(id)arg3;

@end

