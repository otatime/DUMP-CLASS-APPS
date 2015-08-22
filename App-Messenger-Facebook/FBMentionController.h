//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMentionDecoratorDelegate.h"

@class FBMemAvatarTaggingSearchProvider, FBMentionDecorator, FBTaggableCollection, FBUserSession, NSSet, NSString;

@interface FBMentionController : NSObject <FBMentionDecoratorDelegate>
{
    FBUserSession *_session;
    FBMentionDecorator *_decorator;
    FBMemAvatarTaggingSearchProvider *_searchProvider;
    FBTaggableCollection *_friendsCollection;
    NSSet *_committedMentions;
    id <FBMentionControllerDelegate> _delegate;
    id <FBAvatarProtocol> _author;
    FBTaggableCollection *_taggableCollection;
}

@property(copy, nonatomic) FBTaggableCollection *taggableCollection; // @synthesize taggableCollection=_taggableCollection;
@property(retain, nonatomic) id <FBAvatarProtocol> author; // @synthesize author=_author;
@property(nonatomic) __weak id <FBMentionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)mentionDecorator:(id)arg1 attributesForRemovedMention:(id)arg2;
- (id)mentionDecorator:(id)arg1 attributesForMention:(id)arg2;
- (void)mentionDecoratorMentionsDidChange:(id)arg1;
- (void)mentionDecoratorFinishedDetecting:(id)arg1;
- (void)mentionDecorator:(id)arg1 detectedQuery:(id)arg2 context:(id)arg3;
- (void)reset;
- (void)addMentions:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *committedMentions;
- (void)commitMention:(id)arg1 context:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
@property(copy, nonatomic) NSString *prefix;
@property(nonatomic) double queryDelay;
@property(nonatomic) int minimumQueryLength;
- (id)_taggableCollections;
- (id)initForTextView:(id)arg1 session:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

