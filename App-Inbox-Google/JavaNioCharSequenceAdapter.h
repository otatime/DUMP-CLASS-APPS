//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioCharBuffer.h"

@interface JavaNioCharSequenceAdapter : JavaNioCharBuffer
{
    id <JavaLangCharSequence> sequence_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)copy__WithJavaNioCharSequenceAdapter:(id)arg1;
- (void)dealloc;
- (id)subSequenceFrom:(int)arg1 to:(int)arg2;
- (id)slice;
- (id)putWithNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)putWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)putWithInt:(int)arg1 withChar:(unsigned short)arg2;
- (id)putWithChar:(unsigned short)arg1;
- (BOOL)protectedHasArray;
- (int)protectedArrayOffset;
- (id)protectedArray;
- (id)order;
- (BOOL)isReadOnly;
- (BOOL)isDirect;
- (id)getWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (unsigned short)getWithInt:(int)arg1;
- (unsigned short)get;
- (id)duplicate;
- (id)compact;
- (id)asReadOnlyBuffer;
- (id)initWithJavaLangCharSequence:(id)arg1;

@end

