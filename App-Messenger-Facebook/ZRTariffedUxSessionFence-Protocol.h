//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ZRTariffedUxSessionCookie;

@protocol ZRTariffedUxSessionFence <NSObject>
@property(readonly, retain, nonatomic) ZRTariffedUxSessionCookie *session;
- (BOOL)willImmediatelyCompleteSuccessfully;
- (void)showAndCompleteWith:(void (^)(BOOL, ZRTariffedUxSessionCookie *))arg1;
@end
