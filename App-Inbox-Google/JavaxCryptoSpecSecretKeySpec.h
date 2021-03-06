//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "JavaSecuritySpecKeySpec.h"
#import "JavaxCryptoSecretKey.h"

@class IOSByteArray, NSString;

@interface JavaxCryptoSpecSecretKeySpec : NSObject <JavaxCryptoSecretKey, JavaSecuritySpecKeySpec, JavaIoSerializable>
{
    IOSByteArray *key_;
    NSString *algorithm_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (id)getEncoded;
- (id)getFormat;
- (id)getAlgorithm;
- (id)initWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withNSString:(id)arg4;
- (id)initWithByteArray:(id)arg1 withNSString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

