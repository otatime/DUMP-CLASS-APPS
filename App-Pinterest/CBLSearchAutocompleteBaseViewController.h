//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionViewController.h"

@class CBLSearchResultProvider;

@interface CBLSearchAutocompleteBaseViewController : CBLTraitCollectionViewController
{
    int _searchType;
    id <CBLSearchAutoCompleteViewControllerDelegate> _delegate;
    CBLSearchResultProvider *_searchResultProvider;
    int _scope;
}

@property(nonatomic) int scope; // @synthesize scope=_scope;
@property(retain, nonatomic) CBLSearchResultProvider *searchResultProvider; // @synthesize searchResultProvider=_searchResultProvider;
@property(nonatomic) __weak id <CBLSearchAutoCompleteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int searchType; // @synthesize searchType=_searchType;
- (void).cxx_destruct;
- (void)clearResults;
- (void)autoCompleteForString:(id)arg1;
- (void)setFakeNavBarColor:(id)arg1;

@end
