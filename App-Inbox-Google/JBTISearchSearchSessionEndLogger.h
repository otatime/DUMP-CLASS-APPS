//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JBTISearchSearchSessionEndLogger : NSObject
{
    id <JCGCuChannel> metricsChannel_;
    NSString *searchSessionId_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (void)recordSessionEnd;
- (id)initWithJCGCuChannel:(id)arg1 withNSString:(id)arg2;

@end

