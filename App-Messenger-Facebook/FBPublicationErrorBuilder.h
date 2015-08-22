//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@interface FBPublicationErrorBuilder : NSObject
{
    unsigned int _type;
    NSString *_humanizedErrorTitle;
    NSString *_humanizedErrorDescription;
    NSString *_developerFacingDescription;
    int _errorCode;
    int _errorSubcode;
    NSError *_serverError;
}

+ (id)publicationErrorFromExistingPublicationError:(id)arg1;
+ (id)publicationError;
- (void).cxx_destruct;
- (id)withServerError:(id)arg1;
- (id)withErrorSubcode:(int)arg1;
- (id)withErrorCode:(int)arg1;
- (id)withDeveloperFacingDescription:(id)arg1;
- (id)withHumanizedErrorDescription:(id)arg1;
- (id)withHumanizedErrorTitle:(id)arg1;
- (id)withType:(unsigned int)arg1;
- (id)build;

@end

