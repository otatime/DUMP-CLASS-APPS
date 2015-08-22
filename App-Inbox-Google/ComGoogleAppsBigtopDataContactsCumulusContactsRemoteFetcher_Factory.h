//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DaggerInternalFactory.h"

@class NSString;

@interface ComGoogleAppsBigtopDataContactsCumulusContactsRemoteFetcher_Factory : NSObject <DaggerInternalFactory>
{
    id <DaggerMembersInjector> membersInjector_;
    id <JavaxInjectProvider> syncServerRequesterProvider_;
    id <JavaxInjectProvider> contactsAdapterProvider_;
    id <JavaxInjectProvider> executorProvider_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createWithDaggerMembersInjector:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4;
- (void)dealloc;
- (id)get;
- (id)initWithDaggerMembersInjector:(id)arg1 withJavaxInjectProvider:(id)arg2 withJavaxInjectProvider:(id)arg3 withJavaxInjectProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
