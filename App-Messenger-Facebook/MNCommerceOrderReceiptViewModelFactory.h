//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNAttachmentStyleViewModelCreator.h"

@class FBUserSession, NSString;

@interface MNCommerceOrderReceiptViewModelFactory : NSObject <FBSessionClassProvidable, MNAttachmentStyleViewModelCreator>
{
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (id)_viewModelFromRetailCancellation:(id)arg1 withStyle:(id)arg2;
- (id)_viewModelFromRetailReceipt:(id)arg1 withStyle:(id)arg2;
- (id)viewModelForDemoWithMessageType:(unsigned int)arg1 itemCount:(int)arg2;
- (id)viewModelForDemo;
- (id)viewModelForAttachment:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

