//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface CBLNewFindFriendsAddressBookHelper : NSObject
{
    NSArray *_allContacts;
    NSMutableArray *_emailContacts;
    NSMutableArray *_phoneContacts;
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSMutableArray *phoneContacts; // @synthesize phoneContacts=_phoneContacts;
@property(readonly, nonatomic) NSMutableArray *emailContacts; // @synthesize emailContacts=_emailContacts;
@property(readonly, nonatomic) NSArray *allContacts; // @synthesize allContacts=_allContacts;
- (void).cxx_destruct;
- (id)contactPhoneNumberTypeForContactEmail:(id)arg1;
- (id)contactPhoneNumbersForContactEmail:(id)arg1;
- (id)contactEmailAddressesForContactEmail:(id)arg1;
- (void)prefetchContacts;

@end

