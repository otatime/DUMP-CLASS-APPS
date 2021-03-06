//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFDefaultApplication.h"

#import "PSPDFApplication.h"

@class NSExtensionContext, NSString;

@interface PSPDFExtensionApplication : PSPDFDefaultApplication <PSPDFApplication>
{
    NSExtensionContext *_extensionContext;
}

@property(readonly, nonatomic) NSExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
- (void).cxx_destruct;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)canOpenURL:(id)arg1;
- (id)initWithExtensionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) id <PSPDFNetworkActivityIndicatorManager> networkIndicatorManager;
@property(readonly) Class superclass;

@end

