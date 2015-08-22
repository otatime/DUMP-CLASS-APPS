//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface FBPaymentsKitCardTextInputState : FBValueObject <NSCopying>
{
    NSString *_text;
    NSString *_numericalDigits;
    NSString *_formattedText;
    int _validationResult;
}

@property(readonly, nonatomic) int validationResult; // @synthesize validationResult=_validationResult;
@property(readonly, copy, nonatomic) NSString *formattedText; // @synthesize formattedText=_formattedText;
@property(readonly, copy, nonatomic) NSString *numericalDigits; // @synthesize numericalDigits=_numericalDigits;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithText:(id)arg1 numericalDigits:(id)arg2 formattedText:(id)arg3 validationResult:(int)arg4;

@end

