//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LibcoreIoIoUtils : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)throwInterruptedIoException;
+ (BOOL)canOpenReadOnlyWithNSString:(id)arg1;
+ (void)deleteContentsWithJavaIoFile:(id)arg1;
+ (id)readFileAsBytesWithNSString:(id)arg1;
+ (id)readFileAsStringWithNSString:(id)arg1;
+ (id)readFileAsByteArrayWithNSString:(id)arg1;
+ (void)setBlockingWithJavaIoFileDescriptor:(id)arg1 withBoolean:(BOOL)arg2;
+ (void)closeQuietlyWithJavaNetSocket:(id)arg1;
+ (void)closeQuietlyWithJavaIoFileDescriptor:(id)arg1;
+ (void)closeQuietlyWithJavaLangAutoCloseable:(id)arg1;
+ (void)closeWithJavaIoFileDescriptor:(id)arg1;
- (id)init;

@end
