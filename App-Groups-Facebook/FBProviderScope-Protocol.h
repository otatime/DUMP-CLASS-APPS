//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, Protocol;

@protocol FBProviderScope <NSObject>
- (Protocol *)scopedClassProtocol;
- (id <FBProvider>)scopeProvider:(id <FBProvider>)arg1 forClassOrProtocol:(id)arg2 withIdentifier:(NSString *)arg3;
- (id <FBProvider>)scopeProvider:(id <FBProvider>)arg1 forClassOrProtocol:(id)arg2;
@end

