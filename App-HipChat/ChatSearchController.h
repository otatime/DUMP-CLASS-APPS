//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RoomListDelegate.h"
#import "RosterDelegate.h"

@class AccountContext, NSArray, NSString;

@interface ChatSearchController : NSObject <RoomListDelegate, RosterDelegate>
{
    id <ChatSearchControllerDatasource> _searchDelegate;
    AccountContext *_accountContext;
    NSString *_propertyKey;
    NSArray *_allRoomsAndUsersSuperSet;
}

@property(retain, nonatomic) NSArray *allRoomsAndUsersSuperSet; // @synthesize allRoomsAndUsersSuperSet=_allRoomsAndUsersSuperSet;
@property(copy, nonatomic) NSString *propertyKey; // @synthesize propertyKey=_propertyKey;
@property(nonatomic) __weak AccountContext *accountContext; // @synthesize accountContext=_accountContext;
@property(nonatomic) id <ChatSearchControllerDatasource> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (void).cxx_destruct;
- (void)rosterFinishedLoading:(id)arg1 fromSource:(int)arg2;
- (void)roster:(id)arg1 removedUser:(id)arg2;
- (void)roster:(id)arg1 addedUser:(id)arg2;
- (void)roomListLoaded:(id)arg1 fromSource:(int)arg2;
- (void)roomList:(id)arg1 deletedRoom:(id)arg2;
- (void)roomList:(id)arg1 addedRoom:(id)arg2;
- (id)allRoomsAndUsers;
- (id)runSearch:(id)arg1 withSortOption:(int)arg2;
- (id)runSearch:(id)arg1;
- (id)indexSortObjects:(id)arg1;
- (id)alphaSortObjects:(id)arg1;
- (id)sortObjects:(id)arg1 withSortOption:(int)arg2;
- (id)initWithSortKey:(id)arg1 accountContext:(id)arg2;

@end

