//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTCLateInjectionTarget.h"
#import "JavaxInjectProvider.h"

@class NSString;

@interface JBTCProviders_LateBindProvider : NSObject <JavaxInjectProvider, JBTCLateInjectionTarget>
{
    id value_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)init;
- (id)get;
- (id)setWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
