//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity, ComGoogleCumulusTypeTypeProto_BaseObject, NSString;

@protocol ComGoogleAppsBigtopDataEntitiesEntityCumulusProtoAdapter <NSObject, JavaObject>
- (NSString *)getIdForNetworkProtocolWithNSString:(NSString *)arg1;
- (ComGoogleCumulusTypeTypeProto_BaseObject *)baseObjectFromEntityWithComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity:(ComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity *)arg1;
- (ComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity *)extractEntityFromBaseObjectWithComGoogleCumulusTypeTypeProto_BaseObject:(ComGoogleCumulusTypeTypeProto_BaseObject *)arg1;
- (NSString *)getTypeIdString;
- (NSString *)getQueryKeyString;
- (NSString *)getMuxingPrefix;
- (id <JavaUtilSet>)getSlicesToSync;
@end

