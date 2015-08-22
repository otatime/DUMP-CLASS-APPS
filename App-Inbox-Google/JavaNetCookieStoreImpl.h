//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaNetCookieStore.h"

@class NSString;

@interface JavaNetCookieStoreImpl : NSObject <JavaNetCookieStore>
{
    id <JavaUtilMap> map_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)init;
- (BOOL)removeAll;
- (BOOL)removeWithJavaNetURI:(id)arg1 withJavaNetHttpCookie:(id)arg2;
- (id)getURIs;
- (id)getCookies;
- (id)getWithJavaNetURI:(id)arg1;
- (id)cookiesUriWithJavaNetURI:(id)arg1;
- (void)addWithJavaNetURI:(id)arg1 withJavaNetHttpCookie:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
