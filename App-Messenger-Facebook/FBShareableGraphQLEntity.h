//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBShareable.h"

@class NSString, NSURL;

@interface FBShareableGraphQLEntity : NSObject <FBShareable>
{
    NSString *_shareableID;
    NSString *_shareableText;
    NSString *_shareableTitle;
    NSString *_shareableType;
    NSURL *_shareableURL;
    NSURL *_shareableImageURL;
}

@property(readonly, copy) NSString *debugDescription;
- (id)shareableImage;
- (id)shareableImageURL;
- (id)shareableDescription;
- (id)shareableSubtitle;
- (id)shareableTitle;
- (id)shareableURL;
- (id)shareableType;
- (id)shareableText;
- (id)shareableID;
- (void)dealloc;
- (id)initWithGraphQLTypeName:(id)arg1 graphQLID:(id)arg2 text:(id)arg3;
- (id)initWithEntity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

