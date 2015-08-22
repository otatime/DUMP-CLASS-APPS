//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaSecurityCertCertificate.h"

#import "JavaSecurityCertX509Extension.h"

@class NSString;

@interface JavaSecurityCertX509Certificate : JavaSecurityCertCertificate <JavaSecurityCertX509Extension>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)getIssuerAlternativeNames;
- (id)getSubjectAlternativeNames;
- (int)getBasicConstraints;
- (id)getExtendedKeyUsage;
- (id)getKeyUsage;
- (id)getSubjectUniqueID;
- (id)getIssuerUniqueID;
- (id)getSigAlgParams;
- (id)getSigAlgOID;
- (id)getSigAlgName;
- (id)getSignature;
- (id)getTBSCertificate;
- (id)getNotAfter;
- (id)getNotBefore;
- (id)getSubjectX500Principal;
- (id)getSubjectDN;
- (id)getIssuerX500Principal;
- (id)getIssuerDN;
- (id)getSerialNumber;
- (int)getVersion;
- (void)checkValidityWithJavaUtilDate:(id)arg1;
- (void)checkValidity;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
