//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNSettingsTextFieldCell, UITextField;

@protocol MNSettingsTextFieldCellDelegate <NSObject>
- (void)textFieldShouldReturn:(UITextField *)arg1 settingsCell:(MNSettingsTextFieldCell *)arg2;
- (void)textFieldDidEndEditing:(UITextField *)arg1 settingsCell:(MNSettingsTextFieldCell *)arg2;
@end
