//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGSuggestedUsernamesViewController, NSString;

@protocol IGSuggestedUsernamesViewControllerDelegate <NSObject>
- (void)suggestedUsernamesViewController:(IGSuggestedUsernamesViewController *)arg1 didPickUsername:(NSString *)arg2 index:(unsigned int)arg3;
- (void)suggestedUsernamesViewControllerDidCancel:(IGSuggestedUsernamesViewController *)arg1;
@end

