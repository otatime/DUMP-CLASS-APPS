//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgJodaTimeDateTimeZone.h"

@class IOSObjectArray;

@interface OrgJodaTimeTzCachedDateTimeZone : OrgJodaTimeDateTimeZone
{
    OrgJodaTimeDateTimeZone *iZone_;
    IOSObjectArray *iInfoCache_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)forZoneWithOrgJodaTimeDateTimeZone:(id)arg1;
- (void)dealloc;
- (id)createInfoWithLong:(long long)arg1;
- (id)getInfoWithLong:(long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (long long)previousTransitionWithLong:(long long)arg1;
- (long long)nextTransitionWithLong:(long long)arg1;
- (BOOL)isFixed;
- (int)getStandardOffsetWithLong:(long long)arg1;
- (int)getOffsetWithLong:(long long)arg1;
- (id)getNameKeyWithLong:(long long)arg1;
- (id)getUncachedZone;
- (id)initWithOrgJodaTimeDateTimeZone:(id)arg1;

@end

