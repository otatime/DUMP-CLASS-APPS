//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTDefaultLocationHelper.h"

@class NSString;

@interface LocationHelper : JBTDefaultLocationHelper
{
    NSString *email_;
}

- (void).cxx_destruct;
- (void)getCountryWithJBTCallback:(id)arg1;
- (void)syncLocationAliases;
- (int)getMaxNumGeofences;
- (id)getCurrentLocationWithJBTLocation_Builder:(id)arg1;
- (void)setGeofencesWithJavaUtilList:(id)arg1;
- (id)initWithEmail:(id)arg1;

@end
