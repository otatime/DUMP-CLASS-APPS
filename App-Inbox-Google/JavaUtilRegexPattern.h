//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"

@class NSString;

@interface JavaUtilRegexPattern : NSObject <JavaIoSerializable>
{
    long long address_;
    NSString *pattern_;
    int flags_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (long long)compileImplWithNSString:(id)arg1 withInt:(int)arg2;
+ (void)closeImplWithLong:(long long)arg1;
+ (id)quoteWithNSString:(id)arg1;
+ (BOOL)matchesWithNSString:(id)arg1 withJavaLangCharSequence:(id)arg2;
+ (id)compileWithNSString:(id)arg1;
+ (id)compileWithNSString:(id)arg1 withInt:(int)arg2;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)dealloc;
- (void)compile;
- (id)initWithNSString:(id)arg1 withInt:(int)arg2;
- (int)flags;
@property(readonly, copy) NSString *description;
- (id)pattern;
- (id)splitWithJavaLangCharSequence:(id)arg1;
- (id)splitWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2;
- (id)matcherWithJavaLangCharSequence:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

