//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLEditBoardViewController.h"

#import "CBLBoardCollaboratorsViewControllerDelegate.h"

@class NSArray, NSString, UISwitch;

@interface CBLCreateBoardViewController : CBLEditBoardViewController <CBLBoardCollaboratorsViewControllerDelegate>
{
    BOOL _defaultSecretSelected;
    BOOL _defaultMapView;
    BOOL _disallowSecret;
    UISwitch *_secretToggle;
    NSArray *_boardCreateInviteeIds;
    NSArray *_boardCreateInviteeEmails;
    NSArray *_boardCreateInviteeFacebookIds;
}

@property(retain, nonatomic) NSArray *boardCreateInviteeFacebookIds; // @synthesize boardCreateInviteeFacebookIds=_boardCreateInviteeFacebookIds;
@property(retain, nonatomic) NSArray *boardCreateInviteeEmails; // @synthesize boardCreateInviteeEmails=_boardCreateInviteeEmails;
@property(retain, nonatomic) NSArray *boardCreateInviteeIds; // @synthesize boardCreateInviteeIds=_boardCreateInviteeIds;
@property(retain, nonatomic) UISwitch *secretToggle; // @synthesize secretToggle=_secretToggle;
@property(nonatomic) BOOL disallowSecret; // @synthesize disallowSecret=_disallowSecret;
@property(nonatomic) BOOL defaultMapView; // @synthesize defaultMapView=_defaultMapView;
@property(nonatomic) BOOL defaultSecretSelected; // @synthesize defaultSecretSelected=_defaultSecretSelected;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)sendInvites:(id)arg1;
- (void)create:(id)arg1;
- (struct CGRect)smallTextViewFrame;
- (struct CGRect)largeTextViewFrame;
- (void)CBLBoardCollaboratorsViewControllerSendFacebookInvites:(id)arg1;
- (void)CBLBoardCollaboratorsViewControllerDidUpdateInvites:(id)arg1 emails:(id)arg2 facebookIds:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
@property(nonatomic) __weak id <CBLCreateBoardViewControllerDelegate> delegate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) UISwitch *mapViewSwitch; // @dynamic mapViewSwitch;
@property(readonly) Class superclass;

@end

