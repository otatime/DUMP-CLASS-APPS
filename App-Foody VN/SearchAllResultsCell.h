//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UILabel;

@interface SearchAllResultsCell : UITableViewCell
{
    UILabel *searchKeywordLabel;
    UIButton *viewAllResultsButton;
}

@property(retain, nonatomic) UIButton *viewAllResultsButton; // @synthesize viewAllResultsButton;
@property(retain, nonatomic) UILabel *searchKeywordLabel; // @synthesize searchKeywordLabel;
- (void).cxx_destruct;
- (void)setSearchKeyword:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
