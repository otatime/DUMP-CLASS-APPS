//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaSecurityMessageDigest.h"

@class JavaSecurityMessageDigestSpi;

@interface JavaSecurityMessageDigest_MessageDigestImpl : JavaSecurityMessageDigest
{
    JavaSecurityMessageDigestSpi *spiImpl_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)clone;
- (void)engineUpdateWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)engineUpdateWithByte:(BOOL)arg1;
- (int)engineGetDigestLength;
- (id)engineDigest;
- (void)engineReset;
- (id)initWithJavaSecurityMessageDigestSpi:(id)arg1 withJavaSecurityProvider:(id)arg2 withNSString:(id)arg3;

@end

