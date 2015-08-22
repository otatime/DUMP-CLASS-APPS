//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioIntBuffer.h"

@class IOSIntArray;

@interface JavaNioIntArrayBuffer : JavaNioIntBuffer
{
    IOSIntArray *backingArray_;
    int arrayOffset_;
    BOOL isReadOnly_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)copy__WithJavaNioIntArrayBuffer:(id)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3;
- (void)dealloc;
- (id)putWithIntArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)putWithInt:(int)arg1 withInt:(int)arg2;
- (id)putWithInt:(int)arg1;
- (id)order;
- (BOOL)isDirect;
- (id)getWithIntArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)getWithInt:(int)arg1;
- (int)get;
- (BOOL)protectedHasArray;
- (int)protectedArrayOffset;
- (id)protectedArray;
- (BOOL)isReadOnly;
- (id)slice;
- (id)duplicate;
- (id)compact;
- (id)asReadOnlyBuffer;
- (id)initWithInt:(int)arg1 withIntArray:(id)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4;
- (id)initWithIntArray:(id)arg1;

@end
