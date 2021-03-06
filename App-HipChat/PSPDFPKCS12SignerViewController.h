//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFBaseTableViewController.h"

@class PSPDFPKCS12Signer;

@interface PSPDFPKCS12SignerViewController : PSPDFBaseTableViewController
{
    PSPDFPKCS12Signer *_signer;
    CDUnknownBlockType _doneHandler;
}

@property(copy, nonatomic) CDUnknownBlockType doneHandler; // @synthesize doneHandler=_doneHandler;
@property(readonly, nonatomic) PSPDFPKCS12Signer *signer; // @synthesize signer=_signer;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)signButtonPressed;
- (id)passwordField;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithSigner:(id)arg1;

@end

