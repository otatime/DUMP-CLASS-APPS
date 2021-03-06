//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class NSArray, NSDate, NSString;

@interface IGPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate>
{
    CDUnknownBlockType _actionBlock;
    NSArray *_items;
    int _selectedIndex;
    NSDate *_selectedDate;
    int _mode;
}

- (void).cxx_destruct;
- (void)dateChanged:(id)arg1;
- (void)submitAction;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)initWithSelectedDate:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (id)initWithItems:(id)arg1 selectedIndex:(int)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (id)initWithItems:(id)arg1 selectedIndex:(int)arg2 selectedDate:(id)arg3 doneBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

