//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "JBTEventListener.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString;

@interface RecipientAutocompleteViewController : UITableViewController <JBTEventListener, UITableViewDataSource, UITableViewDelegate>
{
    id <JBTContactReferenceAutocompleteList> autoComplete_;
    NSString *previousPrefix_;
    BOOL shouldScrollToTopOnEvent_;
    BOOL started_;
    id <RecipientAutocompleteViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <RecipientAutocompleteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectItem:(unsigned int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)notifyDelegateOfUpdate;
- (void)onEventWithJBTEvent:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 maximumNumberOfRows:(int)arg2;
- (void)shutdown;
- (void)updateWithPrefix:(id)arg1;
- (void)setAutocomplete:(id)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) int numberOfResults;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
