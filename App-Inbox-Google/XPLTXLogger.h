//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XPLTXLogger : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_isLoggableWithXPLTXLogLevelEnum_;
+ (id)getLoggerWithIOSClass:(id)arg1;
- (id)init;
- (BOOL)isLoggableWithXPLTXLogLevelEnum:(id)arg1;
- (id)atVerbose;
- (id)atDebug;
- (id)atInfo;
- (id)atWarn;
- (id)atError;
- (id)loggingAtWithXPLTXLogLevelEnum:(id)arg1;

@end
