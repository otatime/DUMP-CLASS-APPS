//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class FBTableViewUpdateListenerAnnouncer;

@interface FBUpdateAnnouncingTableView : UITableView
{
    FBTableViewUpdateListenerAnnouncer *_listenerAnnouncer;
}

@property(readonly, nonatomic) FBTableViewUpdateListenerAnnouncer *listenerAnnouncer; // @synthesize listenerAnnouncer=_listenerAnnouncer;
- (void).cxx_destruct;
- (void)endUpdates;
- (void)beginUpdates;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;

@end

