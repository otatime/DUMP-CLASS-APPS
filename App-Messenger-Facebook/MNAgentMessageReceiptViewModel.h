//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface MNAgentMessageReceiptViewModel : FBValueObject <NSCopying>
{
    NSString *_paymentID;
}

@property(readonly, copy, nonatomic) NSString *paymentID; // @synthesize paymentID=_paymentID;
- (void).cxx_destruct;
- (id)initWithPaymentID:(id)arg1;

@end
