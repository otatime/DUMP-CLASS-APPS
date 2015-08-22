//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCalendarV2CommonProtoCalendarProto_ConferenceData, ComGoogleCalendarV2CommonProtoCalendarProto_EventSource, ComGoogleCalendarV2CommonProtoCalendarProto_Event_Attachment, ComGoogleCalendarV2CommonProtoCalendarProto_Event_Attendee, ComGoogleCalendarV2CommonProtoCalendarProto_Event_EventGadget, ComGoogleCalendarV2CommonProtoCalendarProto_Event_ExtendedProperty, ComGoogleCalendarV2CommonProtoCalendarProto_Event_InstanceTypeEnum, ComGoogleCalendarV2CommonProtoCalendarProto_Event_InvitationNote, ComGoogleCalendarV2CommonProtoCalendarProto_Event_Principal, ComGoogleCalendarV2CommonProtoCalendarProto_Event_Reminders, ComGoogleCalendarV2CommonProtoCalendarProto_Event_StatusEnum, ComGoogleCalendarV2CommonProtoCalendarProto_Event_Times, ComGoogleCalendarV2CommonProtoCalendarProto_Event_TransparencyEnum, ComGoogleCalendarV2CommonProtoCalendarProto_Event_TypeEnum, ComGoogleCalendarV2CommonProtoCalendarProto_Event_VideoConference, ComGoogleCalendarV2CommonProtoCalendarProto_Event_VisibilityEnum, ComGoogleCalendarV2CommonProtoCalendarProto_SmartMailEventData, ComGoogleCalendarV2CommonProtoCalendarProto_StructuredLocation, ComGoogleCalendarV2LibsProtoAnnotationsProto_Annotations, ComGoogleCalendarV2LibsProtoTimeProto_DateOrDateTime, NSString;

@protocol ComGoogleCalendarV2CommonProtoCalendarProto_EventOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_Attachment *)getAttachmentWithInt:(int)arg1;
- (id <JavaUtilList>)getAttachmentList;
- (int)getAttachmentCount;
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_InvitationNote *)getInvitationNoteWithInt:(int)arg1;
- (id <JavaUtilList>)getInvitationNoteList;
- (int)getInvitationNoteCount;
- (ComGoogleCalendarV2CommonProtoCalendarProto_EventSource *)getEventSource;
- (BOOL)hasEventSource;
- (NSString *)getBackgroundVideoUrl;
- (BOOL)hasBackgroundVideoUrl;
- (NSString *)getBackgroundImageUrl;
- (BOOL)hasBackgroundImageUrl;
- (NSString *)getFingerprint;
- (BOOL)hasFingerprint;
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_Reminders *)getReminders;
- (BOOL)hasReminders;
- (BOOL)getLocked;
- (BOOL)hasLocked;
- (BOOL)getPrivateCopy;
- (BOOL)hasPrivateCopy;
- (BOOL)getGuestsCanSeeGuests;
- (BOOL)hasGuestsCanSeeGuests;
- (BOOL)getGuestsCanModify;
- (BOOL)hasGuestsCanModify;
- (BOOL)getGuestsCanInviteOthers;
- (BOOL)hasGuestsCanInviteOthers;
- (BOOL)getAnyoneCanAddSelf;
- (BOOL)hasAnyoneCanAddSelf;
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_EventGadget *)getEventGadget;
- (BOOL)hasEventGadget;
- (ComGoogleCalendarV2CommonProtoCalendarProto_ConferenceData *)getConferenceData;
- (BOOL)hasConferenceData;
- (NSString *)getHangoutLink;
- (BOOL)hasHangoutLink;
- (BOOL)getHangout;
- (BOOL)hasHangout;
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_VideoConference *)getVideoConference;
- (BOOL)hasVideoConference;
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_ExtendedProperty *)getSharedExtendedPropertyWithInt:(int)arg1;
- (id <JavaUtilList>)getSharedExtendedPropertyList;
- (int)getSharedExtendedPropertyCount;
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_ExtendedProperty *)getPrivateExtendedPropertyWithInt:(int)arg1;
- (id <JavaUtilList>)getPrivateExtendedPropertyList;
- (int)getPrivateExtendedPropertyCount;
- (ComGoogleCalendarV2LibsProtoAnnotationsProto_Annotations *)getAnnotations;
- (BOOL)hasAnnotations;
- (ComGoogleCalendarV2CommonProtoCalendarProto_SmartMailEventData *)getSmartMailEventData;
- (BOOL)hasSmartMailEventData;
- (BOOL)getOtherAttendeesExcluded;
- (BOOL)hasOtherAttendeesExcluded;
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_Attendee *)getAttendeeWithInt:(int)arg1;
- (id <JavaUtilList>)getAttendeeList;
- (int)getAttendeeCount;
- (int)getSequence;
- (BOOL)hasSequence;
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_VisibilityEnum *)getVisibility;
- (BOOL)hasVisibility;
- (BOOL)getAutoDeclineOverlappingInvitations;
- (BOOL)hasAutoDeclineOverlappingInvitations;
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_TransparencyEnum *)getTransparency;
- (BOOL)hasTransparency;
- (BOOL)getAllFollowing;
- (BOOL)hasAllFollowing;
- (ComGoogleCalendarV2LibsProtoTimeProto_DateOrDateTime *)getOriginalStartTime;
- (BOOL)hasOriginalStartTime;
- (NSString *)getRangeEventId;
- (BOOL)hasRangeEventId;
- (NSString *)getRecurringEventId;
- (BOOL)hasRecurringEventId;
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_Times *)getTimes;
- (BOOL)hasTimes;
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_Principal *)getOrganizer;
- (BOOL)hasOrganizer;
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_Principal *)getCreator;
- (BOOL)hasCreator;
- (NSString *)getThreadId;
- (BOOL)hasThreadId;
- (NSString *)getColor;
- (BOOL)hasColor;
- (ComGoogleCalendarV2CommonProtoCalendarProto_StructuredLocation *)getStructuredLocation;
- (BOOL)hasStructuredLocation;
- (NSString *)getLocation;
- (BOOL)hasLocation;
- (NSString *)getDescription;
- (BOOL)hasDescription;
- (NSString *)getSummary;
- (BOOL)hasSummary;
- (long long)getModificationTimeMs;
- (BOOL)hasModificationTimeMs;
- (long long)getCreationTimeMs;
- (BOOL)hasCreationTimeMs;
- (NSString *)getHtmlLink;
- (BOOL)hasHtmlLink;
- (BOOL)getPhantom;
- (BOOL)hasPhantom;
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_StatusEnum *)getStatus;
- (BOOL)hasStatus;
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_TypeEnum *)getType;
- (BOOL)hasType;
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_InstanceTypeEnum *)getInstanceType;
- (BOOL)hasInstanceType;
- (NSString *)getCalendar;
- (BOOL)hasCalendar;
- (NSString *)getId;
- (BOOL)hasId;
@end
