//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsXplatLoggingEventsLogHandler.h"

@class ComGoogleCumulusCommonMetric2SpanRecordConsole, NSString;

@interface JBTClientAPISettings_$3 : NSObject <ComGoogleAppsXplatLoggingEventsLogHandler>
{
    ComGoogleCumulusCommonMetric2SpanRecordConsole *val$console_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleCumulusCommonMetric2SpanRecordConsole:(id)arg1;
- (void)handleWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
