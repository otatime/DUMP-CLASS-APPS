//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "JavaSecurityInterfacesECKey.h"
#import "JavaSecurityPublicKey.h"
#import "NSObject.h"

@class JavaSecuritySpecECPoint;

@protocol JavaSecurityInterfacesECPublicKey <JavaSecurityPublicKey, JavaSecurityInterfacesECKey, NSObject, JavaObject>
- (JavaSecuritySpecECPoint *)getW;
@end

