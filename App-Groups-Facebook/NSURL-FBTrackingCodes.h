//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@class NSArray, NSDictionary;

@interface NSURL (FBTrackingCodes)
+ (id)URLWithURL:(id)arg1 trackingCodes:(id)arg2 trackingNodes:(id)arg3 analytics:(id)arg4;
+ (id)URLWithURL:(id)arg1 trackingCodes:(id)arg2;
+ (id)URLWithString:(id)arg1 trackingCodes:(id)arg2;
+ (id)URLWithString:(id)arg1 trackingCodes:(id)arg2 analytics:(id)arg3;
+ (id)URLWithURL:(id)arg1 trackingCodes:(id)arg2 analytics:(id)arg3;
- (void)fb_setAnalytics:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *fb_analytics;
- (void)fb_setTrackingNodes:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *fb_trackingNodes;
- (void)fb_setTrackingCodes:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *fb_trackingCodes;
- (id)initWithURL:(id)arg1 trackingCodes:(id)arg2 trackingNodes:(id)arg3 analytics:(id)arg4;
- (id)initWithURL:(id)arg1 trackingCodes:(id)arg2 analytics:(id)arg3;
- (id)initWithURL:(id)arg1 trackingCodes:(id)arg2;
- (id)initWithString:(id)arg1 trackingCodes:(id)arg2 analytics:(id)arg3;
- (id)initWithString:(id)arg1 trackingCodes:(id)arg2;
@end

