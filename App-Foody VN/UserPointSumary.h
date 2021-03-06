//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface UserPointSumary : NSObject
{
    NSArray *_awardPoints;
    NSArray *_userLevels;
    NSString *_money;
    NSString *_pendingPoint;
    NSString *_expireDate;
    NSString *_usedBalance;
    NSString *_totalPoint;
}

@property(copy, nonatomic) NSString *totalPoint; // @synthesize totalPoint=_totalPoint;
@property(copy, nonatomic) NSString *usedBalance; // @synthesize usedBalance=_usedBalance;
@property(copy, nonatomic) NSString *expireDate; // @synthesize expireDate=_expireDate;
@property(copy, nonatomic) NSString *pendingPoint; // @synthesize pendingPoint=_pendingPoint;
@property(copy, nonatomic) NSString *money; // @synthesize money=_money;
@property(retain, nonatomic) NSArray *userLevels; // @synthesize userLevels=_userLevels;
@property(retain, nonatomic) NSArray *awardPoints; // @synthesize awardPoints=_awardPoints;
- (void).cxx_destruct;

@end

