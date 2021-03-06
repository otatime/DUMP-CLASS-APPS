//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFPlugin.h"

@class NSDictionary, UITouch, UIView, UIViewController;

@protocol PSPDFStylusDriver <PSPDFPlugin>
@property(readonly, nonatomic) __weak id <PSPDFStylusDriverDelegate> delegate;
@property(readonly, nonatomic) unsigned int connectionStatus;
- (NSDictionary *)connectedStylusInfo;
- (void)disableDriver;
- (BOOL)enableDriverWithOptions:(NSDictionary *)arg1 error:(id *)arg2;

@optional
- (void)unregisterView:(UIView *)arg1;
- (void)registerView:(UIView *)arg1;
- (NSDictionary *)settingsControllerInfo;
- (UIViewController *)settingsController;
- (id <PSPDFStylusTouch>)touchInfoForTouch:(UITouch *)arg1;
@end

