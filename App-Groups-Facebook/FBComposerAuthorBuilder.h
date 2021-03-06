//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBComposerAuthorFetchStatus, NSString, NSURL;

@interface FBComposerAuthorBuilder : NSObject
{
    NSString *_graphQLID;
    unsigned int _authorType;
    NSString *_name;
    NSString *_firstName;
    BOOL _isMinorValue;
    NSURL *_profilePictureURL;
    NSURL *_largeProfilePictureURL;
    BOOL _pageCanPostOGActions;
    BOOL _isViewerAllowedToPostAsAuthorEntity;
    BOOL _isWorkUser;
    NSString *_urlString;
    NSString *_defaultAlbumType;
    FBComposerAuthorFetchStatus *_fetchStatus;
}

+ (id)composerAuthorFromExistingComposerAuthor:(id)arg1;
+ (id)composerAuthor;
- (void).cxx_destruct;
- (id)withFetchStatus:(id)arg1;
- (id)withDefaultAlbumType:(id)arg1;
- (id)withUrlString:(id)arg1;
- (id)withIsWorkUser:(BOOL)arg1;
- (id)withIsViewerAllowedToPostAsAuthorEntity:(BOOL)arg1;
- (id)withPageCanPostOGActions:(BOOL)arg1;
- (id)withLargeProfilePictureURL:(id)arg1;
- (id)withProfilePictureURL:(id)arg1;
- (id)withIsMinorValue:(BOOL)arg1;
- (id)withFirstName:(id)arg1;
- (id)withName:(id)arg1;
- (id)withAuthorType:(unsigned int)arg1;
- (id)withGraphQLID:(id)arg1;
- (id)build;

@end

