//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilZipInflaterInputStream.h"

@class JavaUtilZipCRC32;

@interface JavaUtilZipGZIPInputStream : JavaUtilZipInflaterInputStream
{
    JavaUtilZipCRC32 *crc_;
    BOOL eos_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)readZeroTerminatedWithJavaIoInputStream:(id)arg1 withJavaUtilZipCRC32:(id)arg2 withBoolean:(BOOL)arg3;
+ (void)parseGzipHeaderWithJavaIoInputStream:(id)arg1 withByteArray:(id)arg2 withJavaUtilZipCRC32:(id)arg3 withByteArray:(id)arg4;
+ (id)readHeaderWithJavaIoInputStream:(id)arg1;
- (void)dealloc;
- (void)verifyCrc;
- (BOOL)maybeReadNextMember;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)close;
- (id)initWithJavaIoInputStream:(id)arg1 withInt:(int)arg2;
- (id)initWithJavaIoInputStream:(id)arg1;

@end
