//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BaseViewController, Collection, NSString;

@protocol NewCollectionDelegate <NSObject>
- (void)viewController:(BaseViewController *)arg1 didFinishCreateNewCollectionWithId:(NSString *)arg2;
- (void)viewControllerDidCancelCreateNewCollection:(BaseViewController *)arg1;

@optional
- (void)viewController:(BaseViewController *)arg1 didFinishEditCollection:(Collection *)arg2;
@end

