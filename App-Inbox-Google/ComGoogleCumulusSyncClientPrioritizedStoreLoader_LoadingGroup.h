//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiTypeObjectLoader_LoadCallback.h"

@class ComGoogleCumulusSyncClientPrioritizedStoreLoader, NSString;

@interface ComGoogleCumulusSyncClientPrioritizedStoreLoader_LoadingGroup : NSObject <ComGoogleCumulusApiTypeObjectLoader_LoadCallback>
{
    ComGoogleCumulusSyncClientPrioritizedStoreLoader *this$0_;
    id <JavaUtilMap> loadingObjects_;
    int priority_;
}

- (void)dealloc;
- (void)onErrorWithJavaLangException:(id)arg1;
- (void)onSuccessWithNSString:(id)arg1 withComGoogleCumulusApiTypeObjectReader:(id)arg2;
- (id)initWithComGoogleCumulusSyncClientPrioritizedStoreLoader:(id)arg1 withJavaUtilMap:(id)arg2 withInt:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
