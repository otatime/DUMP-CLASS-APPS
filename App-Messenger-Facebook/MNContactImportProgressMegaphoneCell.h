//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CALayer, UIImageView, UILabel, UITapGestureRecognizer;

@interface MNContactImportProgressMegaphoneCell : UITableViewCell
{
    UITapGestureRecognizer *_actionGestureRecognizer;
    id <MNContactImportProgressMegaphoneCellListener> _listener;
    float _progress;
    UILabel *_progressContext;
    CALayer *_progressBarBackground;
    CALayer *_progressBar;
    UIImageView *_progressContextIcon;
}

- (void).cxx_destruct;
- (void)tappedWithGestureRecognizer:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)displayUpdate:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 listener:(id)arg3;

@end

