//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaIoReader.h"

@class IOSCharArray;

@interface JavaIoCharArrayReader : JavaIoReader
{
    IOSCharArray *buf_;
    int pos_;
    int markedPos_;
    int count_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (long long)skipWithLong:(long long)arg1;
- (void)reset;
- (BOOL)ready;
- (int)readWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)read;
- (BOOL)markSupported;
- (void)checkNotClosed;
- (void)markWithInt:(int)arg1;
- (BOOL)isClosed;
- (BOOL)isOpen;
- (void)close;
- (id)initWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)initWithCharArray:(id)arg1;

@end
