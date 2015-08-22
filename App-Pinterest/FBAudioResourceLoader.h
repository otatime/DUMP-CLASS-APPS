//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSURL;

@interface FBAudioResourceLoader : NSObject
{
    NSFileManager *_fileManager;
    NSURL *_fileURL;
    unsigned long _systemSoundID;
}

+ (id)sharedLoader;
+ (id)data;
+ (unsigned int)version;
+ (id)name;
- (id)_fileURL:(id *)arg1;
- (id)_fileResourceURL;
- (void)playSound;
- (BOOL)loadSound:(id *)arg1;
- (void)dealloc;
- (id)init;

@end

