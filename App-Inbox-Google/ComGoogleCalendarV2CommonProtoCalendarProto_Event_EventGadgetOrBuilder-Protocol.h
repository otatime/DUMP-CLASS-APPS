//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCalendarV2CommonProtoCalendarProto_Event_EventGadget_DisplayEnum, ComGoogleCalendarV2CommonProtoCalendarProto_Event_EventGadget_Preference, NSString;

@protocol ComGoogleCalendarV2CommonProtoCalendarProto_Event_EventGadgetOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_EventGadget_Preference *)getPreferenceWithInt:(int)arg1;
- (id <JavaUtilList>)getPreferenceList;
- (int)getPreferenceCount;
- (ComGoogleCalendarV2CommonProtoCalendarProto_Event_EventGadget_DisplayEnum *)getDisplay;
- (BOOL)hasDisplay;
- (int)getHeight;
- (BOOL)hasHeight;
- (int)getWidth;
- (BOOL)hasWidth;
- (NSString *)getGadgetLink;
- (BOOL)hasGadgetLink;
- (NSString *)getIconLink;
- (BOOL)hasIconLink;
- (NSString *)getTitle;
- (BOOL)hasTitle;
- (NSString *)getType;
- (BOOL)hasType;
@end
