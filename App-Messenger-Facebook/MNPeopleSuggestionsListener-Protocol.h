//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath;

@protocol MNPeopleSuggestionsListener <NSObject>
- (void)didAddContact:(id <FBConversationContact>)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)didRetrieveContactsInSections:(NSArray *)arg1 suggestionResultsInSections:(NSArray *)arg2 sectionTitles:(NSArray *)arg3;
- (void)didStartRetrievingSuggestedContacts;
@end

