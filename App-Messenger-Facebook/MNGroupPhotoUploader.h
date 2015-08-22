//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMThreadImageSetterDelegate.h"
#import "FBSessionClassProvidable.h"

@class MNGroupPhotoUploaderListenerAnnouncer, NSMutableDictionary, NSString;

@interface MNGroupPhotoUploader : NSObject <FBMThreadImageSetterDelegate, FBSessionClassProvidable>
{
    id <FBProvider> _threadImageSetterProvider;
    MNGroupPhotoUploaderListenerAnnouncer *_announcer;
    NSMutableDictionary *_threadImageSetters;
    NSMutableDictionary *_groupThreadKeyImages;
}

- (void).cxx_destruct;
- (void)threadImageSetter:(id)arg1 couldNotSetImageForGroupThreadKey:(id)arg2 withError:(id)arg3;
- (void)threadImageSetter:(id)arg1 didSetGroupThreadKeyImage:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)uploadingImageForGroupThreadKey:(id)arg1;
- (void)deleteFailedImageForGroupThreadKey:(id)arg1;
- (void)cancelImageUploadForGroupThreadKey:(id)arg1;
- (void)uploadImage:(id)arg1 forGroupThreadKey:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

