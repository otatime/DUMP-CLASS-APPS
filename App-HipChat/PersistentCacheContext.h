//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSString;

@interface PersistentCacheContext : NSObject
{
    NSString *_cachePath;
    NSFileManager *_fileManager;
}

+ (id)osxCachesDirectoryPath;
+ (id)iOSCachesDirectoryPath;
+ (id)cachesDirectoryPath;
+ (id)persistentCacheContextWithParent:(id)arg1 name:(id)arg2;
+ (id)persistentCacheContext;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (void).cxx_destruct;
- (BOOL)clearCacheContext;
- (BOOL)prepareCacheContext;
- (id)initWithCachePath:(id)arg1;

@end

