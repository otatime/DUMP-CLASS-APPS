//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@interface MNContactListLoadingRequest : FBValueObject <NSCopying>
{
    unsigned int _type;
    unsigned int _fetchLimit;
    double _timeThrottlerPeriod;
}

@property(readonly, nonatomic) double timeThrottlerPeriod; // @synthesize timeThrottlerPeriod=_timeThrottlerPeriod;
@property(readonly, nonatomic) unsigned int fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (id)initWithType:(unsigned int)arg1 fetchLimit:(unsigned int)arg2 timeThrottlerPeriod:(double)arg3;

@end

