//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivityViewController.h"

#import "PSPDFStyleable.h"

@class NSString, UIActivity, UIPopoverController;

@interface PSPDFActivityViewController : UIActivityViewController <PSPDFStyleable>
{
    BOOL _prefersStatusBarHidden;
    id <PSPDFActivityViewControllerDelegate> _delegate;
    UIActivity *_lastActivity;
}

+ (void)initialize;
@property(nonatomic) __weak UIActivity *lastActivity; // @synthesize lastActivity=_lastActivity;
@property(nonatomic) __weak id <PSPDFActivityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL prefersStatusBarHidden; // @synthesize prefersStatusBarHidden=_prefersStatusBarHidden;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)shouldPerformActivity:(id)arg1;
- (void)setCompletionWithItemsHandler:(CDUnknownBlockType)arg1;
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setExcludedActivityTypes:(id)arg1;

// Remaining properties
@property(nonatomic) int barStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(nonatomic) BOOL isBarTranslucent;
@property(nonatomic) BOOL isInPopover;
@property(nonatomic) __weak UIPopoverController *parentPopoverController;
@property(readonly) Class superclass;

@end
