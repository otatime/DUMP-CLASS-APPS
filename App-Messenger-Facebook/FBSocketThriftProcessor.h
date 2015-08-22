//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSInputStream, NSOutputStream, NSString;

@interface FBSocketThriftProcessor : NSObject <NSStreamDelegate>
{
    int _socket;
    id <TProcessor> _processor;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
}

- (void).cxx_destruct;
- (void)_closeStreams;
- (void)_createStreams;
- (void)process;
@property(readonly, nonatomic) NSOutputStream *outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream;
- (id)initWithSocket:(int)arg1 processor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

