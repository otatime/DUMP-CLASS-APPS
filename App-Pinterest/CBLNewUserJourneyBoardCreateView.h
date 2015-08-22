//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CADisplayLink, CAGradientLayer, CBLNewUserJourneyExperienceBoardCreateNuxData, CBLNuxExperienceData, NSArray, NSString, UIButton, UILabel, UITableView, UITextField;

@interface CBLNewUserJourneyBoardCreateView : CBLTraitCollectionView <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    BOOL _didTapPreselectedBoardTitle;
    id <CBLNewUserJourneyBoardCreateViewDelegate> _delegate;
    CADisplayLink *_displayLink;
    UITextField *_boardTextField;
    CBLNuxExperienceData *_experienceData;
    UILabel *_titleLabel;
    UIButton *_createButton;
    UITableView *_tableView;
    NSArray *_boardNames;
    CAGradientLayer *_bottomMaskLayer;
    unsigned int _numberOfCycles;
    float _startTime;
    int _scrollDirection;
    CBLNewUserJourneyExperienceBoardCreateNuxData *_stepTwoData;
    struct CGPoint _deltaBoundsOrigin;
    struct CGPoint _startBoundsOrigin;
}

@property(nonatomic) BOOL didTapPreselectedBoardTitle; // @synthesize didTapPreselectedBoardTitle=_didTapPreselectedBoardTitle;
@property(nonatomic) CBLNewUserJourneyExperienceBoardCreateNuxData *stepTwoData; // @synthesize stepTwoData=_stepTwoData;
@property(nonatomic) struct CGPoint startBoundsOrigin; // @synthesize startBoundsOrigin=_startBoundsOrigin;
@property(nonatomic) struct CGPoint deltaBoundsOrigin; // @synthesize deltaBoundsOrigin=_deltaBoundsOrigin;
@property(nonatomic) int scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(nonatomic) float startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int numberOfCycles; // @synthesize numberOfCycles=_numberOfCycles;
@property(retain, nonatomic) CAGradientLayer *bottomMaskLayer; // @synthesize bottomMaskLayer=_bottomMaskLayer;
@property(retain, nonatomic) NSArray *boardNames; // @synthesize boardNames=_boardNames;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *createButton; // @synthesize createButton=_createButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CBLNuxExperienceData *experienceData; // @synthesize experienceData=_experienceData;
@property(retain, nonatomic) UITextField *boardTextField; // @synthesize boardTextField=_boardTextField;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) __weak id <CBLNewUserJourneyBoardCreateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (id)localLayoutAttributes;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)didTapCreateBoard:(id)arg1;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollTableView:(id)arg1;
- (void)startScrolling;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithExperienceData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

