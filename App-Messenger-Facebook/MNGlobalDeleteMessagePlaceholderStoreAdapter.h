//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMSPDeleteMessageListener.h"
#import "FBSessionClassProvidable.h"
#import "MNMessageCellElementAppearanceListener.h"
#import "MNMessagesModelMessageDeleteListener.h"

@class FBUserSession, NSMutableSet, NSString;

@interface MNGlobalDeleteMessagePlaceholderStoreAdapter : NSObject <FBSessionClassProvidable, FBMSPDeleteMessageListener, MNMessageCellElementAppearanceListener, MNMessagesModelMessageDeleteListener>
{
    id <MNAuthenticationManager> _authenticationManager;
    FBUserSession *_session;
    id <MNGlobalDeleteMessagePlaceholderStoreReading> _placeholderStoreReader;
    id <MNGlobalDeleteMessagePlaceholderStoreWriting> _placeholderStoreWriter;
    NSMutableSet *_batchedMessageIds;
    id <MNGlobalDeleteMessagePlaceholderAdapterDelegate> _delegate;
}

@property(nonatomic) __weak id <MNGlobalDeleteMessagePlaceholderAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)modelController:(id)arg1 didFailToDeleteMessageWithMessageId:(id)arg2 withError:(id)arg3;
- (void)modelController:(id)arg1 willDeleteMessage:(id)arg2;
- (void)_didBecomeActive:(id)arg1;
- (void)_scheduleDeletingPlaceholerForMessageId:(id)arg1;
- (void)_reloadThreadViewModelUponRemovingPlaceholderIfNeeded:(id)arg1;
- (void)messageCellWillAppear:(id)arg1 withMessageRow:(id)arg2;
- (void)syncProtocolWillApplyMessageDeleteDeltaOnMessage:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithAuthManager:(id)arg1 placeholderStoreReader:(id)arg2 placeholderStoreWriter:(id)arg3 session:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

