//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBConsoleTargetInfo, NSMutableArray, NSString;

@protocol FBConsoleControlThriftService <NSObject>
- (void)connectBackTo:(NSString *)arg1;
- (void)setTagLevel:(NSString *)arg1 level:(int)arg2;
- (NSMutableArray *)getTagStatuses:(NSMutableArray *)arg1;
- (NSMutableArray *)getTags;
- (FBConsoleTargetInfo *)getTargetInfo;
@end

