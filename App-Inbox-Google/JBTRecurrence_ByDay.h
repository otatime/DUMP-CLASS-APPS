//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTRecurrence_WeekdayEnum;

@interface JBTRecurrence_ByDay : NSObject
{
    JBTRecurrence_WeekdayEnum *weekday_;
    int offset_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_gwtEqualsWithJBTRecurrence_ByDay__params;
+ (id)__annotations_equalsWithId__params;
+ (id)__annotations_initWithJBTRecurrence_WeekdayEnum_withInt_;
+ (id)__annotations;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (BOOL)gwtEqualsWithJBTRecurrence_ByDay:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)getOffset;
- (BOOL)hasOffset;
- (id)getWeekday;
- (id)initWithJBTRecurrence_WeekdayEnum:(id)arg1 withInt:(int)arg2;
- (id)initWithJBTRecurrence_WeekdayEnum:(id)arg1;

@end

