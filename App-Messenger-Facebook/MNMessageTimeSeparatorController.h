//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNMessageCellElementController.h"

@class MNMessageTimeSeparatorView, NSString;

@interface MNMessageTimeSeparatorController : NSObject <MNMessageCellElementController>
{
    MNMessageTimeSeparatorView *_timeSeparatorView;
}

- (void).cxx_destruct;
- (void)didDisappearInContainerView:(id)arg1;
- (void)willUpdateWithViewModel:(id)arg1 inContainerView:(id)arg2;
- (void)willAppearWithViewModel:(id)arg1 inContainerView:(id)arg2;
- (void)awakeWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

