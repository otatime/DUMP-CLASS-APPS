//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBConversationContact.h"

@class FBMImageUrlCollection, NSNumber, NSString;

@interface FBMWrappedConversationContact : NSObject <FBConversationContact>
{
    BOOL _contactHasMessenger;
    NSString *_contactFBID;
    NSString *_contactName;
    FBMImageUrlCollection *_imageUrls;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_firstNameForSort;
    NSString *_lastNameForSort;
    NSString *_nonNilFirstNameForSort;
    NSString *_nonNilLastNameForSort;
}

@property(readonly, copy, nonatomic) NSString *nonNilLastNameForSort; // @synthesize nonNilLastNameForSort=_nonNilLastNameForSort;
@property(readonly, copy, nonatomic) NSString *nonNilFirstNameForSort; // @synthesize nonNilFirstNameForSort=_nonNilFirstNameForSort;
@property(readonly, copy, nonatomic) NSString *lastNameForSort; // @synthesize lastNameForSort=_lastNameForSort;
@property(readonly, copy, nonatomic) NSString *firstNameForSort; // @synthesize firstNameForSort=_firstNameForSort;
@property(readonly, copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) BOOL contactHasMessenger; // @synthesize contactHasMessenger=_contactHasMessenger;
@property(readonly, copy, nonatomic) FBMImageUrlCollection *imageUrls; // @synthesize imageUrls=_imageUrls;
@property(readonly, copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(readonly, copy, nonatomic) NSString *contactFBID; // @synthesize contactFBID=_contactFBID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)contactIsMemorialized;
@property(readonly, nonatomic) BOOL contactIsEmailOnly;
@property(readonly, nonatomic) NSNumber *contactFavoriteRank;
@property(readonly, nonatomic) BOOL contactIsGroupConversation;
- (id)initWithContactFBID:(id)arg1 contactName:(id)arg2 firstName:(id)arg3 firstNamePhonetic:(id)arg4 lastName:(id)arg5 lastNamePhonetic:(id)arg6 imageUrls:(id)arg7 hasMessenger:(BOOL)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSString *email;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
