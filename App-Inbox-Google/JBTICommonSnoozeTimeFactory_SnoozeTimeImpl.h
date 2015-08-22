//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTSnoozeTime.h"

@class JBTSnoozeTime_RelativePeriodTypeEnum, NSString;

@interface JBTICommonSnoozeTimeFactory_SnoozeTimeImpl : NSObject <JBTSnoozeTime>
{
    long long absoluteMillis_;
    int relativePeriodCount_;
    JBTSnoozeTime_RelativePeriodTypeEnum *relativePeriodType_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)getRelativePeriodCount;
- (id)getRelativePeriodType;
- (long long)getAbsoluteMillis;
- (id)initWithLong:(long long)arg1 withJBTSnoozeTime_RelativePeriodTypeEnum:(id)arg2 withInt:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
