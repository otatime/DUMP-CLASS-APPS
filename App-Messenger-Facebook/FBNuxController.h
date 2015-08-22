//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBNuxPresenter.h"
#import "FBNuxStepChainControllerDelegate.h"
#import "FBSelfPresentingNux.h"

@class FBNuxStepChainController, NSArray, NSDictionary, NSString;

@interface FBNuxController : NSObject <FBNuxStepChainControllerDelegate, FBNuxPresenter, FBSelfPresentingNux>
{
    BOOL _isBeingDisplayed;
    id <FBNuxDelegate> _nuxCoordinator;
    id <FBNuxStepChainControllerDelegate> _stepDelegate;
    float _delayBeforeFirstStep;
    unsigned int _presenterOptions;
    FBNuxStepChainController *_stepChainController;
    id <FBNuxStep> _firstStep;
    NSArray *_triggerIDs;
    NSString *_nuxID;
    CDUnknownBlockType _eligibilityBlock;
}

@property(copy, nonatomic) CDUnknownBlockType eligibilityBlock; // @synthesize eligibilityBlock=_eligibilityBlock;
@property(copy, nonatomic) NSString *nuxID; // @synthesize nuxID=_nuxID;
@property(copy, nonatomic) NSArray *triggerIDs; // @synthesize triggerIDs=_triggerIDs;
@property(retain, nonatomic) id <FBNuxStep> firstStep; // @synthesize firstStep=_firstStep;
@property(retain, nonatomic) FBNuxStepChainController *stepChainController; // @synthesize stepChainController=_stepChainController;
@property(nonatomic) unsigned int presenterOptions; // @synthesize presenterOptions=_presenterOptions;
@property(nonatomic) float delayBeforeFirstStep; // @synthesize delayBeforeFirstStep=_delayBeforeFirstStep;
@property(nonatomic) __weak id <FBNuxStepChainControllerDelegate> stepDelegate; // @synthesize stepDelegate=_stepDelegate;
@property(readonly, nonatomic) BOOL isBeingDisplayed; // @synthesize isBeingDisplayed=_isBeingDisplayed;
@property(nonatomic) id <FBNuxDelegate> nuxCoordinator; // @synthesize nuxCoordinator=_nuxCoordinator;
- (void).cxx_destruct;
- (void)stepChainControllerDidCancel:(id)arg1 onStep:(id)arg2;
- (void)stepChainController:(id)arg1 didTransitionToStep:(id)arg2;
- (void)stepChainControllerDidEnd:(id)arg1;
- (id)viewControllerForPresentation;
- (void)closeNuxAnimated:(BOOL)arg1;
- (void)_showNux;
- (void)_showNuxAfterDelay;
- (void)showNux;
@property(readonly, nonatomic) int nuxType;
- (int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2;
- (void)dealloc;
- (id)initWithNuxID:(id)arg1 triggerIDs:(id)arg2 firstStep:(id)arg3 eligibilityBlock:(CDUnknownBlockType)arg4;
- (id)initWithNuxID:(id)arg1 triggerIDs:(id)arg2 firstStep:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *extraLogData;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSString *nuxAnalyticsModule;
@property(copy, nonatomic) CDUnknownBlockType onClosedBlock;
@property(readonly) Class superclass;

@end

