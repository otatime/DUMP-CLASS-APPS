//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNetInetAddress.h"

@interface JavaNetInet4Address : JavaNetInetAddress
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (id)writeReplace;
- (BOOL)isSiteLocalAddress;
- (BOOL)isMulticastAddress;
- (BOOL)isMCSiteLocal;
- (BOOL)isMCOrgLocal;
- (BOOL)isMCNodeLocal;
- (BOOL)isMCLinkLocal;
- (BOOL)isMCGlobal;
- (BOOL)isLoopbackAddress;
- (BOOL)isLinkLocalAddress;
- (BOOL)isAnyLocalAddress;
- (id)initWithByteArray:(id)arg1 withNSString:(id)arg2;

@end
