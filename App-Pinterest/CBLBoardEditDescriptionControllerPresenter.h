//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewControllerPresenter.h"

#import "CBLTextInputViewControllerDelegate.h"

@class CBLBoard, CBLTextInputViewController, NSString;

@interface CBLBoardEditDescriptionControllerPresenter : CBLBaseViewControllerPresenter <CBLTextInputViewControllerDelegate>
{
    CBLBoard *_board;
    CBLTextInputViewController *_textInputController;
}

@property(retain, nonatomic) CBLTextInputViewController *textInputController; // @synthesize textInputController=_textInputController;
@property(retain, nonatomic) CBLBoard *board; // @synthesize board=_board;
- (void).cxx_destruct;
- (void)CBLTextInputViewControllerDidSaveText:(id)arg1;
- (void)presentHost:(id)arg1 withPath:(id)arg2 withParameters:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

