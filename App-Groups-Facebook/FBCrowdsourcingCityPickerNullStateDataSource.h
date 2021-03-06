//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBItemContentSquareViewConfig, FBNearbyPlace, NSString;

@interface FBCrowdsourcingCityPickerNullStateDataSource : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    unsigned int _style;
    FBItemContentSquareViewConfig *_squareViewConfig;
    BOOL _hideTopSection;
    id <FBCrowdsourcingCityPickerNullStateDataSourceDelegate> _delegate;
    FBNearbyPlace *_closestCity;
    FBNearbyPlace *_profileCity;
    NSString *_profileCountry;
}

@property(nonatomic) BOOL hideTopSection; // @synthesize hideTopSection=_hideTopSection;
@property(copy, nonatomic) NSString *profileCountry; // @synthesize profileCountry=_profileCountry;
@property(retain, nonatomic) FBNearbyPlace *profileCity; // @synthesize profileCity=_profileCity;
@property(retain, nonatomic) FBNearbyPlace *closestCity; // @synthesize closestCity=_closestCity;
@property(nonatomic) __weak id <FBCrowdsourcingCityPickerNullStateDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_tableView:(id)arg1 cellForSuggestionsSectionItem:(int)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)initWithStyle:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

