//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTMetricEnum;

@interface DeferredSpan : NSObject
{
    JBTMetricEnum *_metric;
    double _startTimeMs;
    double _endTimeMs;
}

@property(retain, nonatomic) JBTMetricEnum *metric; // @synthesize metric=_metric;
@property(nonatomic) double endTimeMs; // @synthesize endTimeMs=_endTimeMs;
@property(nonatomic) double startTimeMs; // @synthesize startTimeMs=_startTimeMs;
- (void).cxx_destruct;

@end
