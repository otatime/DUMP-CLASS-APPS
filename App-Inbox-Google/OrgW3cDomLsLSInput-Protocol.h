//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JavaIoInputStream, JavaIoReader, NSString;

@protocol OrgW3cDomLsLSInput <NSObject, JavaObject>
- (void)setCertifiedTextWithBoolean:(BOOL)arg1;
- (BOOL)getCertifiedText;
- (void)setEncodingWithNSString:(NSString *)arg1;
- (NSString *)getEncoding;
- (void)setBaseURIWithNSString:(NSString *)arg1;
- (NSString *)getBaseURI;
- (void)setPublicIdWithNSString:(NSString *)arg1;
- (NSString *)getPublicId;
- (void)setSystemIdWithNSString:(NSString *)arg1;
- (NSString *)getSystemId;
- (void)setStringDataWithNSString:(NSString *)arg1;
- (NSString *)getStringData;
- (void)setByteStreamWithJavaIoInputStream:(JavaIoInputStream *)arg1;
- (JavaIoInputStream *)getByteStream;
- (void)setCharacterStreamWithJavaIoReader:(JavaIoReader *)arg1;
- (JavaIoReader *)getCharacterStream;
@end
