//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNumber.h"

#import "JavaLangComparable.h"

@class NSString;

@interface JavaLangFloat : NSNumber <JavaLangComparable>
{
    float value_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)toHexStringWithFloat:(float)arg1;
+ (id)valueOfWithFloat:(float)arg1;
+ (int)compareWithFloat:(float)arg1 withFloat:(float)arg2;
+ (id)valueOfWithNSString:(id)arg1;
+ (id)toStringWithFloat:(float)arg1;
+ (float)parseFloatWithNSString:(id)arg1;
+ (BOOL)isNaNWithFloat:(float)arg1;
+ (BOOL)isInfiniteWithFloat:(float)arg1;
+ (float)intBitsToFloatWithInt:(int)arg1;
+ (int)floatToRawIntBitsWithFloat:(float)arg1;
+ (int)floatToIntBitsWithFloat:(float)arg1;
- (void)getValue:(void *)arg1;
- (const char *)objCType;
@property(readonly, copy) NSString *description;
- (short)shortValue;
- (long long)longLongValue;
- (BOOL)isNaN;
- (BOOL)isInfinite;
- (int)intValue;
@property(readonly) unsigned int hash;
- (float)floatValue;
- (BOOL)isEqual:(id)arg1;
- (double)doubleValue;
- (BOOL)charValue;
- (int)compareToWithId:(id)arg1;
- (id)initWithNSString:(id)arg1;
- (id)initWithDouble:(double)arg1;
- (id)initWithFloat:(float)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

