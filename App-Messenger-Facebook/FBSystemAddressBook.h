//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAddressBookAccessPermissionChecker.h"
#import "FBAddressBookAccessRequestDelegate.h"
#import "FBAddressBookAccessRequester.h"
#import "FBAddressBookReader.h"
#import "FBAddressBookReaderDelegate.h"

@class FBSystemAddressBookAccessRequester, FBSystemAddressBookReader, NSObject<OS_dispatch_queue>, NSString;

@interface FBSystemAddressBook : NSObject <FBAddressBookAccessRequestDelegate, FBAddressBookReaderDelegate, FBAddressBookAccessRequester, FBAddressBookReader, FBAddressBookAccessPermissionChecker>
{
    FBSystemAddressBookAccessRequester *_accessRequester;
    NSObject<OS_dispatch_queue> *_queueToDispatchEventsOnto;
    FBSystemAddressBookReader *_reader;
    id <FBAddressBookAccessRequestDelegate> _accessRequestDelegate;
    id <FBAddressBookReaderDelegate> _readerDelegate;
}

@property(nonatomic) __weak id <FBAddressBookReaderDelegate> readerDelegate; // @synthesize readerDelegate=_readerDelegate;
@property(nonatomic) __weak id <FBAddressBookAccessRequestDelegate> accessRequestDelegate; // @synthesize accessRequestDelegate=_accessRequestDelegate;
- (void).cxx_destruct;
- (void)didReadAddressBookWithContacts:(id)arg1;
- (void)readAddressBook;
- (void)accessToAddressBookDenied;
- (void)accessToAddressBookGranted;
- (void)requestAccessToAddressBook;
- (unsigned int)addressBookAccessPermission;
- (id)initWithQueueOntoWhichEventsAreDispatched:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

