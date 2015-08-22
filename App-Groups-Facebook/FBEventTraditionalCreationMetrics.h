//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBEventCreationControllerMetrics.h"

@class NSDate, NSDictionary, NSString;

@interface FBEventTraditionalCreationMetrics : NSObject <FBEventCreationControllerMetrics>
{
    BOOL _startTimeFilled;
    BOOL _endTimeFilled;
    NSDate *_startTime;
    NSDate *_endTime;
    unsigned int _peopleInvitedCount;
    unsigned int _invitePickerOpenedCount;
    unsigned int _eventNameLength;
    unsigned int _eventMaxNameLength;
    unsigned int _descriptionLength;
    unsigned int _locationPickerOpenedCount;
    unsigned int _locationLength;
    int _locationType;
    unsigned int _datePickerOpenedCount;
    unsigned int _privacyPickerOpenedCount;
    NSString *_privacySettingType;
}

@property(copy, nonatomic) NSString *privacySettingType; // @synthesize privacySettingType=_privacySettingType;
@property(nonatomic) unsigned int privacyPickerOpenedCount; // @synthesize privacyPickerOpenedCount=_privacyPickerOpenedCount;
@property(nonatomic) BOOL endTimeFilled; // @synthesize endTimeFilled=_endTimeFilled;
@property(nonatomic) BOOL startTimeFilled; // @synthesize startTimeFilled=_startTimeFilled;
@property(nonatomic) unsigned int datePickerOpenedCount; // @synthesize datePickerOpenedCount=_datePickerOpenedCount;
@property(nonatomic) int locationType; // @synthesize locationType=_locationType;
@property(nonatomic) unsigned int locationLength; // @synthesize locationLength=_locationLength;
@property(nonatomic) unsigned int locationPickerOpenedCount; // @synthesize locationPickerOpenedCount=_locationPickerOpenedCount;
@property(nonatomic) unsigned int descriptionLength; // @synthesize descriptionLength=_descriptionLength;
@property(nonatomic) unsigned int eventMaxNameLength; // @synthesize eventMaxNameLength=_eventMaxNameLength;
@property(nonatomic) unsigned int eventNameLength; // @synthesize eventNameLength=_eventNameLength;
@property(nonatomic) unsigned int invitePickerOpenedCount; // @synthesize invitePickerOpenedCount=_invitePickerOpenedCount;
@property(nonatomic) unsigned int peopleInvitedCount; // @synthesize peopleInvitedCount=_peopleInvitedCount;
@property(copy, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *analyticsExtrasDictionary;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
