//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaIoObjectStreamException.h"

@class JavaLangException;

@interface JavaIoWriteAbortedException : JavaIoObjectStreamException
{
    JavaLangException *detail_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getCause;
- (id)getMessage;
- (id)initWithNSString:(id)arg1 withJavaLangException:(id)arg2;

@end
