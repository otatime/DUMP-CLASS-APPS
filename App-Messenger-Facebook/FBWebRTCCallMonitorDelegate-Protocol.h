//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol FBWebRTCCallMonitorDelegate
- (void)callDidReceiveHeartbeat:(long long)arg1 currentCallSummary:(NSString *)arg2;
- (void)callDidEnd:(long long)arg1 dataSent:(long long)arg2 dataReceived:(long long)arg3;
- (void)callDidStart:(long long)arg1;
@end

