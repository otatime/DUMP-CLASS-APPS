//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "MNPeopleMegaphoneViewDelegate.h"

@class MNPeopleMegaphoneView, NSString;

@interface MNContactImportPermissionMegaphoneCell : UITableViewCell <MNPeopleMegaphoneViewDelegate>
{
    id <MNContactImportPermissionMegaphoneCellListener> _listener;
    MNPeopleMegaphoneView *_peopleMegaphoneView;
}

- (void).cxx_destruct;
- (void)peopleMegaphoneViewDidPressOK:(id)arg1;
- (void)peopleMegaphoneDidTapContext:(id)arg1;
- (void)peopleMegaphoneViewDidPressNotNow:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 listener:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

