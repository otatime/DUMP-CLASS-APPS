//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLPinnerCell;

@protocol CBLPinnerCellDelegate <NSObject>
- (void)pinnerCellUnblockPressed:(CBLPinnerCell *)arg1;
- (void)pinnerCellBlockPressed:(CBLPinnerCell *)arg1;
- (void)pinnerCellUnfollowPressed:(CBLPinnerCell *)arg1;
- (void)pinnerCellFollowPressed:(CBLPinnerCell *)arg1;
@end

