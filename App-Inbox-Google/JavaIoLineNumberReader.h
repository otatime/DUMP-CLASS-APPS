//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaIoBufferedReader.h"

@interface JavaIoLineNumberReader : JavaIoBufferedReader
{
    int lineNumber_;
    int markedLineNumber_;
    BOOL lastWasCR_LineNumberReader_;
    BOOL markedLastWasCR_LineNumberReader_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (long long)skipWithLong:(long long)arg1;
- (void)setLineNumberWithInt:(int)arg1;
- (void)reset;
- (id)readLine;
- (int)readWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)read;
- (void)markWithInt:(int)arg1;
- (int)getLineNumber;
- (id)initWithJavaIoReader:(id)arg1 withInt:(int)arg2;
- (id)initWithJavaIoReader:(id)arg1;

@end
