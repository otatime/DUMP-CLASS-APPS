//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaLangEnum.h"

#import "NSCopying.h"

@class JCGCuClientVersionValidator_UpdateEntityEnum;

@interface JCGCuClientVersionValidator_VersionCompatabilityEnum : JavaLangEnum <NSCopying>
{
    BOOL shouldProcessRequest_;
    JCGCuClientVersionValidator_UpdateEntityEnum *entityToUpdate_;
}

+ (void)initialize;
+ (id)valueOfWithNSString:(id)arg1;
+ (id)values;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEntityToUpdate;
- (BOOL)shouldProcessRequest;
- (id)initWithBoolean:(BOOL)arg1 withJCGCuClientVersionValidator_UpdateEntityEnum:(id)arg2 withNSString:(id)arg3 withInt:(int)arg4;

@end

