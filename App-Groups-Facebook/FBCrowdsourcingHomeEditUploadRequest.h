//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class NSMutableDictionary, NSString;

@interface FBCrowdsourcingHomeEditUploadRequest : FBNetworkerRequest
{
    NSString *_placeID;
    NSMutableDictionary *_parameters;
}

@property(retain, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
@property(copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
- (void).cxx_destruct;
- (id)networkRequest;
- (id)initWithModel:(id)arg1 imageData:(id)arg2;

@end
