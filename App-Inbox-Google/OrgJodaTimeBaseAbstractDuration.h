//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OrgJodaTimeReadableDuration.h"

@class NSString;

@interface OrgJodaTimeBaseAbstractDuration : NSObject <OrgJodaTimeReadableDuration>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_toString;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isShorterThanWithOrgJodaTimeReadableDuration:(id)arg1;
- (BOOL)isLongerThanWithOrgJodaTimeReadableDuration:(id)arg1;
- (BOOL)isEqualWithOrgJodaTimeReadableDuration:(id)arg1;
- (int)compareToWithId:(id)arg1;
- (id)toPeriod;
- (id)toDuration;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
