//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNMessageCellElementController.h"

@class MNForwardMessageHandler, MNMessageActionButtonView, MNMessageActionButtonViewModel, NSString;

@interface MNMessageActionButtonController : NSObject <FBClassProvidable, MNMessageCellElementController>
{
    MNMessageActionButtonView *_actionButtonView;
    MNMessageActionButtonViewModel *_actionButtonViewModel;
    MNForwardMessageHandler *_forwardMessageHandler;
}

- (void).cxx_destruct;
- (void)_updateWithViewModel:(id)arg1;
- (void)didTapInThread:(id)arg1;
- (void)didDisappearInContainerView:(id)arg1;
- (void)willUpdateWithViewModel:(id)arg1 inContainerView:(id)arg2;
- (void)willAppearWithViewModel:(id)arg1 inContainerView:(id)arg2;
- (void)awakeWithView:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

