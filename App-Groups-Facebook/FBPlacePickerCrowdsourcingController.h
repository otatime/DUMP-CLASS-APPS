//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBCrowdsourcingDuplicatesControllerDelegate.h"
#import "FBCrowdsourcingHomeCreationViewControllerDelegate.h"
#import "FBCrowdsourcingPlaceCreationControllerDelegate.h"

@class FBCrowdsourcingDuplicatesController, FBCrowdsourcingHomeCreationViewController, FBCrowdsourcingNewSuggestEditsViewController, FBCrowdsourcingPlaceCreationController, FBPlacePickerBaseViewController, FBUserSession, NSString;

@interface FBPlacePickerCrowdsourcingController : NSObject <FBCrowdsourcingDuplicatesControllerDelegate, FBCrowdsourcingHomeCreationViewControllerDelegate, FBCrowdsourcingPlaceCreationControllerDelegate>
{
    FBUserSession *_session;
    NSString *_creationFlowType;
    FBCrowdsourcingNewSuggestEditsViewController *_suggestEditsViewController;
    FBCrowdsourcingDuplicatesController *_dupReportController;
    FBCrowdsourcingHomeCreationViewController *_creationHomeController;
    FBCrowdsourcingPlaceCreationController *_placeCreationController;
    FBPlacePickerBaseViewController *_placePicker;
    id <FBPlacePickerCrowdsourcingControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBPlacePickerCrowdsourcingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)newPlaceCreationControllerDidCreatePlace:(id)arg1 suggestedPhoto:(BOOL)arg2;
- (void)newPlaceCreationControllerDidChooseExistingPlace:(id)arg1;
- (void)crowdsourcingHomeCreationControllerDidCancel:(id)arg1;
- (void)crowdsourcingHomeCreationController:(id)arg1 didCreatePlace:(id)arg2;
- (void)crowdsourcingDuplicatesController:(id)arg1 didEditPlaceWithID:(id)arg2;
- (void)crowdsourcingDuplicatesControllerDidCancel:(id)arg1;
- (void)navigateToHomeCreation:(id)arg1 currentUser:(id)arg2 logger:(id)arg3;
- (void)navigatePlacePicker:(id)arg1 toViewController:(id)arg2;
- (void)navigateToPlaceCreationWithName:(id)arg1 userLocation:(id)arg2 context:(id)arg3;
- (void)navigateToSuggestEditsWithPlace:(id)arg1 context:(id)arg2;
- (void)navigateToReportDuplicatesWithSelectedPlace:(id)arg1 nearbyPlaces:(id)arg2 entryPoint:(unsigned int)arg3;
- (void)dealloc;
- (id)initWithSession:(id)arg1 placePicker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

