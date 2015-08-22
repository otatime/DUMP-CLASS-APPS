//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBSyncContactPointBuilder : NSObject
{
    NSString *_contactPointID;
    NSString *_label;
    NSString *_localizedLabel;
    NSString *_value;
    NSString *_countryCode;
    NSString *_nationalNumber;
    NSString *_normalizedValue;
    BOOL _isVerified;
    int _type;
}

+ (id)syncContactPointFromExistingSyncContactPoint:(id)arg1;
+ (id)syncContactPoint;
- (void).cxx_destruct;
- (id)withType:(int)arg1;
- (id)withIsVerified:(BOOL)arg1;
- (id)withNormalizedValue:(id)arg1;
- (id)withNationalNumber:(id)arg1;
- (id)withCountryCode:(id)arg1;
- (id)withValue:(id)arg1;
- (id)withLocalizedLabel:(id)arg1;
- (id)withLabel:(id)arg1;
- (id)withContactPointID:(id)arg1;
- (id)build;

@end

