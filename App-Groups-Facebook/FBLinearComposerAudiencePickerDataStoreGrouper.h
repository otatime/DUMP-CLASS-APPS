//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBComposerPrivacySetting, NSArray, NSDictionary, NSIndexPath, NSMutableDictionary;

@interface FBLinearComposerAudiencePickerDataStoreGrouper : NSObject
{
    NSArray *_availablePrivacySettings;
    FBComposerPrivacySetting *_selectedPrivacySetting;
    NSMutableDictionary *_privacySettingsByIndexPath;
    NSArray *_itemGroups;
    NSIndexPath *_selectedPrivacySettingIndexPath;
}

+ (unsigned int)_privacyGroupForPrivacySetting:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *privacySettingsByIndexPath; // @synthesize privacySettingsByIndexPath=_privacySettingsByIndexPath;
@property(readonly, nonatomic) NSIndexPath *selectedPrivacySettingIndexPath; // @synthesize selectedPrivacySettingIndexPath=_selectedPrivacySettingIndexPath;
@property(readonly, copy, nonatomic) NSArray *itemGroups; // @synthesize itemGroups=_itemGroups;
- (void).cxx_destruct;
- (void)_recordPrivacySetting:(id)arg1 forRow:(unsigned int)arg2 section:(unsigned int)arg3;
- (id)_itemsForMinorPrivacySettings:(id)arg1 shouldShowIcon:(BOOL)arg2 andRecordForSection:(unsigned int)arg3;
- (unsigned int)_stateForPrivacySetting:(id)arg1 andRecordForSection:(unsigned int)arg2 row:(unsigned int)arg3;
- (void)performGrouping;
- (id)initWithAvailablePrivacySettings:(id)arg1 selectedPrivacySetting:(id)arg2;

@end
