//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JavaNetHttpCookie, JavaNetURI;

@protocol JavaNetCookiePolicy <NSObject, JavaObject>
- (BOOL)shouldAcceptWithJavaNetURI:(JavaNetURI *)arg1 withJavaNetHttpCookie:(JavaNetHttpCookie *)arg2;
@end

