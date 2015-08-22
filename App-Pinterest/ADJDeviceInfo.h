//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface ADJDeviceInfo : NSObject <NSCopying>
{
    BOOL _trackingEnabled;
    NSString *_macSha1;
    NSString *_macShortMd5;
    NSString *_idForAdvertisers;
    NSString *_fbAttributionId;
    NSString *_vendorId;
    NSString *_pushToken;
    NSString *_clientSdk;
    NSString *_bundeIdentifier;
    NSString *_bundleVersion;
    NSString *_deviceType;
    NSString *_deviceName;
    NSString *_osName;
    NSString *_systemVersion;
    NSString *_languageCode;
    NSString *_countryCode;
}

+ (id)deviceInfoWithSdkPrefix:(id)arg1;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *osName; // @synthesize osName=_osName;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundeIdentifier; // @synthesize bundeIdentifier=_bundeIdentifier;
@property(copy, nonatomic) NSString *clientSdk; // @synthesize clientSdk=_clientSdk;
@property(copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(copy, nonatomic) NSString *vendorId; // @synthesize vendorId=_vendorId;
@property(nonatomic) BOOL trackingEnabled; // @synthesize trackingEnabled=_trackingEnabled;
@property(copy, nonatomic) NSString *fbAttributionId; // @synthesize fbAttributionId=_fbAttributionId;
@property(copy, nonatomic) NSString *idForAdvertisers; // @synthesize idForAdvertisers=_idForAdvertisers;
@property(copy, nonatomic) NSString *macShortMd5; // @synthesize macShortMd5=_macShortMd5;
@property(copy, nonatomic) NSString *macSha1; // @synthesize macSha1=_macSha1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSdkPrefix:(id)arg1;

@end

