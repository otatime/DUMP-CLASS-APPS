//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class NSDictionary;

@interface FBPhotoTagSuggestionFetchRequest : FBNetworkerRequest
{
    NSDictionary *_faceCropJPEGs;
}

@property(retain, nonatomic) NSDictionary *faceCropJPEGs; // @synthesize faceCropJPEGs=_faceCropJPEGs;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)networkRequest;
- (id)initWithFaceCropJPEGs:(id)arg1 callbackPerformer:(id)arg2;

@end

