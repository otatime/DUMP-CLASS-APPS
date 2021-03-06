//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGSequence, NSString;

@interface IGRealtimeOperation : NSObject
{
    unsigned int _type;
    NSString *_path;
    id _value;
    IGSequence *_timestamp;
}

@property(readonly, nonatomic) IGSequence *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(unsigned int)arg1 path:(id)arg2 value:(id)arg3 timestamp:(id)arg4;
- (id)initWithDictionary:(id)arg1;

@end

