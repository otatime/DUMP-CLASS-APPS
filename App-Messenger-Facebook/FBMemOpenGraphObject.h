//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMemModelObject.h"

#import "FBAvatarProtocol.h"
#import "FBOpenGraphAvatarEntity.h"
#import "FBOpenGraphEntity.h"
#import "FBPlaceInFeed.h"
#import "FBQueriedEntityFieldsProtocol.h"
#import "FBQueriedNodeFieldsProtocol.h"
#import "FBQueriedPlaceFieldsProtocol.h"
#import "FBQueriedProfileFieldsProtocol.h"
#import "FBTimelineAppCollectionEntityProtocol.h"

@class NSString;

@interface FBMemOpenGraphObject : FBMemModelObject <FBAvatarProtocol, FBOpenGraphEntity, FBOpenGraphAvatarEntity, FBTimelineAppCollectionEntityProtocol, FBPlaceInFeed, FBQueriedNodeFieldsProtocol, FBQueriedEntityFieldsProtocol, FBQueriedProfileFieldsProtocol, FBQueriedPlaceFieldsProtocol>
{
}

- (BOOL)hasNativeIOSApp;
- (BOOL)profilePicIsSilhoutte;
- (BOOL)isUnownedPage;
- (id)cityName;
- (id)pageType;
- (BOOL)hasGeolocation;
- (id)fbid;
- (id)entityURL;
- (id)longitude;
- (id)latitude;
- (id)category;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *descriptionText;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSString *name;
@property(readonly) Class superclass;

@end

