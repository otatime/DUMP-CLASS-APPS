//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLPinCloseupBaseView.h"

@class UILabel;

@interface CBLPinCloseupTwoValueView : CBLPinCloseupBaseView
{
    UILabel *_headerOneLabel;
    UILabel *_valueOneLabel;
    UILabel *_headerTwoLabel;
    UILabel *_valueTwoLabel;
}

@property(retain, nonatomic) UILabel *valueTwoLabel; // @synthesize valueTwoLabel=_valueTwoLabel;
@property(retain, nonatomic) UILabel *headerTwoLabel; // @synthesize headerTwoLabel=_headerTwoLabel;
@property(retain, nonatomic) UILabel *valueOneLabel; // @synthesize valueOneLabel=_valueOneLabel;
@property(retain, nonatomic) UILabel *headerOneLabel; // @synthesize headerOneLabel=_headerOneLabel;
- (void).cxx_destruct;
- (id)updateDynamicConstraints;
- (void)setValues:(id)arg1 forLabels:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

