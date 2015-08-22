//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "FBToastPresentationListener.h"

@class NSString;

@interface FBToastPresentationListenerAnnouncer : FBAnnouncerBase <FBToastPresentationListener>
{
}

- (void)presenter:(id)arg1 didRelinquishToast:(id)arg2;
- (void)presenter:(id)arg1 didAcceptToast:(id)arg2;
- (void)toastWillDisappear:(id)arg1;
- (void)toastWillAppear:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

