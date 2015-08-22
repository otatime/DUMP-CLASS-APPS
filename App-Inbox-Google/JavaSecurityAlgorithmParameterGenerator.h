//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaSecurityAlgorithmParameterGeneratorSpi, JavaSecurityProvider, NSString;

@interface JavaSecurityAlgorithmParameterGenerator : NSObject
{
    JavaSecurityProvider *provider_;
    JavaSecurityAlgorithmParameterGeneratorSpi *spiImpl_;
    NSString *algorithm_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)getInstanceWithNSString:(id)arg1 withJavaSecurityProvider:(id)arg2;
+ (id)getInstanceWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)getInstanceWithNSString:(id)arg1;
- (void)dealloc;
- (id)generateParameters;
- (void)init__WithJavaSecuritySpecAlgorithmParameterSpec:(id)arg1 withJavaSecuritySecureRandom:(id)arg2;
- (void)init__WithJavaSecuritySpecAlgorithmParameterSpec:(id)arg1;
- (void)init__WithInt:(int)arg1 withJavaSecuritySecureRandom:(id)arg2;
- (void)init__WithInt:(int)arg1;
- (id)getProvider;
- (id)getAlgorithm;
- (id)initWithJavaSecurityAlgorithmParameterGeneratorSpi:(id)arg1 withJavaSecurityProvider:(id)arg2 withNSString:(id)arg3;

@end
