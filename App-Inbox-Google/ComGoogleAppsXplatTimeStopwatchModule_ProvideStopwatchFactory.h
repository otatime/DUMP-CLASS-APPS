//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DaggerInternalFactory.h"

@class ComGoogleAppsXplatTimeStopwatchModule, NSString;

@interface ComGoogleAppsXplatTimeStopwatchModule_ProvideStopwatchFactory : NSObject <DaggerInternalFactory>
{
    ComGoogleAppsXplatTimeStopwatchModule *module_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createWithComGoogleAppsXplatTimeStopwatchModule:(id)arg1;
- (void)dealloc;
- (id)get;
- (id)initWithComGoogleAppsXplatTimeStopwatchModule:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
