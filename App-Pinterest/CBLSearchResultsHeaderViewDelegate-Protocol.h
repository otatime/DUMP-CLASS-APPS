//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLSearchFilter, UICollectionViewCell;

@protocol CBLSearchResultsHeaderViewDelegate <NSObject>
- (void)CBLSearchResultsHeaderDidSelectFilter:(CBLSearchFilter *)arg1 cell:(UICollectionViewCell *)arg2;
- (void)CBLSearchResultsHeaderDidSelectSuggestedQuery:(id <CBLSearchParameters>)arg1;
@end

