//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCharacterSet, NSDecimalNumber, NSMutableString, NSString;

@interface MNPaymentsPeerToPeerAmountInputHandler : NSObject
{
    NSMutableString *_rawAmount;
    NSCharacterSet *_invertedDigitsAndDotCharacterSet;
}

- (void).cxx_destruct;
- (void)completeAmount;
- (BOOL)isEqualToZero;
- (id)clearText;
- (id)deleteBackward;
- (id)insertText:(id)arg1;
@property(readonly, copy, nonatomic) NSDecimalNumber *amount;
@property(readonly, copy, nonatomic) NSString *amountText;
- (id)initWithInitialAmount:(id)arg1;
- (id)init;

@end

