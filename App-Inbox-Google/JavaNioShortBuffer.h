//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioBuffer.h"

#import "JavaLangComparable.h"

@class NSString;

@interface JavaNioShortBuffer : JavaNioBuffer <JavaLangComparable>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)wrapWithShortArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (id)wrapWithShortArray:(id)arg1;
+ (id)allocateWithInt:(int)arg1;
- (id)slice;
- (id)putWithInt:(int)arg1 withShort:(short)arg2;
- (id)putWithJavaNioShortBuffer:(id)arg1;
- (id)putWithShortArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)putWithShortArray:(id)arg1;
- (id)putWithShort:(short)arg1;
- (BOOL)protectedHasArray;
- (int)protectedArrayOffset;
- (id)protectedArray;
- (id)order;
- (BOOL)isDirect;
@property(readonly) unsigned int hash;
- (BOOL)hasArray;
- (short)getWithInt:(int)arg1;
- (id)getWithShortArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)getWithShortArray:(id)arg1;
- (short)get;
- (BOOL)isEqual:(id)arg1;
- (id)duplicate;
- (int)compareToWithId:(id)arg1;
- (id)compact;
- (id)asReadOnlyBuffer;
- (int)arrayOffset;
- (id)array;
- (id)initWithInt:(int)arg1 withLong:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
