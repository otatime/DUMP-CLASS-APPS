//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBGraphSearchSuggestionQuery, FBGraphSearchTypeaheadPromotedEntityInfo, NSArray;

@interface FBGraphSearchSuggestionCacheEntry : NSObject
{
    FBGraphSearchSuggestionQuery *_query;
    unsigned int _state;
    NSArray *_suggestions;
    FBGraphSearchTypeaheadPromotedEntityInfo *_promotedEntityInfo;
}

@property(retain) FBGraphSearchTypeaheadPromotedEntityInfo *promotedEntityInfo; // @synthesize promotedEntityInfo=_promotedEntityInfo;
@property(retain) NSArray *suggestions; // @synthesize suggestions=_suggestions;
@property unsigned int state; // @synthesize state=_state;
@property(readonly, nonatomic) FBGraphSearchSuggestionQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)init;
- (id)initWithQuery:(id)arg1;

@end

