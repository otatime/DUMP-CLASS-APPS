//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate;

@interface FBDataUsageStats : FBValueObject <NSCopying, NSCoding>
{
    NSDate *_modifiedDate;
    unsigned long long _dataSinceLastMonth;
    unsigned long long _dataSinceYesterday;
    unsigned long long _dataSinceBeginning;
    unsigned long long _dataPrefetchedSinceLastMonth;
    unsigned long long _dataPrefetchedSinceYesterday;
    unsigned long long _dataPrefetchedSinceBeginning;
    unsigned long long _cellDataSinceLastMonth;
    unsigned long long _cellDataSinceYesterday;
    unsigned long long _cellDataSinceBeginning;
    unsigned long long _dataWatchedSinceLastMonth;
    unsigned long long _dataWatchedSinceYesterday;
    unsigned long long _dataWatchedSinceBeginning;
    unsigned long long _dataPrefetchedWatchedSinceLastMonth;
    unsigned long long _dataPrefetchedWatchedSinceYesterday;
    unsigned long long _dataPrefetchedWatchedSinceBeginning;
    double _timeSinceLastMonth;
    double _timeSinceYesterday;
    double _timeSinceBeginning;
}

@property(readonly, copy, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(readonly, nonatomic) double timeSinceBeginning; // @synthesize timeSinceBeginning=_timeSinceBeginning;
@property(readonly, nonatomic) double timeSinceYesterday; // @synthesize timeSinceYesterday=_timeSinceYesterday;
@property(readonly, nonatomic) double timeSinceLastMonth; // @synthesize timeSinceLastMonth=_timeSinceLastMonth;
@property(readonly, nonatomic) unsigned long long dataPrefetchedWatchedSinceBeginning; // @synthesize dataPrefetchedWatchedSinceBeginning=_dataPrefetchedWatchedSinceBeginning;
@property(readonly, nonatomic) unsigned long long dataPrefetchedWatchedSinceYesterday; // @synthesize dataPrefetchedWatchedSinceYesterday=_dataPrefetchedWatchedSinceYesterday;
@property(readonly, nonatomic) unsigned long long dataPrefetchedWatchedSinceLastMonth; // @synthesize dataPrefetchedWatchedSinceLastMonth=_dataPrefetchedWatchedSinceLastMonth;
@property(readonly, nonatomic) unsigned long long dataWatchedSinceBeginning; // @synthesize dataWatchedSinceBeginning=_dataWatchedSinceBeginning;
@property(readonly, nonatomic) unsigned long long dataWatchedSinceYesterday; // @synthesize dataWatchedSinceYesterday=_dataWatchedSinceYesterday;
@property(readonly, nonatomic) unsigned long long dataWatchedSinceLastMonth; // @synthesize dataWatchedSinceLastMonth=_dataWatchedSinceLastMonth;
@property(readonly, nonatomic) unsigned long long cellDataSinceBeginning; // @synthesize cellDataSinceBeginning=_cellDataSinceBeginning;
@property(readonly, nonatomic) unsigned long long cellDataSinceYesterday; // @synthesize cellDataSinceYesterday=_cellDataSinceYesterday;
@property(readonly, nonatomic) unsigned long long cellDataSinceLastMonth; // @synthesize cellDataSinceLastMonth=_cellDataSinceLastMonth;
@property(readonly, nonatomic) unsigned long long dataPrefetchedSinceBeginning; // @synthesize dataPrefetchedSinceBeginning=_dataPrefetchedSinceBeginning;
@property(readonly, nonatomic) unsigned long long dataPrefetchedSinceYesterday; // @synthesize dataPrefetchedSinceYesterday=_dataPrefetchedSinceYesterday;
@property(readonly, nonatomic) unsigned long long dataPrefetchedSinceLastMonth; // @synthesize dataPrefetchedSinceLastMonth=_dataPrefetchedSinceLastMonth;
@property(readonly, nonatomic) unsigned long long dataSinceBeginning; // @synthesize dataSinceBeginning=_dataSinceBeginning;
@property(readonly, nonatomic) unsigned long long dataSinceYesterday; // @synthesize dataSinceYesterday=_dataSinceYesterday;
@property(readonly, nonatomic) unsigned long long dataSinceLastMonth; // @synthesize dataSinceLastMonth=_dataSinceLastMonth;
- (void).cxx_destruct;
- (id)initWithDataSinceLastMonth:(unsigned long long)arg1 dataSinceYesterday:(unsigned long long)arg2 dataSinceBeginning:(unsigned long long)arg3 dataPrefetchedSinceLastMonth:(unsigned long long)arg4 dataPrefetchedSinceYesterday:(unsigned long long)arg5 dataPrefetchedSinceBeginning:(unsigned long long)arg6 cellDataSinceLastMonth:(unsigned long long)arg7 cellDataSinceYesterday:(unsigned long long)arg8 cellDataSinceBeginning:(unsigned long long)arg9 dataWatchedSinceLastMonth:(unsigned long long)arg10 dataWatchedSinceYesterday:(unsigned long long)arg11 dataWatchedSinceBeginning:(unsigned long long)arg12 dataPrefetchedWatchedSinceLastMonth:(unsigned long long)arg13 dataPrefetchedWatchedSinceYesterday:(unsigned long long)arg14 dataPrefetchedWatchedSinceBeginning:(unsigned long long)arg15 timeSinceLastMonth:(double)arg16 timeSinceYesterday:(double)arg17 timeSinceBeginning:(double)arg18 modifiedDate:(id)arg19;

@end

