//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFOverridable.h"

@class PSPDFInkAnnotation, PSPDFSignatureSelectorViewController;

@protocol PSPDFSignatureSelectorViewControllerDelegate <PSPDFOverridable>
- (void)signatureSelectorViewControllerWillCreateNewSignature:(PSPDFSignatureSelectorViewController *)arg1;
- (void)signatureSelectorViewController:(PSPDFSignatureSelectorViewController *)arg1 didSelectSignature:(PSPDFInkAnnotation *)arg2;
@end

