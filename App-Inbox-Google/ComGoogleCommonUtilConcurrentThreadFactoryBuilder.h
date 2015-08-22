//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaLangBoolean, JavaLangInteger, NSString;

@interface ComGoogleCommonUtilConcurrentThreadFactoryBuilder : NSObject
{
    NSString *nameFormat_;
    JavaLangBoolean *daemon_;
    JavaLangInteger *priority_;
    id <JavaLangThread_UncaughtExceptionHandler> uncaughtExceptionHandler_;
    id <JavaUtilConcurrentThreadFactory> backingThreadFactory_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)buildWithComGoogleCommonUtilConcurrentThreadFactoryBuilder:(id)arg1;
- (void)dealloc;
- (id)build;
- (id)setThreadFactoryWithJavaUtilConcurrentThreadFactory:(id)arg1;
- (id)setUncaughtExceptionHandlerWithJavaLangThread_UncaughtExceptionHandler:(id)arg1;
- (id)setPriorityWithInt:(int)arg1;
- (id)setDaemonWithBoolean:(BOOL)arg1;
- (id)setNameFormatWithNSString:(id)arg1;
- (id)init;

@end
