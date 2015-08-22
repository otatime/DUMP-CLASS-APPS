//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSException, NSMutableArray, NSString;

@interface GIPCrashReportData : NSObject
{
    int signal_;
    NSException *exception_;
    NSArray *callStack_;
    NSArray *logs_;
    NSString *appName_;
    NSString *appVersion_;
    NSDate *crashDate_;
    int reportStatus_;
    NSMutableArray *files_;
}

+ (id)signalName:(int)arg1;
+ (id)platform;
@property(nonatomic) int reportStatus; // @synthesize reportStatus=reportStatus_;
@property(copy, nonatomic) NSDate *crashDate; // @synthesize crashDate=crashDate_;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=appVersion_;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=appName_;
@property(retain, nonatomic) NSArray *logs; // @synthesize logs=logs_;
@property(retain, nonatomic) NSArray *callStack; // @synthesize callStack=callStack_;
@property(retain, nonatomic) NSException *exception; // @synthesize exception=exception_;
@property(nonatomic) int signal; // @synthesize signal=signal_;
- (id)getAllReportFiles;
- (void)addReportFile:(id)arg1;
- (id)stringValue;
- (void)dealloc;
- (id)initWithException:(id)arg1 callStack:(id)arg2;
- (id)initWithSignal:(int)arg1 callStack:(id)arg2;

@end
