//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "FBWebRTCCancelableUserInterface.h"

@class FBWebRTCCallSurvey, FBWebRTCUIDisplayCoordinator, FBWebRTCViewController, NSString;

@interface FBWebRTCSurveyViewController : UITableViewController <FBWebRTCCancelableUserInterface>
{
    FBWebRTCCallSurvey *_survey;
    FBWebRTCUIDisplayCoordinator *_displayCoordinator;
    FBWebRTCViewController *_webRTCViewController;
}

@property(retain, nonatomic) FBWebRTCViewController *webRTCViewController; // @synthesize webRTCViewController=_webRTCViewController;
@property(retain, nonatomic) FBWebRTCUIDisplayCoordinator *displayCoordinator; // @synthesize displayCoordinator=_displayCoordinator;
@property(retain, nonatomic) FBWebRTCCallSurvey *survey; // @synthesize survey=_survey;
- (void).cxx_destruct;
- (void)_doCancelAnimated:(BOOL)arg1;
- (void)dismissModalUserInterface;
- (id)modalPresentingViewController;
- (void)didPressCancel;
- (void)didPressSend;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (id)initWithSurvey:(id)arg1 displayCoordinator:(id)arg2 webRTCViewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

