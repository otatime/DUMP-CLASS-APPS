//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBProviderScope.h"

@class FBProviderMapData, NSString;

@interface FBProviderSingletonScope : NSObject <FBProviderScope>
{
    FBProviderMapData *_singletonMap;
}

- (void).cxx_destruct;
- (id)scopeProvider:(id)arg1 forClassOrProtocol:(id)arg2 withIdentifier:(id)arg3;
- (id)scopeProvider:(id)arg1 forClassOrProtocol:(id)arg2;
- (id)scopedClassProtocol;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

