//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNetServerSocket.h"

@interface JavaxNetSslSSLServerSocket : JavaNetServerSocket
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (BOOL)getEnableSessionCreation;
- (void)setEnableSessionCreationWithBoolean:(BOOL)arg1;
- (BOOL)getUseClientMode;
- (void)setUseClientModeWithBoolean:(BOOL)arg1;
- (BOOL)getWantClientAuth;
- (void)setWantClientAuthWithBoolean:(BOOL)arg1;
- (BOOL)getNeedClientAuth;
- (void)setNeedClientAuthWithBoolean:(BOOL)arg1;
- (void)setEnabledProtocolsWithNSStringArray:(id)arg1;
- (id)getEnabledProtocols;
- (id)getSupportedProtocols;
- (id)getSupportedCipherSuites;
- (void)setEnabledCipherSuitesWithNSStringArray:(id)arg1;
- (id)getEnabledCipherSuites;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withJavaNetInetAddress:(id)arg3;
- (id)initWithInt:(int)arg1 withInt:(int)arg2;
- (id)initWithInt:(int)arg1;
- (id)init;

@end

