//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JBTINetworkRequestContextUpdater : NSObject
{
    NSString *timeZoneId_;
    int timeZoneOffsetMs_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)setTimeZoneWithNSString:(id)arg1 withInt:(int)arg2;
- (BOOL)isUpdateNeededWithComGoogleCumulusCommonNetProto_RequestContext:(id)arg1;
- (id)updateWithComGoogleCumulusCommonNetProto_Request:(id)arg1;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2;

@end

