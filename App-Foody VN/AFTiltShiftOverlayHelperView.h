//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFOverlayView.h"

#import "AFTiltShiftOverlayProtocol.h"

@class AFTiltShiftOverlayView, NSString;

@interface AFTiltShiftOverlayHelperView : AFOverlayView <AFTiltShiftOverlayProtocol>
{
    AFTiltShiftOverlayView *_hostView;
}

@property(nonatomic) __weak AFTiltShiftOverlayView *hostView; // @synthesize hostView=_hostView;
- (void).cxx_destruct;
- (void)drawCenterCircleWithContext:(struct CGContext *)arg1;
- (void)drawLinear;
- (void)drawRadial;
- (void)drawRect:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
