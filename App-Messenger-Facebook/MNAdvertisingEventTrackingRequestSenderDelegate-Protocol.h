//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNAdvertisingEventTrackingRequestSender, NSError;

@protocol MNAdvertisingEventTrackingRequestSenderDelegate <NSObject>
- (void)advertisingEventTrackingRequestSender:(MNAdvertisingEventTrackingRequestSender *)arg1 didFailWithError:(NSError *)arg2;
- (void)advertisingEventTrackingRequestSenderDidSucceed:(MNAdvertisingEventTrackingRequestSender *)arg1;
@end

