//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"

@class FBPreferences, NSString;

@interface FBMLoggedInUserInfoManager : NSObject <FBSessionClassProvidable>
{
    FBPreferences *_legacyNonSessionScopedPreferences;
    FBPreferences *_preferences;
}

@property(retain, nonatomic) FBPreferences *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) FBPreferences *legacyNonSessionScopedPreferences; // @synthesize legacyNonSessionScopedPreferences=_legacyNonSessionScopedPreferences;
- (void).cxx_destruct;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (int)integerForKey:(id)arg1;
- (id)userPhoneInfos;
- (void)setUserPhoneInfos:(id)arg1;
- (id)loggedInUser;
- (BOOL)hasLoggedInUser;
- (void)setLoggedInUser:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithPreferences:(id)arg1 legacyNonSessionScopedPreferences:(id)arg2;
- (id)init;
@property(nonatomic) unsigned int phoneNumberSearchPrivacyOption;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

