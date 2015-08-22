//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTransport.h"

@class NSMutableData, NSString;

@interface TFramedTransport : NSObject <TTransport>
{
    id <TTransport> mTransport;
    NSMutableData *writeBuffer;
    NSMutableData *readBuffer;
    unsigned int readOffset;
    unsigned char dummy_header[4];
}

- (void).cxx_destruct;
- (void)readFrame;
- (int)readAll:(char *)arg1 offset:(int)arg2 length:(int)arg3;
- (void)write:(const char *)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;
- (void)flush;
- (void)dealloc;
- (id)initWithTransport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

