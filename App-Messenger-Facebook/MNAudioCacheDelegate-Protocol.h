//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNAudioCache, NSData, NSDictionary, NSString;

@protocol MNAudioCacheDelegate <NSObject>

@optional
- (void)audioCache:(MNAudioCache *)arg1 didNotFindAudioForKey:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)audioCache:(MNAudioCache *)arg1 didFindAudio:(NSData *)arg2 forKey:(NSString *)arg3 userInfo:(NSDictionary *)arg4;
@end

