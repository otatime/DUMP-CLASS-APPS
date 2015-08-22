//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBGradientView, UITableView;

@interface FBComposerMentionsContainerView : UIView
{
    UITableView *_tableView;
    unsigned int _anchorDirection;
    FBGradientView *_shadowView;
    BOOL _alwaysBounceTableView;
}

@property(nonatomic) BOOL alwaysBounceTableView; // @synthesize alwaysBounceTableView=_alwaysBounceTableView;
@property(nonatomic) unsigned int anchorDirection; // @synthesize anchorDirection=_anchorDirection;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(nonatomic) BOOL includesShadow; // @dynamic includesShadow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 anchorDirection:(unsigned int)arg2 includesShadow:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
