//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCumulusCommonBaseProto_ObjectReference, ComGoogleCumulusQueryQueryProto_Query, ComGoogleCumulusTypeTypeProto_Command, NSString;

@protocol ComGoogleAppsBigtopServicesGmailBulkCommandOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getClientVersion;
- (BOOL)hasClientVersion;
- (ComGoogleCumulusTypeTypeProto_Command *)getCommand;
- (BOOL)hasCommand;
- (ComGoogleCumulusCommonBaseProto_ObjectReference *)getClientSideAffectedObjectWithInt:(int)arg1;
- (id <JavaUtilList>)getClientSideAffectedObjectList;
- (int)getClientSideAffectedObjectCount;
- (ComGoogleCumulusQueryQueryProto_Query *)getQuery;
- (BOOL)hasQuery;
@end
