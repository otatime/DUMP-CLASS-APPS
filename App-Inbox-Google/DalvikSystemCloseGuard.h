//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaLangThrowable;

@interface DalvikSystemCloseGuard : NSObject
{
    JavaLangThrowable *allocationSite_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)getReporter;
+ (void)setReporterWithDalvikSystemCloseGuard_Reporter:(id)arg1;
+ (void)setEnabledWithBoolean:(BOOL)arg1;
+ (id)get;
- (void)dealloc;
- (void)warnIfOpen;
- (void)close;
- (void)openWithNSString:(id)arg1;
- (id)init;

@end
