//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CardIOCreditCardNumber : NSObject
{
}

+ (BOOL)isValidNumber:(id)arg1;
+ (id)stringbyRemovingSpaces:(id)arg1;
+ (id)stringByRemovingNonNumbers:(id)arg1;
+ (int)cvvLengthForCardType:(int)arg1;
+ (int)numberLengthForCardNumber:(id)arg1;
+ (int)cardTypeForCardNumber:(id)arg1;
+ (BOOL)passesLuhnChecksum:(id)arg1;
+ (int)cardTypeFromDmzCardType:(unsigned char)arg1;
+ (void)string:(id)arg1 toNumberArray:(char *)arg2 withLength:(char *)arg3;

@end
