//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class IOSClass, JavaLangThrowable, NSString, XPLTXLogLevelEnum;

@protocol XPLTLoggerBackend <NSObject, JavaObject>
- (void)logWithId:(id)arg1 withXPLTXLogLevelEnum:(XPLTXLogLevelEnum *)arg2 withNSString:(NSString *)arg3 withJavaLangThrowable:(JavaLangThrowable *)arg4;
- (void)logWithId:(id)arg1 withXPLTXLogLevelEnum:(XPLTXLogLevelEnum *)arg2 withNSString:(NSString *)arg3;
- (BOOL)isLoggableWithId:(id)arg1 withXPLTXLogLevelEnum:(XPLTXLogLevelEnum *)arg2;
- (id)getLoggerStateWithIOSClass:(IOSClass *)arg1;
@end

