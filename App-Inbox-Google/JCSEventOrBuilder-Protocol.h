//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class JCSAddress, JCSAssignedId, JCSEvent_EventStatusEnum, JCSEvent_EventUpdate, JCSImage, JCSOrganization, JCSPerson, JCSTime, NSString;

@protocol JCSEventOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JCSEvent_EventUpdate *)getChanges;
- (BOOL)hasChanges;
- (NSString *)getGoogleCalendarId;
- (BOOL)hasGoogleCalendarId;
- (JCSEvent_EventStatusEnum *)getEventStatus;
- (BOOL)hasEventStatus;
- (JCSImage *)getImage;
- (BOOL)hasImage;
- (JCSOrganization *)getPublisher;
- (BOOL)hasPublisher;
- (JCSPerson *)getAttendeeWithInt:(int)arg1;
- (id <JavaUtilList>)getAttendeeList;
- (int)getAttendeeCount;
- (JCSPerson *)getOrganizerWithInt:(int)arg1;
- (id <JavaUtilList>)getOrganizerList;
- (int)getOrganizerCount;
- (NSString *)getUrl;
- (BOOL)hasUrl;
- (JCSPerson *)getPerformerWithInt:(int)arg1;
- (id <JavaUtilList>)getPerformerList;
- (int)getPerformerCount;
- (JCSAddress *)getAddress;
- (BOOL)hasAddress;
- (JCSTime *)getEndTime;
- (BOOL)hasEndTime;
- (JCSTime *)getStartTime;
- (BOOL)hasStartTime;
- (NSString *)getDescription;
- (BOOL)hasDescription;
- (NSString *)getName;
- (BOOL)hasName;
- (JCSAssignedId *)getAssignedId;
- (BOOL)hasAssignedId;
@end
