//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonNetNetController.h"

@class NSString;

@interface JCGCuNetControllerProxy : NSObject <ComGoogleCumulusCommonNetNetController>
{
    id <ComGoogleCumulusCommonNetNetController> netController_;
}

- (void)dealloc;
- (id)init;
- (void)disconnectWithComGoogleCumulusCommonErrorProto_ErrorInfo:(id)arg1;
- (void)disconnect;
- (void)connect;
- (id)getState;
- (void)setNetControllerWithComGoogleCumulusCommonNetNetController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
