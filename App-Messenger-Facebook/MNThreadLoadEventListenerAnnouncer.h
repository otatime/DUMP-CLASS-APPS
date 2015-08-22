//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "MNThreadLoadEventListener.h"

@class NSString;

@interface MNThreadLoadEventListenerAnnouncer : FBAnnouncerBase <MNThreadLoadEventListener>
{
}

- (void)threadDidEndLoadingWithThreadViewModel:(id)arg1;
- (void)threadDidBeginLoadingFromNetwork:(id)arg1;
- (void)threadWillBeginLoadingWithLocalThreadDescriptor:(id)arg1 eventDescriptor:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

