//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLDownloadRequest.h"

@interface FBTaggableGroupMentionsDownloadRequest : FBGraphQLDownloadRequest
{
    unsigned int _filterType;
}

@property(nonatomic) unsigned int filterType; // @synthesize filterType=_filterType;
- (id)newQuery;
- (id)initWithCallbackPerformer:(id)arg1 filterTypes:(id)arg2 queryString:(id)arg3 fetchLimit:(unsigned int)arg4 photoSize:(unsigned int)arg5 targetID:(id)arg6;

@end
