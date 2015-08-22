//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioByteBuffer.h"

@class IOSByteArray;

@interface JavaNioByteArrayBuffer : JavaNioByteBuffer
{
    IOSByteArray *backingArray_;
    int arrayOffset_;
    BOOL isReadOnly_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)copy__WithJavaNioByteArrayBuffer:(id)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3;
- (void)dealloc;
- (id)asShortBuffer;
- (id)asLongBuffer;
- (id)asIntBuffer;
- (id)asFloatBuffer;
- (id)asDoubleBuffer;
- (id)asCharBuffer;
- (id)putShortWithShort:(short)arg1;
- (id)putShortWithInt:(int)arg1 withShort:(short)arg2;
- (id)putLongWithLong:(long long)arg1;
- (id)putLongWithInt:(int)arg1 withLong:(long long)arg2;
- (id)putIntWithInt:(int)arg1 withInt:(int)arg2;
- (id)putIntWithInt:(int)arg1;
- (id)putFloatWithInt:(int)arg1 withFloat:(float)arg2;
- (id)putFloatWithFloat:(float)arg1;
- (id)putDoubleWithInt:(int)arg1 withDouble:(double)arg2;
- (id)putDoubleWithDouble:(double)arg1;
- (id)putCharWithChar:(unsigned short)arg1;
- (id)putCharWithInt:(int)arg1 withChar:(unsigned short)arg2;
- (void)putWithShortArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)putWithLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)putWithIntArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)putWithFloatArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)putWithDoubleArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)putWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)putWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)putWithInt:(int)arg1 withByte:(BOOL)arg2;
- (id)putWithByte:(BOOL)arg1;
- (BOOL)isDirect;
- (short)getShortWithInt:(int)arg1;
- (short)getShort;
- (long long)getLongWithInt:(int)arg1;
- (long long)getLong;
- (int)getIntWithInt:(int)arg1;
- (int)getInt;
- (float)getFloatWithInt:(int)arg1;
- (float)getFloat;
- (double)getDoubleWithInt:(int)arg1;
- (double)getDouble;
- (unsigned short)getCharWithInt:(int)arg1;
- (unsigned short)getChar;
- (BOOL)getWithInt:(int)arg1;
- (BOOL)get;
- (void)getWithShortArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)getWithLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)getWithIntArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)getWithFloatArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)getWithDoubleArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)getWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)getWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (BOOL)protectedHasArray;
- (int)protectedArrayOffset;
- (id)protectedArray;
- (BOOL)isReadOnly;
- (id)slice;
- (id)duplicate;
- (id)compact;
- (id)asReadOnlyBuffer;
- (id)initWithInt:(int)arg1 withByteArray:(id)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4;
- (id)initWithByteArray:(id)arg1;

@end
