//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSPDFGalleryContentController.h"

@class NSString, PSPDFGalleryConfiguration, PSPDFGalleryViewController;

@interface PSPDFGalleryImageContentController : NSObject <PSPDFGalleryContentController>
{
    BOOL _fullscreen;
    PSPDFGalleryConfiguration *_configuration;
}

+ (Class)contentViewClass;
+ (Class)contentItemClass;
@property(nonatomic) BOOL fullscreen; // @synthesize fullscreen=_fullscreen;
@property(retain, nonatomic) PSPDFGalleryConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (BOOL)contentViewDidReceiveDoubleTap:(id)arg1 item:(id)arg2;
- (void)contentViewDidBeginFullscreenPanGesture:(id)arg1 item:(id)arg2;
- (void)configureContentView:(id)arg1 item:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(nonatomic) __weak PSPDFGalleryViewController *parentViewController;
@property(readonly) Class superclass;

@end

