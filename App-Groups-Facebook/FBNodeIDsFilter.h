//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGraphQLConnectionSyncStoreFilter.h"

@class NSSet, NSString;

@interface FBNodeIDsFilter : NSObject <FBGraphQLConnectionSyncStoreFilter>
{
    BOOL _disabled;
    NSSet *_deletedIDs;
}

@property(readonly, copy, nonatomic) NSSet *deletedIDs; // @synthesize deletedIDs=_deletedIDs;
- (void).cxx_destruct;
- (void)setDisabled:(BOOL)arg1;
- (BOOL)shouldFilterNode:(id)arg1;
- (id)initWithDeletedIDs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

