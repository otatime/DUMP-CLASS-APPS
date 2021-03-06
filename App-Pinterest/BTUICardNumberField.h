//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTUIFormField.h"

@class BTUICardType, NSString;

@interface BTUICardNumberField : BTUIFormField
{
    BTUICardType *_cardType;
    NSString *_number;
}

@property(readonly, nonatomic) NSString *number; // @synthesize number=_number;
@property(readonly, nonatomic) BTUICardType *cardType; // @synthesize cardType=_cardType;
- (void).cxx_destruct;
- (void)updateCardHint;
- (BOOL)isValidLength;
- (BOOL)isPotentiallyValid;
- (BOOL)completedCardNumberValid;
- (BOOL)isValidCardType;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)fieldContentDidChange;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)valid;
- (id)initWithFrame:(struct CGRect)arg1;

@end

