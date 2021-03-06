//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBReceivedDataBufferProtocol.h"

@class NSMutableData, NSString;

@interface FBReceivedChunkedDataMemoryBuffer : NSObject <FBReceivedDataBufferProtocol>
{
    NSMutableData *_data;
    BOOL _opened;
    unsigned int _chunksProcessed;
    id <FBReceivedDataBufferDelegate> delegate;
}

@property(nonatomic) __weak id <FBReceivedDataBufferDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (BOOL)_isBufferConsumed;
- (void)_processNewData:(int)arg1;
@property(readonly, copy) NSString *description;
- (id)data;
- (unsigned int)length;
- (void)appendData:(id)arg1;
- (void)close;
- (void)open;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

