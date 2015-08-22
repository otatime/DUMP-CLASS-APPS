//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBComposerExpandablePresentationStrategy.h"
#import "FBExpandingDrawerViewControllerDelegate.h"
#import "MNComposerExtensionPresentationStrategy.h"
#import "MNComposerKeyboardPresentingTrayDelegate.h"

@class FBExpandingDrawerViewController, NSString, UIViewController;

@interface MNComposerExtensionTrayPresentationStrategy : NSObject <MNComposerKeyboardPresentingTrayDelegate, FBExpandingDrawerViewControllerDelegate, MNComposerExtensionPresentationStrategy, FBComposerExpandablePresentationStrategy>
{
    UIViewController *_viewController;
    CDUnknownBlockType _viewControllerCreationBlock;
    id <FBExpanding> _expandingViewController;
    FBExpandingDrawerViewController *_expandingDrawerViewController;
    int _style;
    id <MNComposerExtensionTrayPresentationStrategyDelegate> _delegate;
}

@property(nonatomic) __weak id <MNComposerExtensionTrayPresentationStrategyDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (void).cxx_destruct;
- (BOOL)expandingDrawerViewControllerShouldAllowInteractiveExpanding:(id)arg1;
- (void)expandingDrawerViewController:(id)arg1 didUpdateExpansionProgress:(float)arg2;
- (void)composerKeyboardPresentingTrayWillDismissKeyboard:(id)arg1 withKeyboardDismissalBlock:(CDUnknownBlockType)arg2;
- (void)composerKeyboardPresentingTrayWillPresentKeyboard:(id)arg1 withKeyboardPresentationBlock:(CDUnknownBlockType)arg2;
- (BOOL)requiresTextEditing:(id)arg1;
- (BOOL)isPresented:(id)arg1;
- (void)dismiss:(id)arg1;
- (void)present:(id)arg1;
- (BOOL)shouldAutoRotate;
- (void)collapse;
- (void)expand;
- (BOOL)isViewControllerLoaded;
- (id)viewController;
- (id)initWithViewControllerCreationBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
