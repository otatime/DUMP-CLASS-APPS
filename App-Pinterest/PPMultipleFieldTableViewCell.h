//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, PPMultipleFieldContentView;

@interface PPMultipleFieldTableViewCell : UITableViewCell <UITableViewDelegate, UITableViewDataSource>
{
    PPMultipleFieldContentView *content;
    Class textFieldClass;
    int _textAlignment;
}

@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) Class textFieldClass; // @synthesize textFieldClass;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
@property(nonatomic) float labelWidth;
@property(readonly, nonatomic) NSMutableArray *labels;
@property(readonly, nonatomic) NSArray *textFields;
@property(nonatomic) unsigned int numberOfFields;
@property(retain, nonatomic) NSArray *widthOfFieldsDistribution;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

