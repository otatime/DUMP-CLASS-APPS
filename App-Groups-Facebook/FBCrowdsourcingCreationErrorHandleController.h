//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class FBNearbyPlace, NSMutableArray, NSString;

@interface FBCrowdsourcingCreationErrorHandleController : NSObject <UIAlertViewDelegate>
{
    NSString *_APIsuggestedName;
    FBNearbyPlace *_existingPlace;
    int _alertType;
    NSMutableArray *_overrideIDs;
    id <FBCrowdsourcingCreationErrorHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBCrowdsourcingCreationErrorHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)_newAlertViewForInvalidPlaceNameError:(id)arg1;
- (id)_newAlertViewForPlaceTooSimilarError:(id)arg1 attemptedName:(id)arg2;
- (id)_handlePlaceTooSimiliarError:(id)arg1;
- (id)_newAlertWithError:(id)arg1 suggestedName:(id)arg2;
- (void)handleError:(id)arg1 extraData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

