//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface FBRecentActivitySentinelEvent : NSObject
{
    int _type;
    NSString *_eventName;
    NSString *_module;
    NSDictionary *_extra;
    CDUnknownBlockType _extraBlock;
    int _channel;
}

@property(readonly, nonatomic) int channel; // @synthesize channel=_channel;
@property(readonly, copy, nonatomic) CDUnknownBlockType extraBlock; // @synthesize extraBlock=_extraBlock;
@property(readonly, copy, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(int)arg1 eventName:(id)arg2 module:(id)arg3 extra:(id)arg4 extraBlock:(CDUnknownBlockType)arg5 channel:(int)arg6;

@end
