//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleAppsXplatTracingInstantScopeEnum, ComGoogleAppsXplatTracingTracingProto_LevelEnum, IOSClass, NSString;

@protocol ComGoogleAppsXplatTracingTracerBackend <NSObject, JavaObject>
- (void)markCurrentThreadAsAsync;
- (id <ComGoogleAppsXplatTracingTraceLink>)beginLinkWithId:(id)arg1 withComGoogleAppsXplatTracingTracingProto_LevelEnum:(ComGoogleAppsXplatTracingTracingProto_LevelEnum *)arg2;
- (void)instantWithNSString:(NSString *)arg1 withComGoogleAppsXplatTracingInstantScopeEnum:(ComGoogleAppsXplatTracingInstantScopeEnum *)arg2 withId:(id)arg3 withComGoogleAppsXplatTracingTracingProto_LevelEnum:(ComGoogleAppsXplatTracingTracingProto_LevelEnum *)arg4;
- (id <ComGoogleAppsXplatTracingAsyncTraceSection>)beginAsyncWithNSString:(NSString *)arg1 withId:(id)arg2 withComGoogleAppsXplatTracingTracingProto_LevelEnum:(ComGoogleAppsXplatTracingTracingProto_LevelEnum *)arg3 withComGoogleAppsXplatTracingTraceSection:(id <ComGoogleAppsXplatTracingTraceSection>)arg4;
- (id <ComGoogleAppsXplatTracingBlockingTraceSection>)beginWithNSString:(NSString *)arg1 withId:(id)arg2 withComGoogleAppsXplatTracingTracingProto_LevelEnum:(ComGoogleAppsXplatTracingTracingProto_LevelEnum *)arg3 withJavaUtilList:(id <JavaUtilList>)arg4;
- (BOOL)isTraceableWithId:(id)arg1 withComGoogleAppsXplatTracingTracingProto_LevelEnum:(ComGoogleAppsXplatTracingTracingProto_LevelEnum *)arg2;
- (id)getTracerStateWithIOSClass:(IOSClass *)arg1;
@end
