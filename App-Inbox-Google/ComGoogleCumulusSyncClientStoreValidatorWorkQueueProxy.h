//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusSyncClientStoreValidator.h"

@class NSString;

@interface ComGoogleCumulusSyncClientStoreValidatorWorkQueueProxy : NSObject <ComGoogleCumulusSyncClientStoreValidator>
{
    id <ComGoogleCumulusSyncClientStoreValidator> delegate_;
    id <JCGCuWorkQueue> requestWorkQueue_;
    id <JCGCuWorkQueue> responseWorkQueue_;
}

- (void)dealloc;
- (id)getName;
- (void)validateWithJCGCuCallback:(id)arg1;
- (id)initWithComGoogleCumulusSyncClientStoreValidator:(id)arg1 withJCGCuWorkQueue:(id)arg2 withJCGCuWorkQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

