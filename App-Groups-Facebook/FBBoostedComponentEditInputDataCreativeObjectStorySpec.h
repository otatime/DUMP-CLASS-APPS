//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBBoostedComponentEditInputDataCreativeObjectStorySpecLinkData, NSArray, NSString;

@interface FBBoostedComponentEditInputDataCreativeObjectStorySpec : FBGraphQLInput
{
    NSString *_rawSpec;
    NSArray *_fieldsRetainedFromRawSpec;
    NSString *_pageId;
    FBBoostedComponentEditInputDataCreativeObjectStorySpecLinkData *_linkData;
}

@property(copy, nonatomic) FBBoostedComponentEditInputDataCreativeObjectStorySpecLinkData *linkData; // @synthesize linkData=_linkData;
@property(copy, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(copy, nonatomic) NSArray *fieldsRetainedFromRawSpec; // @synthesize fieldsRetainedFromRawSpec=_fieldsRetainedFromRawSpec;
@property(copy, nonatomic) NSString *rawSpec; // @synthesize rawSpec=_rawSpec;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

