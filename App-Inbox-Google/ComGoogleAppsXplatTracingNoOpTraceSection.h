//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsXplatTracingAsyncTraceSection.h"
#import "ComGoogleAppsXplatTracingBlockingTraceSection.h"

@class NSString;

@interface ComGoogleAppsXplatTracingNoOpTraceSection : NSObject <ComGoogleAppsXplatTracingBlockingTraceSection, ComGoogleAppsXplatTracingAsyncTraceSection>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)getInstance;
- (id)endWhenWithComGoogleCommonUtilConcurrentListenableFuture:(id)arg1;
- (void)end;
- (id)annotateWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)annotateWithNSString:(id)arg1 withDouble:(double)arg2;
- (id)annotateWithNSString:(id)arg1 withBoolean:(BOOL)arg2;
- (id)beginAsyncWithNSString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
