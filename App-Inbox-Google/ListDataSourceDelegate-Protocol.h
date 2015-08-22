//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath, UITableView, UITableViewCell, UIViewController;

@protocol ListDataSourceDelegate <NSObject>
@property(readonly, nonatomic) UIViewController *viewControllerForSpan;
- (void)listDataSource:(id <ListDataSource>)arg1 didReceiveError:(id <JBTError>)arg2;
- (void)listDataSource:(id <ListDataSource>)arg1 didLoadContactsForConversations:(NSArray *)arg2;
- (void)listDataSource:(id <ListDataSource>)arg1 didUpdateElements:(NSArray *)arg2 expectingMoreChanges:(BOOL)arg3 span:(id <JBTSpan>)arg4;
- (UITableViewCell *)tableView:(UITableView *)arg1 cellForRowAtIndexPath:(NSIndexPath *)arg2;
@end
