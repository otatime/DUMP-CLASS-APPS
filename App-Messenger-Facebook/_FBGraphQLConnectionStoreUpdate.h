//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGraphQLConnectionStoreStateModifying.h"

@class NSString;

@interface _FBGraphQLConnectionStoreUpdate : NSObject <FBGraphQLConnectionStoreStateModifying>
{
    map_8b7895f5 _updateMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)transitionsFromState:(id)arg1;
- (const map_8b7895f5 *)updateMap;
- (id)initWithUpdateMap:(map_8b7895f5)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
