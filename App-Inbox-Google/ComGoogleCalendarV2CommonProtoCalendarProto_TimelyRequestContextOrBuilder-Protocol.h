//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCalendarV2CommonProtoCalendarProto_PlatformEnum, NSString;

@protocol ComGoogleCalendarV2CommonProtoCalendarProto_TimelyRequestContextOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (int)getClientSchemaVersion;
- (BOOL)hasClientSchemaVersion;
- (NSString *)getClientVersion;
- (BOOL)hasClientVersion;
- (NSString *)getIdKey;
- (BOOL)hasIdKey;
- (ComGoogleCalendarV2CommonProtoCalendarProto_PlatformEnum *)getPlatform;
- (BOOL)hasPlatform;
- (NSString *)getConflictResolutionProtocol;
- (BOOL)hasConflictResolutionProtocol;
- (NSString *)getUserAgent;
- (BOOL)hasUserAgent;
@end

