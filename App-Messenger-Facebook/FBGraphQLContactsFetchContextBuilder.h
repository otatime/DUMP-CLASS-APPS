//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FBGraphQLContactsFetchContextBuilder : NSObject
{
    unsigned int _cumulativeNumberOfContactsFetched;
    NSString *_fetchedUpToCursor;
    NSArray *_favoritesResponse;
}

+ (id)aContactsFetchContextForGraphQL;
- (id)withFavoritesResponse:(id)arg1;
- (id)withFetchedUpToCursor:(id)arg1;
- (id)withCumulativeNumberOfContactsFetched:(unsigned int)arg1;
- (void)dealloc;
- (id)build;

@end

