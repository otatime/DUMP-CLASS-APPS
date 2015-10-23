//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSManagedObjectID, NSString;

@interface AFPurchasableInfoCache : NSObject
{
    NSManagedObjectID *_objectID;
    NSString *_entityName;
    int _index;
    int _status;
    int _cachedPosition;
    int _cachedStatus;
    int _pendingIndex;
    int _pendingStatus;
}

@property(nonatomic) int pendingStatus; // @synthesize pendingStatus=_pendingStatus;
@property(nonatomic) int pendingIndex; // @synthesize pendingIndex=_pendingIndex;
@property(nonatomic) int cachedStatus; // @synthesize cachedStatus=_cachedStatus;
@property(nonatomic) int cachedPosition; // @synthesize cachedPosition=_cachedPosition;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
@property(retain, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;

@end
