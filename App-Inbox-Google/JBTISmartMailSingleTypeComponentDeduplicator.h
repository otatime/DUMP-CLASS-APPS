//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTSmartMailComponent_TypeEnum;

@interface JBTISmartMailSingleTypeComponentDeduplicator : NSObject
{
    id <ComGoogleAppsBigtopServicesSmartmailComparersSmartMailComparer> comparer_;
    JBTSmartMailComponent_TypeEnum *componentType_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (BOOL)isRedundantWithComGoogleProtobufMessageLite:(id)arg1 withJavaUtilList:(id)arg2 withComGoogleAppsBigtopServicesSmartmailComparersComparerResult_MatchTypeEnum:(id)arg3;
- (void)filterWithJavaUtilList:(id)arg1 withComGoogleAppsBigtopServicesSmartmailComparersComparerResult_MatchTypeEnum:(id)arg2;
- (id)initWithComGoogleAppsBigtopServicesSmartmailComparersSmartMailComparer:(id)arg1 withJBTSmartMailComponent_TypeEnum:(id)arg2;

@end

