//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface CBLNuxConnectStepData : NSObject
{
    NSDictionary *_displayData;
}

@property(readonly, nonatomic) NSDictionary *displayData; // @synthesize displayData=_displayData;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL shouldDefaultFollowAll;
@property(readonly, nonatomic) NSString *loadingText;
@property(readonly, nonatomic) NSString *noFriendsText;
@property(readonly, nonatomic) NSString *gridFooterText;
@property(readonly, nonatomic) NSString *skipConfirmButtonText;
@property(readonly, nonatomic) NSString *skipCancelButtonText;
@property(readonly, nonatomic) NSString *skipHeading;
@property(readonly, nonatomic) NSString *skipText;
@property(readonly, nonatomic) NSString *followButtonText;
@property(readonly, nonatomic) NSString *continueButtonText;
@property(readonly, nonatomic) NSString *detailTextConnected;
@property(readonly, nonatomic) NSString *titleTextConnected;
@property(readonly, nonatomic) NSString *detailText;
@property(readonly, nonatomic) NSString *titleText;
@property(readonly, nonatomic) int totalSteps;
@property(readonly, nonatomic) int step;
- (id)initWithDictionary:(id)arg1;

@end

