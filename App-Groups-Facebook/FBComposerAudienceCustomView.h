//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBComposerAudienceTokenizerView, NSString, UITableView;

@interface FBComposerAudienceCustomView : UIView
{
    BOOL _showPrimaryTokenizer;
    BOOL _showSecondaryTokenizer;
    UITableView *_tableView;
    FBComposerAudienceTokenizerView *_primaryTokenizerView;
    FBComposerAudienceTokenizerView *_secondaryTokenizerView;
    NSString *_secondaryTokenizerTitle;
}

@property(copy, nonatomic) NSString *secondaryTokenizerTitle; // @synthesize secondaryTokenizerTitle=_secondaryTokenizerTitle;
@property(readonly, nonatomic) FBComposerAudienceTokenizerView *secondaryTokenizerView; // @synthesize secondaryTokenizerView=_secondaryTokenizerView;
@property(readonly, nonatomic) FBComposerAudienceTokenizerView *primaryTokenizerView; // @synthesize primaryTokenizerView=_primaryTokenizerView;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)removePrimaryTokenizer;
- (id)initWithFrame:(struct CGRect)arg1 showPrimaryTokenizer:(BOOL)arg2 showSecondaryTokenizer:(BOOL)arg3;

@end

