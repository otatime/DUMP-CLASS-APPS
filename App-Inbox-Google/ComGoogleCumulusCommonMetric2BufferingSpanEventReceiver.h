//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonMetric2SpanEventReceiver.h"
#import "ComGoogleCumulusCommonMetric2SpanEventsSink_Flusher.h"

@class NSString;

@interface ComGoogleCumulusCommonMetric2BufferingSpanEventReceiver : NSObject <ComGoogleCumulusCommonMetric2SpanEventReceiver, ComGoogleCumulusCommonMetric2SpanEventsSink_Flusher>
{
    id <ComGoogleCumulusCommonMetric2SpanEventsSink> sink_;
    id <ComGoogleCumulusCommonMetric2SpanEventsSink_Flusher> flusher_;
}

- (void)dealloc;
- (int)size;
- (BOOL)isEmpty;
- (int)flush;
- (void)acceptWithId:(id)arg1;
- (id)initWithComGoogleCumulusCommonMetric2SpanEventReceiver:(id)arg1 withComGoogleCumulusCommonMetric2SpanEventReceiver:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withJCGCuThreadGuard:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
