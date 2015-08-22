//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBBugReportInitialForkViewController, NSMutableArray, NSString;

@interface FBBugReportInitialForkViewTinesInfo : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_tinesCellInfo;
    BOOL _enableSendFeedback;
    BOOL _enableReportAbuse;
    BOOL _enableShakeToReportSetting;
    FBBugReportInitialForkViewController *_viewController;
}

- (void).cxx_destruct;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)stylizeCell:(id)arg1;
- (int)desiredTableViewHeight;
- (id)initWithShakeToReportSwitch:(id)arg1 viewController:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

