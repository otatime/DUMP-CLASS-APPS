//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "FBFIGConfig.h"

@class NSArray, NSString, UIColor;

@interface FBGradientViewConfig : FBValueObject <FBFIGConfig>
{
    NSArray *_colors;
    NSArray *_locations;
    UIColor *_backgroundColor;
    float _opacity;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

+ (id)newWithColors:(id)arg1 locations:(id)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 backgroundColor:(id)arg5 opacity:(float)arg6;
@property(readonly, nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(readonly, nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(readonly, copy, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(readonly, copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void).cxx_destruct;
- (id)_initWithColors:(id)arg1 locations:(id)arg2 startPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4 backgroundColor:(id)arg5 opacity:(float)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

