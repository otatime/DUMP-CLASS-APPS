//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBGroupsDataLoader, FBMemGroup, NSError;

@protocol FBGroupsDataLoaderListener <NSObject>
- (void)dataLoader:(FBGroupsDataLoader *)arg1 deleteGroup:(FBMemGroup *)arg2;
- (void)dataLoader:(FBGroupsDataLoader *)arg1 reloadGroup:(FBMemGroup *)arg2;
- (void)dataLoader:(FBGroupsDataLoader *)arg1 reloadDataWithError:(NSError *)arg2;

@optional
- (void)dataLoader:(FBGroupsDataLoader *)arg1 didServerSyncWithError:(NSError *)arg2;
@end
