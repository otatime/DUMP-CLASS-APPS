//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface CALayer (LayersToViews)
- (void)fb_setAnchorPoint:(struct CGPoint)arg1;
- (void)fb_insertSubcomponent:(id)arg1 atIndex:(unsigned int)arg2;
- (struct CGRect)fb_convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (id)fb_backgroundColor;
- (void)fb_setBackgroundColor:(id)arg1;
- (id)fb_supercomponent;
- (void)fb_removeFromSupercomponent;
- (id)fb_subcomponents;
- (void)fb_addSubcomponent:(id)arg1;
@property(readonly, nonatomic) CALayer *layer;
@property(nonatomic, setter=fb_setDelegate:) id fb_delegate;
@end

