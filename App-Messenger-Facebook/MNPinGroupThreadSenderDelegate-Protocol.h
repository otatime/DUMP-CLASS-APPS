//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMThread, MNPinGroupThreadSender, NSError;

@protocol MNPinGroupThreadSenderDelegate <NSObject>
- (void)pinGroupThreadSender:(MNPinGroupThreadSender *)arg1 didFailWithError:(NSError *)arg2;
- (void)pinGroupThreadSender:(MNPinGroupThreadSender *)arg1 didFinishPinningThread:(FBMThread *)arg2;

@optional
- (void)pinGroupThreadSender:(MNPinGroupThreadSender *)arg1 didUpdateProgress:(double)arg2;
@end

