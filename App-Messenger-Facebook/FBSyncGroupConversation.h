//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGenericThread.h"

@class FBMImageUrlCollection, NSArray, NSMutableDictionary, NSNumber, NSString;

@interface FBSyncGroupConversation : NSObject <FBGenericThread>
{
    NSString *_FBID;
    NSString *_name;
    NSNumber *_favoriteRank;
    NSNumber *_timestamp;
    NSMutableDictionary *_participants;
    NSString *_picHash;
    NSString *_picUrl;
    FBMImageUrlCollection *_imageUrls;
}

@property(copy, nonatomic) FBMImageUrlCollection *imageUrls; // @synthesize imageUrls=_imageUrls;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *picHash; // @synthesize picHash=_picHash;
@property(retain, nonatomic) NSMutableDictionary *participants; // @synthesize participants=_participants;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSNumber *favoriteRank; // @synthesize favoriteRank=_favoriteRank;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *FBID; // @synthesize FBID=_FBID;
@property(readonly, copy, nonatomic) NSString *genericThreadPicHash;
@property(readonly, nonatomic) BOOL genericThreadHasCustomName;
@property(readonly, nonatomic) NSArray *genericThreadParticipants;
@property(readonly, copy, nonatomic) NSString *genericThreadFbId;
@property(readonly, copy, nonatomic) NSString *nonNilLastNameForSort;
@property(readonly, copy, nonatomic) NSString *nonNilFirstNameForSort;
@property(readonly, copy, nonatomic) NSString *lastNameForSort;
@property(readonly, copy, nonatomic) NSString *firstNameForSort;
@property(readonly, nonatomic) BOOL contactIsEmailOnly;
- (id)groupConversationName;
- (id)groupConversationFBID;
- (BOOL)contactIsMemorialized;
@property(readonly, nonatomic) NSNumber *contactFavoriteRank;
@property(readonly, nonatomic) BOOL contactHasMessenger;
@property(readonly, nonatomic) BOOL contactIsGroupConversation;
@property(readonly, copy, nonatomic) NSString *contactName;
@property(readonly, copy, nonatomic) NSString *contactFBID;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSString *email;
@property(readonly, copy, nonatomic) NSString *firstName;
@property(readonly) unsigned int hash;
@property(readonly, copy, nonatomic) NSString *lastName;
@property(readonly) Class superclass;

@end

