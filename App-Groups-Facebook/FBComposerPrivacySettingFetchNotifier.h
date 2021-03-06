//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBComposerPrivacySettingFetcher.h"

@class NSString;

@interface FBComposerPrivacySettingFetchNotifier : NSObject <FBComposerPrivacySettingFetcher>
{
    id <FBComposerPrivacySettingFetchListener> _listener;
    id <FBComposerPrivacySettingFetcher> _privacySettingFetcher;
}

- (void).cxx_destruct;
- (void)fetchPrivacySettingsForPrivacySettingLoadType:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)initWithPrivacySettingFetcher:(id)arg1 listener:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

