//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTViewManager.h"

@interface RCTSliderManager : RCTViewManager
{
}

+ (id)getPropConfigView_maximumTrackTintColor;
+ (id)getPropConfigView_minimumTrackTintColor;
+ (id)getPropConfigView_maximumValue;
+ (id)getPropConfigView_minimumValue;
+ (id)getPropConfigView_value;
+ (void)load;
+ (id)moduleName;
- (void)set_maximumTrackTintColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_minimumTrackTintColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_maximumValue:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_minimumValue:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_value:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)sliderTouchEnd:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (id)view;

@end
