//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBProviderMapData;

@interface FBProviderMap : NSObject
{
    FBProviderMapData *_providerData;
    FBProviderMap *_parentProviderMap;
}

+ (id)providerMapWithModules:(id)arg1 parentMap:(id)arg2 scopes:(id)arg3;
+ (id)providerMapWithModules:(id)arg1 parentMap:(id)arg2;
@property(retain, nonatomic) FBProviderMap *parentProviderMap; // @synthesize parentProviderMap=_parentProviderMap;
@property(retain, nonatomic) FBProviderMapData *providerData; // @synthesize providerData=_providerData;
- (void).cxx_destruct;
- (void)registerScope:(id)arg1;
- (BOOL)hasProvider:(id)arg1 withIdentifier:(id)arg2;
- (BOOL)hasProvider:(id)arg1;
- (id)getInstance:(id)arg1 withIdentifier:(id)arg2;
- (id)getInstance:(id)arg1;
- (id)getProvider:(id)arg1 withIdentifier:(id)arg2;
- (id)getProvider:(id)arg1;

@end

