//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNContactImportDialogDismissalListener.h"
#import "MNImportedContactCardViewListener.h"

@class FBImageDownloader, FBMParticipantNameFormatter, MNContactImportDialogViewController, MNConversationContact, MNNavigationCoordinator, NSString;

@interface MNPeopleViewImportedContactCardPresenter : NSObject <MNImportedContactCardViewListener, MNContactImportDialogDismissalListener, FBClassProvidable>
{
    FBImageDownloader *_imageDownloader;
    id <FBImportedContactRemover> _importedContactRemover;
    FBMParticipantNameFormatter *_nameFormatter;
    MNNavigationCoordinator *_navigationCoordinator;
    MNConversationContact *_conversationContact;
    MNContactImportDialogViewController *_viewController;
}

@property(retain, nonatomic) MNContactImportDialogViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) MNConversationContact *conversationContact; // @synthesize conversationContact=_conversationContact;
- (void).cxx_destruct;
- (void)contactImportDialogDismissed;
- (void)secondaryAuxiliaryButtonTapped;
- (void)primaryAuxiliaryButtonTapped;
- (void)mainActionButtonTapped;
- (void)presentContactCardForConversationContact:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithNavigationCoordinator:(id)arg1 imageDownloader:(id)arg2 importedContactRemover:(id)arg3 nameFormatter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

