//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

#import "AFAlertView.h"

@class AFAlertViewDelegateHelper, NSString, UIAlertView;

@interface AFAlertView : NSProxy <AFAlertView>
{
    UIAlertView *_backingAlert;
    UIAlertView *_weakBackingAlert;
    AFAlertViewDelegateHelper *_delegateHelper;
}

+ (void)registerDefaultAlertClass:(Class)arg1;
- (void).cxx_destruct;
- (void)show;
@property(copy, nonatomic) CDUnknownBlockType alertDismissedBlock;
@property(copy, nonatomic) CDUnknownBlockType buttonClickedBlock;
@property(readonly, nonatomic) int cancelButtonIndex;
- (id)initWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

