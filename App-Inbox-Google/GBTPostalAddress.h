//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GBTPostalAddress : NSObject
{
    NSString *_formattedAddress;
    NSString *_country;
    NSString *_locality;
    NSString *_postOfficeBoxNumber;
    NSString *_postalCode;
    NSString *_streetName;
    NSString *_streetNumber;
    NSString *_region;
}

@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *streetNumber; // @synthesize streetNumber=_streetNumber;
@property(copy, nonatomic) NSString *streetName; // @synthesize streetName=_streetName;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *postOfficeBoxNumber; // @synthesize postOfficeBoxNumber=_postOfficeBoxNumber;
@property(copy, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *formattedAddress; // @synthesize formattedAddress=_formattedAddress;
- (void).cxx_destruct;

@end

