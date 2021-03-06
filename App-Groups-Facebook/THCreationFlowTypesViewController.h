//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "THCreationFlowPageViewController.h"

@class FBUserSession, NSMutableArray;

@interface THCreationFlowTypesViewController : THCreationFlowPageViewController
{
    FBUserSession *_session;
    NSMutableArray *_typeButtons;
    NSMutableArray *_typeIconViews;
    NSMutableArray *_typeNameLabels;
    NSMutableArray *_groupPurposes;
}

- (void).cxx_destruct;
- (id)_defaultGroupMutationInfoForIndex:(unsigned int)arg1;
- (id)_defaultNameForIndex:(unsigned int)arg1;
- (void)_applyGroupPurposesToTypes;
- (void)_addTypeViewWithIconFrame:(struct CGRect)arg1 index:(unsigned int)arg2;
- (void)_setupTypesWithDefaultValue;
- (void)_logGroupPurposeSelected:(unsigned int)arg1;
- (void)_applyGroupPurposeToGroupMutationInfo:(unsigned int)arg1;
- (void)_typeButtonTapped:(id)arg1;
- (void)_typeButtonTouched:(id)arg1;
- (void)_downloadGroupPurposes;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1;
- (id)init;

@end

