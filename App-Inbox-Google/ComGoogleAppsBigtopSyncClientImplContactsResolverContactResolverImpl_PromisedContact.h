//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopSyncClientImplContactsResolverContactResolverImpl_StageEnum, JBTCContactRef, NSString;

@interface ComGoogleAppsBigtopSyncClientImplContactsResolverContactResolverImpl_PromisedContact : NSObject
{
    NSString *normalizedEmail_;
    JBTCContactRef *ref_;
    id <JBTICommonSapiCallback> callback_;
    ComGoogleAppsBigtopSyncClientImplContactsResolverContactResolverImpl_StageEnum *stage_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getRef;
- (void)resolveWithJBTContact:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)isInStageWithComGoogleAppsBigtopSyncClientImplContactsResolverContactResolverImpl_StageEnum:(id)arg1;
- (id)getNormalizedEmail;
- (void)setStageWithComGoogleAppsBigtopSyncClientImplContactsResolverContactResolverImpl_StageEnum:(id)arg1;
- (id)initWithNSString:(id)arg1 withJBTCContactRef:(id)arg2 withJBTICommonSapiCallback:(id)arg3;

@end

