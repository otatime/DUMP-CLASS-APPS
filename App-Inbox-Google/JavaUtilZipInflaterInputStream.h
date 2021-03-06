//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaIoFilterInputStream.h"

@class IOSByteArray, JavaUtilZipInflater;

@interface JavaUtilZipInflaterInputStream : JavaIoFilterInputStream
{
    JavaUtilZipInflater *inf_;
    IOSByteArray *buf_;
    int len_;
    BOOL closed_;
    BOOL eof_;
    int nativeEndBufSize_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)checkClosed;
- (BOOL)markSupported;
- (void)reset;
- (void)markWithInt:(int)arg1;
- (void)close;
- (int)available;
- (long long)skipWithLong:(long long)arg1;
- (void)fill;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)read;
- (id)initWithJavaIoInputStream:(id)arg1 withJavaUtilZipInflater:(id)arg2 withInt:(int)arg3;
- (id)initWithJavaIoInputStream:(id)arg1 withJavaUtilZipInflater:(id)arg2;
- (id)initWithJavaIoInputStream:(id)arg1;

@end

