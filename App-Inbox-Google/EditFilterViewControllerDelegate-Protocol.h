//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EditFilterViewController;

@protocol EditFilterViewControllerDelegate <NSObject>

@optional
- (void)editFilterViewController:(EditFilterViewController *)arg1 didFinishWithFilter:(id <JBTClusterFilter>)arg2;
- (void)editFilterViewControllerDidCancel:(EditFilterViewController *)arg1;
@end
