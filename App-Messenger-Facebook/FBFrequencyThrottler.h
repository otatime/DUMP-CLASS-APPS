//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBFrequencyThrottler : NSObject
{
    int _period;
    CDUnknownBlockType _block;
    int _callCounter;
    int _options;
}

- (void).cxx_destruct;
- (void)reset;
- (void)callWithThrottling;
- (id)initWithPeriod:(unsigned int)arg1 options:(int)arg2 block:(CDUnknownBlockType)arg3;

@end

