//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TMLTimeZoneImpl_Builder : NSObject
{
    NSString *id__;
    int standardOffset_;
    id <JavaUtilList> transitions_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)init;
- (id)addTransitionWithLong:(long long)arg1 withInt:(int)arg2;
- (id)setStandardOffsetWithInt:(int)arg1;
- (id)setIdWithNSString:(id)arg1;
- (id)build;

@end

