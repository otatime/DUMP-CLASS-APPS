//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSNumber, NSString;

@interface CRRawCrash : NSObject
{
    NSData *_plcData;
    NSDate *_crashDate;
    NSString *_imageUUID;
    NSString *_binaryImageName;
    NSString *_binaryImageArchitecture;
    NSString *_exceptionName;
    NSString *_exceptionReason;
    NSString *_reportedAt;
    NSString *_appVersion;
    NSNumber *_memUsage;
    NSNumber *_diskSpaceFree;
}

+ (id)crashWithPLCData:(id)arg1;
@property(retain) NSNumber *diskSpaceFree; // @synthesize diskSpaceFree=_diskSpaceFree;
@property(retain) NSNumber *memUsage; // @synthesize memUsage=_memUsage;
@property(retain) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain) NSString *reportedAt; // @synthesize reportedAt=_reportedAt;
@property(retain) NSString *exceptionReason; // @synthesize exceptionReason=_exceptionReason;
@property(retain) NSString *exceptionName; // @synthesize exceptionName=_exceptionName;
@property(retain) NSString *binaryImageArchitecture; // @synthesize binaryImageArchitecture=_binaryImageArchitecture;
@property(retain) NSString *binaryImageName; // @synthesize binaryImageName=_binaryImageName;
@property(retain) NSString *imageUUID; // @synthesize imageUUID=_imageUUID;
@property(retain) NSDate *crashDate; // @synthesize crashDate=_crashDate;
@property(retain) NSData *plcData; // @synthesize plcData=_plcData;
- (void).cxx_destruct;
- (BOOL)populateAppStateDataFromPLCrashReport:(id)arg1;
- (BOOL)populateWithPLCrashData:(id)arg1;
- (id)initWithPLCrashData:(id)arg1;

@end

