//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBModelObjectProtocol.h"

@class FBMemGraphSearchQueryTitle, FBMemImage, FBMemMultiBackgroundIcon, NSArray, NSString;

@protocol FBQueriedSearchSuggestionUnitFieldsProtocol <FBModelObjectProtocol>
- (NSString *)urlString;
- (NSArray *)searchResultStyleList;
- (FBMemGraphSearchQueryTitle *)queryTitle;
- (NSString *)queryFunction;
- (FBMemImage *)profilePicture74;
- (NSString *)name;
- (FBMemMultiBackgroundIcon *)groupIcon;
- (NSString *)graphQLID;
@end

