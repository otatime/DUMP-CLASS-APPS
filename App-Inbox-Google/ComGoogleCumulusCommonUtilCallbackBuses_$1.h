//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonUtilCallbackBus.h"

@class NSString;

@interface ComGoogleCumulusCommonUtilCallbackBuses_$1 : NSObject <ComGoogleCumulusCommonUtilCallbackBus>
{
}

- (id)init;
- (void)acceptWithId:(id)arg1;
- (BOOL)acceptAndWaitWithId:(id)arg1 withInt:(int)arg2;
- (int)size;
- (void)removeReceiverWithComGoogleCommonBaseReceiver:(id)arg1;
- (void)addReceiverWithComGoogleCommonBaseReceiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

