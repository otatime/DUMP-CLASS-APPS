//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ComGoogleAppsXplatHttpOAuthTokenManager : NSObject
{
    id <ComGoogleAppsXplatHttpOAuthTokenManager_OAuthTokenProducer> tokenProducer_;
    id <ComGoogleCommonUtilConcurrentListenableFuture> oAuthTokenFuture_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_oAuthTokenFuture_;
- (void)dealloc;
- (void)clearOAuthTokenCache;
- (id)getCachedTokenOrProduceNewToken;
- (id)getResponseInterceptor;
- (id)getRequestInterceptor;
- (id)initWithComGoogleAppsXplatHttpOAuthTokenManager_OAuthTokenProducer:(id)arg1;

@end
