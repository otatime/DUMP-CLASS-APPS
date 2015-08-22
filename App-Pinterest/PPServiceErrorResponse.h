//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPServiceResponse.h"

@class NSArray, NSString, NSURL;

@interface PPServiceErrorResponse : PPServiceResponse
{
    BOOL _shouldRetry;
    NSString *_name;
    NSArray *_details;
    NSURL *_infoLink;
    NSString *_message;
}

@property(nonatomic) BOOL shouldRetry; // @synthesize shouldRetry=_shouldRetry;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSURL *infoLink; // @synthesize infoLink=_infoLink;
@property(retain, nonatomic) NSArray *details; // @synthesize details=_details;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)localizedMessageForError:(id)arg1;
- (BOOL)parse:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithHttpStatus:(int)arg1 body:(id)arg2;

@end

