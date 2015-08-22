//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNContactSuggestionsDelegate.h"

@class NSArray, NSString;

@interface FBWebRTCContactsRetriever : NSObject <MNContactSuggestionsDelegate>
{
    id <MNSuggestedContactsRetriever> _retriever;
    NSArray *_contacts;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)didRetrieveSuggestedConversationContacts:(id)arg1;
- (void)startRetrievingSuggestedContacts;
@property(readonly, copy, nonatomic) NSArray *contacts;
@property(readonly, nonatomic) BOOL isComplete;
- (void)dealloc;
- (id)initWithRetriever:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

