//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLNetworkStoryCell, NSURL;

@protocol CBLNetworkStoryCellDelegate <NSObject>
- (void)CBLNetworkStoryCell:(CBLNetworkStoryCell *)arg1 didSelectURL:(NSURL *)arg2;
- (void)presentRelatedObjectsViewForCBLNetworkStoryCell:(CBLNetworkStoryCell *)arg1;
@end

