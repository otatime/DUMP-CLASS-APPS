//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface NRMAMetric : NSObject
{
    BOOL _produceUnscopedMetrics;
    NSString *_name;
    NSNumber *_value;
    NSString *_scope;
}

@property BOOL produceUnscopedMetrics; // @synthesize produceUnscopedMetrics=_produceUnscopedMetrics;
@property(retain) NSString *scope; // @synthesize scope=_scope;
@property(retain) NSNumber *value; // @synthesize value=_value;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 value:(id)arg2 scope:(id)arg3;
- (id)initWithName:(id)arg1 value:(id)arg2 scope:(id)arg3 produceUnscoped:(BOOL)arg4;

@end

