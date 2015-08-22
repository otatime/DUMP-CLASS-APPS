//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMovingAverage.h"

@class NSString;

@interface FBExponentialGeometricMovingAverage : NSObject <FBMovingAverage>
{
    double _decayConstant;
    unsigned long _cutOver;
    unsigned long _count;
    double _average;
}

@property(readonly, nonatomic) unsigned long count; // @synthesize count=_count;
@property(readonly, nonatomic) double average; // @synthesize average=_average;
- (void)reset;
- (BOOL)hasOneOrMoreMeasurements;
- (void)addMeasurement:(double)arg1;
- (void)addMeasurement:(double)arg1 weight:(double)arg2;
- (id)initWithDecayConstant:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

