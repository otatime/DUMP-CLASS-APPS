//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBServiceConfigurationTransporting.h"

@class NSString;

@interface FBServiceConfigurationTransport : NSObject <FBServiceConfigurationTransporting>
{
    BOOL _enabledPriming;
    int _requestPriority;
}

@property(readonly, nonatomic) BOOL enabledPriming; // @synthesize enabledPriming=_enabledPriming;
@property(readonly, nonatomic) int requestPriority; // @synthesize requestPriority=_requestPriority;
- (void)setEnabledPriming:(BOOL)arg1;
- (void)setRequestPriority:(int)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithRequestPriority:(int)arg1 enabledPriming:(BOOL)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

