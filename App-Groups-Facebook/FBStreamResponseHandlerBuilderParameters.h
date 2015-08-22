//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class FBStreamAnalytics, NSString;

@interface FBStreamResponseHandlerBuilderParameters : FBValueObject <NSCopying>
{
    NSString *_graphQLRequestTargetID;
    FBStreamAnalytics *_streamAnalytics;
    unsigned int _loadType;
}

@property(readonly, nonatomic) unsigned int loadType; // @synthesize loadType=_loadType;
@property(readonly, copy, nonatomic) FBStreamAnalytics *streamAnalytics; // @synthesize streamAnalytics=_streamAnalytics;
@property(readonly, copy, nonatomic) NSString *graphQLRequestTargetID; // @synthesize graphQLRequestTargetID=_graphQLRequestTargetID;
- (void).cxx_destruct;
- (id)initWithGraphQLRequestTargetID:(id)arg1 streamAnalytics:(id)arg2 loadType:(unsigned int)arg3;

@end
