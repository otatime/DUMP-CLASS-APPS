//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopDataItemsItemsSyncProtos_MessageFetch, ComGoogleCommonUtilConcurrentSettableFuture;

@interface ComGoogleAppsBigtopDataItemsFetchdetailsMessageDetailsFetchQueue_QueuedFetch : NSObject
{
    ComGoogleAppsBigtopDataItemsItemsSyncProtos_MessageFetch *messageFetch_;
    ComGoogleCommonUtilConcurrentSettableFuture *future_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getMessageFetch;
- (id)getFuture;
- (id)initWithComGoogleAppsBigtopDataItemsItemsSyncProtos_MessageFetch:(id)arg1;

@end
