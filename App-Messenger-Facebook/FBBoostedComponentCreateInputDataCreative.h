//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBBoostedComponentCreateInputDataCreativeObjectStorySpec, NSString;

@interface FBBoostedComponentCreateInputDataCreative : FBGraphQLInput
{
    NSString *_objectStoryId;
    FBBoostedComponentCreateInputDataCreativeObjectStorySpec *_objectStorySpec;
    NSString *_objectId;
    NSString *_body;
    NSString *_imageURLString;
    NSString *_imageHash;
}

@property(copy, nonatomic) NSString *imageHash; // @synthesize imageHash=_imageHash;
@property(copy, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(copy, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(copy, nonatomic) FBBoostedComponentCreateInputDataCreativeObjectStorySpec *objectStorySpec; // @synthesize objectStorySpec=_objectStorySpec;
@property(copy, nonatomic) NSString *objectStoryId; // @synthesize objectStoryId=_objectStoryId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

