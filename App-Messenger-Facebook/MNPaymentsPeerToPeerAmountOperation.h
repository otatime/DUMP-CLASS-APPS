//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@interface MNPaymentsPeerToPeerAmountOperation : FBValueObject <NSCopying>
{
    int _loc;
    int _operation;
}

@property(readonly, nonatomic) int operation; // @synthesize operation=_operation;
@property(readonly, nonatomic) int loc; // @synthesize loc=_loc;
- (id)initWithLoc:(int)arg1 operation:(int)arg2;

@end

