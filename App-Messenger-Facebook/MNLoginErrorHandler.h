//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class NSString, UIAlertView;

@interface MNLoginErrorHandler : NSObject <UIAlertViewDelegate>
{
    NSString *_correctLoginIdentifier;
    NSString *_errorURL;
    unsigned int _incorrectPasswordCount;
    UIAlertView *_alertView;
}

@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) unsigned int incorrectPasswordCount; // @synthesize incorrectPasswordCount=_incorrectPasswordCount;
@property(copy, nonatomic) NSString *errorURL; // @synthesize errorURL=_errorURL;
@property(copy, nonatomic) NSString *correctLoginIdentifier; // @synthesize correctLoginIdentifier=_correctLoginIdentifier;
- (void).cxx_destruct;
- (void)getFallbackLoginErrorContent:(id *)arg1 message:(id *)arg2 error:(id)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)clearIncorrectPasswordCount;
- (void)showAlertForLoginError:(id)arg1;
- (void)willDisappear;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

