//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CBLShareUserManager : NSObject
{
}

+ (id)sharedManager;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveUserImageToPhotoAlbum:(id)arg1;
- (void)shareUserViaFBMessenger:(id)arg1;
- (void)shareUserViaLine:(id)arg1;
- (void)shareUserViaWhatsApp:(id)arg1;
- (void)shareUserViaTwitter:(id)arg1;
- (void)shareUserViaSMS:(id)arg1;
- (void)copyUserSourceLink:(id)arg1;
- (void)shareUserViaEmail:(id)arg1;
- (void)shareUserViaFacebook:(id)arg1;

@end

