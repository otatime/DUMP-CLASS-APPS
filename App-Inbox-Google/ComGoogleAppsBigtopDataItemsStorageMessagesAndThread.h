//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopServicesGmailBigTopGmailThread, ComGoogleCommonCollectImmutableList;

@interface ComGoogleAppsBigtopDataItemsStorageMessagesAndThread : NSObject
{
    ComGoogleCommonCollectImmutableList *itemMessages_;
    ComGoogleAppsBigtopServicesGmailBigTopGmailThread *thread_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getThread;
- (id)getItemMessages;
- (id)initWithComGoogleCommonCollectImmutableList:(id)arg1 withComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg2;

@end
