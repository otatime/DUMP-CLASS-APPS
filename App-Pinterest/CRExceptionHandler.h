//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CritterImpl, NSDate, NSMutableArray, NSString;

@interface CRExceptionHandler : NSObject
{
    CritterImpl *_critterDelegate;
    NSString *_appID;
    NSString *_libVersion;
    NSString *_deviceID;
    NSString *_baseURL;
    NSString *_binaryImageUUID;
    NSString *_binaryImageName;
    NSString *_binaryImageArch;
    NSDate *_lastSendTime;
    NSMutableArray *_batchedExceptions;
}

@property(retain) NSMutableArray *batchedExceptions; // @synthesize batchedExceptions=_batchedExceptions;
@property(retain) NSDate *lastSendTime; // @synthesize lastSendTime=_lastSendTime;
@property(retain) NSString *binaryImageArch; // @synthesize binaryImageArch=_binaryImageArch;
@property(retain) NSString *binaryImageName; // @synthesize binaryImageName=_binaryImageName;
@property(retain) NSString *binaryImageUUID; // @synthesize binaryImageUUID=_binaryImageUUID;
@property(retain) NSString *baseURL; // @synthesize baseURL=_baseURL;
@property(retain) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(retain) NSString *libVersion; // @synthesize libVersion=_libVersion;
@property(retain) NSString *appID; // @synthesize appID=_appID;
@property CritterImpl *critterDelegate; // @synthesize critterDelegate=_critterDelegate;
- (void).cxx_destruct;
- (void)sendBatch;
- (id)makeExceptionDictFromException:(id)arg1 andBreadcrumbs:(id)arg2 andSystemBreadcrumbs:(id)arg3 andEndpoints:(id)arg4 andAppState:(id)arg5;
- (BOOL)logHandledException:(id)arg1 withBreadcrumbs:(id)arg2 andSystemBreadcrumbs:(id)arg3 andEndpoints:(id)arg4 andAppState:(id)arg5;
- (id)initWithAppID:(id)arg1 andLibVersion:(id)arg2 andDeviceID:(id)arg3 andCritterDelegate:(id)arg4 andBaseURL:(id)arg5;

@end

