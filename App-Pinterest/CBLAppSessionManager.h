//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBLAccountSetupDelegate.h"
#import "CBLCoreConceptsNuxViewControllerDelegate.h"
#import "CBLNewUserJourneyBoardCreateViewControllerDelegate.h"
#import "CBLNuxViewControllerDelegate.h"

@class CBLNavigationController, NSString, NSURL, UIViewController, UIViewController<CBLMainViewControllerProtocol>;

@interface CBLAppSessionManager : NSObject <CBLAccountSetupDelegate, CBLNuxViewControllerDelegate, CBLNewUserJourneyBoardCreateViewControllerDelegate, CBLCoreConceptsNuxViewControllerDelegate>
{
    BOOL _startingSession;
    id <CBLAppSessionManagerDelegate> _delegate;
    NSURL *_completionURL;
    CBLNavigationController *_signupWallNavigationController;
    UIViewController *_nuxViewController;
    UIViewController<CBLMainViewControllerProtocol> *_mainViewController;
}

+ (id)sharedManager;
@property(retain, nonatomic) UIViewController<CBLMainViewControllerProtocol> *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(retain, nonatomic) UIViewController *nuxViewController; // @synthesize nuxViewController=_nuxViewController;
@property(retain, nonatomic) CBLNavigationController *signupWallNavigationController; // @synthesize signupWallNavigationController=_signupWallNavigationController;
@property(nonatomic) BOOL startingSession; // @synthesize startingSession=_startingSession;
@property(retain, nonatomic) NSURL *completionURL; // @synthesize completionURL=_completionURL;
@property(nonatomic) id <CBLAppSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)CBLNewUserJourneyBoardCreateViewControllerDidTapBuildFeed:(id)arg1;
- (void)CBLNewUserJourneyBoardCreateViewController:(id)arg1 didTapCreateWithBoardName:(id)arg2 activeUser:(id)arg3;
- (id)targetURLFromFacebookURL:(id)arg1;
- (id)createNuxExperienceData;
@property(readonly, nonatomic) UIViewController *activeViewController;
- (void)nuxViewControllerDidFinish:(id)arg1;
- (void)accountLoginSuccessfulForActiveUser:(id)arg1;
- (void)accountSetupSuccessfulForActiveUser:(id)arg1;
- (void)resumeSessionTasks;
- (void)resumeSessionByTransitioningToViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)checkForNuxExperience:(id)arg1;
- (void)transitionToNuxWithData:(id)arg1;
- (void)prepareHomeFeedForAppResume;
- (void)prepareHomeFeedForAppLoad;
- (void)handleGoogleAppIndexingURL:(id)arg1;
- (void)handleCompletionURL:(id)arg1;
- (void)transitionToMainViewController;
- (void)transitionToSignupWallAndShowCompleteFlow:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)endSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)continueWithActiveUser;
- (BOOL)startOrResumeAppSessionWithURL:(id)arg1 sourceApplication:(id)arg2;
- (BOOL)startOrResumeAppSessionWithURL:(id)arg1;
- (void)startOrResumeAppSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

