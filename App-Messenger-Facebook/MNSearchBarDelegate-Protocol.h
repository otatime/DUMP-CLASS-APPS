//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNSearchBar, NSString;

@protocol MNSearchBarDelegate <NSObject>
- (void)searchBar:(MNSearchBar *)arg1 textDidChange:(NSString *)arg2;
- (void)searchBarCancelButtonClicked:(MNSearchBar *)arg1;
@end

