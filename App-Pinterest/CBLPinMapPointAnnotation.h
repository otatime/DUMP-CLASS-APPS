//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKPointAnnotation.h"

@class CBLPin, UIImage;

@interface CBLPinMapPointAnnotation : MKPointAnnotation
{
    UIImage *_roundedPinImage;
    CBLPin *_pin;
}

@property(retain, nonatomic) CBLPin *pin; // @synthesize pin=_pin;
@property(retain, nonatomic) UIImage *roundedPinImage; // @synthesize roundedPinImage=_roundedPinImage;
- (void).cxx_destruct;

@end
