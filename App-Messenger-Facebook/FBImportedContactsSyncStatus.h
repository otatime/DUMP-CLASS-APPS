//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSArray;

@interface FBImportedContactsSyncStatus : FBValueObject <NSCopying>
{
    unsigned int _numberOfContactsAttemptedToMatch;
    NSArray *_importedSyncPersons;
}

@property(readonly, copy, nonatomic) NSArray *importedSyncPersons; // @synthesize importedSyncPersons=_importedSyncPersons;
@property(readonly, nonatomic) unsigned int numberOfContactsAttemptedToMatch; // @synthesize numberOfContactsAttemptedToMatch=_numberOfContactsAttemptedToMatch;
- (void).cxx_destruct;
- (id)initWithNumberOfContactsAttemptedToMatch:(unsigned int)arg1 importedSyncPersons:(id)arg2;

@end
