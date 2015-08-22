//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioShortBuffer.h"

@class IOSShortArray;

@interface JavaNioShortArrayBuffer : JavaNioShortBuffer
{
    IOSShortArray *backingArray_;
    int arrayOffset_;
    BOOL isReadOnly_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)copy__WithJavaNioShortArrayBuffer:(id)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3;
- (void)dealloc;
- (id)putWithShortArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)putWithInt:(int)arg1 withShort:(short)arg2;
- (id)putWithShort:(short)arg1;
- (id)order;
- (BOOL)isDirect;
- (id)getWithShortArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (short)getWithInt:(int)arg1;
- (short)get;
- (BOOL)protectedHasArray;
- (int)protectedArrayOffset;
- (id)protectedArray;
- (BOOL)isReadOnly;
- (id)slice;
- (id)duplicate;
- (id)compact;
- (id)asReadOnlyBuffer;
- (id)initWithInt:(int)arg1 withShortArray:(id)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4;
- (id)initWithShortArray:(id)arg1;

@end
