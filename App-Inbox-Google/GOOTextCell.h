//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NITextCell.h"

#import "GOOGroupedCell.h"

@class NIAttributedLabel, NSString;

@interface GOOTextCell : NITextCell <GOOGroupedCell>
{
    struct UIEdgeInsets _textInsets;
    NIAttributedLabel *_attributedTextLabel;
    NIAttributedLabel *_attributedDetailTextLabel;
    BOOL _debugColorizeSubviews;
}

+ (float)heightForObject:(id)arg1 atIndexPath:(id)arg2 tableView:(id)arg3;
+ (float)heightOfString:(id)arg1 withFont:(id)arg2 numberOfLines:(int)arg3 lineBreakMode:(int)arg4 minimumFontSize:(float)arg5 actualFontSize:(float *)arg6 constrainedToWidth:(float)arg7;
+ (float)textHeightForObject:(id)arg1 atIndexPath:(id)arg2 tableView:(id)arg3;
+ (id)detailTextFromObject:(id)arg1;
+ (BOOL)detailTextLabelIsAttributed;
+ (float)minimumDetailTextFontSize;
+ (int)detailTextLineBreakMode;
+ (int)numberOfDetailTextLines;
+ (id)detailTextFont;
+ (id)textFromObject:(id)arg1;
+ (BOOL)textLabelIsAttributed;
+ (float)minimumTextFontSize;
+ (int)textLineBreakMode;
+ (int)numberOfTextLines;
+ (id)textFont;
+ (id)imageFromObject:(id)arg1;
+ (struct CGRect)contentBoundsWithTableView:(id)arg1 indexPath:(id)arg2;
+ (struct UIEdgeInsets)textInsetsFromObject:(id)arg1;
+ (struct UIEdgeInsets)cellPadding;
@property(nonatomic) BOOL debugColorizeSubviews; // @synthesize debugColorizeSubviews=_debugColorizeSubviews;
- (void).cxx_destruct;
- (id)detailTextLabel;
- (id)textLabel;
- (BOOL)shouldUpdateCellWithObject:(id)arg1;
- (struct CGRect)boundsForText;
- (id)stringForDetailTextLabel;
- (id)stringForTextLabel;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
