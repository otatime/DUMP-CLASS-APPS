//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusApiQuerySettings, ComGoogleCumulusApiQuerySpec;

@interface ComGoogleCumulusApiSegmentSpecifier_Specification : NSObject
{
    ComGoogleCumulusApiQuerySettings *querySettings_;
    ComGoogleCumulusApiQuerySpec *querySpec_;
}

- (void)dealloc;
- (id)getQuerySpec;
- (id)getQuerySettings;
- (id)initWithComGoogleCumulusApiQuerySettings:(id)arg1 withComGoogleCumulusApiQuerySpec:(id)arg2;

@end
