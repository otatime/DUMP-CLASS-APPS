//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PPMinTimer : NSObject
{
    CDUnknownBlockType _block;
    double _startTime;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (void)doBlock;
- (void)cancel;
- (void)after:(double)arg1 do:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) double elapsed;
- (void)start;

@end
