//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSString;

@interface MNWAnalyticsEventsBatch : FBValueObject <NSCopying, NSCoding>
{
    NSString *_userFBID;
    NSArray *_analyticsEvents;
}

@property(readonly, copy, nonatomic) NSArray *analyticsEvents; // @synthesize analyticsEvents=_analyticsEvents;
@property(readonly, copy, nonatomic) NSString *userFBID; // @synthesize userFBID=_userFBID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithUserFBID:(id)arg1 analyticsEvents:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

