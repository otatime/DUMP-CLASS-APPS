//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class NSString;

@protocol ComGoogleCumulusSyncClientMissingObjectIntentManager <NSObject, JavaObject>
- (BOOL)isLocalLoadOnlyWithNSString:(NSString *)arg1;
- (BOOL)isObjectMissingWithNSString:(NSString *)arg1;
- (id <ComGoogleCumulusCommonClientRetryPolicy>)getRetryPolicyForMissingItemWithNSString:(NSString *)arg1;
- (id <JavaUtilList>)getLoadIntentsWithNSString:(NSString *)arg1;
@end
