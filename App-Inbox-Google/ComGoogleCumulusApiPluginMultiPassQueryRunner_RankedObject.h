//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusApiTypeObjectReference, ComGoogleCumulusTypeTypeProto_BaseObject;

@interface ComGoogleCumulusApiPluginMultiPassQueryRunner_RankedObject : NSObject
{
    id <JavaLangComparable> rank_;
    ComGoogleCumulusApiTypeObjectReference *objectReference_;
    ComGoogleCumulusTypeTypeProto_BaseObject *state_;
}

- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)getState;
- (id)getReference;
- (id)getRank;
- (id)initWithJavaLangComparable:(id)arg1 withComGoogleCumulusApiTypeObjectReference:(id)arg2 withComGoogleCumulusTypeTypeProto_BaseObject:(id)arg3;

@end

