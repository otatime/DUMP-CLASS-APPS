//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum, ComGoogleAppsBigtopServicesGmailBigTopGmailQuerySettings, NSString;

@protocol ComGoogleAppsBigtopDataItemsItemsProto_ItemListConfigOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getItemListId;
- (BOOL)hasItemListId;
- (ComGoogleAppsBigtopServicesGmailBigTopGmailQuerySettings *)getQuerySettings;
- (BOOL)hasQuerySettings;
- (NSString *)getQueryString;
- (BOOL)hasQueryString;
- (NSString *)getClusterServerPermId;
- (BOOL)hasClusterServerPermId;
- (int)getMaxItems;
- (BOOL)hasMaxItems;
- (BOOL)getIsLocalOnly;
- (BOOL)hasIsLocalOnly;
- (ComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum *)getViewType;
- (BOOL)hasViewType;
@end
