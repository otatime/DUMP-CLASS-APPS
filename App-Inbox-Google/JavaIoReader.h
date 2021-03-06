//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoCloseable.h"
#import "JavaLangReadable.h"

@class NSString;

@interface JavaIoReader : NSObject <JavaLangReadable, JavaIoCloseable>
{
    id lock_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)readWithJavaNioCharBuffer:(id)arg1;
- (long long)skipWithLong:(long long)arg1;
- (void)reset;
- (BOOL)ready;
- (int)readWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)readWithCharArray:(id)arg1;
- (int)read;
- (BOOL)markSupported;
- (void)markWithInt:(int)arg1;
- (void)close;
- (id)initWithId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

