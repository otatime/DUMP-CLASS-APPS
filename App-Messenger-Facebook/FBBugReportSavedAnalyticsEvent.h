//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface FBBugReportSavedAnalyticsEvent : NSObject
{
    NSString *_eventName;
    NSString *_module;
    NSDictionary *_extra;
    CDUnknownBlockType _extraBlock;
}

@property(copy, nonatomic) CDUnknownBlockType extraBlock; // @synthesize extraBlock=_extraBlock;
@property(copy, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;

@end

