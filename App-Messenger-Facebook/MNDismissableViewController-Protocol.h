//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol MNDismissableViewController <NSObject>
@property(copy, nonatomic) CDUnknownBlockType dismissBlock;
- (BOOL)shouldDismiss;
- (int)dismissButtonPosition;
- (int)dismissButtonItem;

@optional
- (void)didDismiss;
- (void)willDismiss;
@end

