//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CrittercismConfig : NSObject
{
    BOOL _monitorNSURLConnection;
    BOOL _monitorNSURLSession;
    BOOL _monitorUIWebView;
    BOOL _monitorWKWebView;
    BOOL _enableServiceMonitoring;
    NSArray *_urlFilters;
    id <CrittercismDelegate> _delegate;
}

+ (id)defaultConfig;
@property(retain) id <CrittercismDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *urlFilters; // @synthesize urlFilters=_urlFilters;
@property BOOL enableServiceMonitoring; // @synthesize enableServiceMonitoring=_enableServiceMonitoring;
@property BOOL monitorWKWebView; // @synthesize monitorWKWebView=_monitorWKWebView;
@property BOOL monitorUIWebView; // @synthesize monitorUIWebView=_monitorUIWebView;
@property BOOL monitorNSURLSession; // @synthesize monitorNSURLSession=_monitorNSURLSession;
@property BOOL monitorNSURLConnection; // @synthesize monitorNSURLConnection=_monitorNSURLConnection;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

