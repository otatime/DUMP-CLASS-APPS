//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FVStatusBarHelper : NSObject
{
    int _originalStatusBarStyle;
}

@property(nonatomic) int originalStatusBarStyle; // @synthesize originalStatusBarStyle=_originalStatusBarStyle;
- (void)restoreStatusBar;
- (void)setLightStatusBar;
- (void)setDarkStatusBar;
- (id)init;

@end

