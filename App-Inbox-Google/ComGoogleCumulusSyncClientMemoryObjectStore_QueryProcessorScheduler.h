//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiPluginQueryProcessor.h"

@class ComGoogleCumulusSyncClientMemoryObjectStore, NSString;

@interface ComGoogleCumulusSyncClientMemoryObjectStore_QueryProcessorScheduler : NSObject <ComGoogleCumulusApiPluginQueryProcessor>
{
    ComGoogleCumulusSyncClientMemoryObjectStore *this$0_;
    id <ComGoogleCumulusApiPluginQueryProcessor> queryProcessor_;
}

- (void)dealloc;
- (id)executeWithComGoogleCumulusQueryQueryProto_Query:(id)arg1 withComGoogleCumulusApiPluginQueryProcessor_Callback:(id)arg2;
- (id)initWithComGoogleCumulusSyncClientMemoryObjectStore:(id)arg1 withComGoogleCumulusApiPluginQueryProcessor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
