//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CBLRealTimeData : NSObject
{
    int _opcode;
    NSArray *_opData;
}

+ (id)realTimeDataWithArray:(id)arg1;
@property(retain, nonatomic) NSArray *opData; // @synthesize opData=_opData;
@property(nonatomic) int opcode; // @synthesize opcode=_opcode;
- (void).cxx_destruct;

@end

