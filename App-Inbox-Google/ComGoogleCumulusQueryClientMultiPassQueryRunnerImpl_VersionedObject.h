//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusApiTypeObjectReference, ComGoogleCumulusTypeTypeProto_BaseObject;

@interface ComGoogleCumulusQueryClientMultiPassQueryRunnerImpl_VersionedObject : NSObject
{
    ComGoogleCumulusApiTypeObjectReference *reference_;
    ComGoogleCumulusTypeTypeProto_BaseObject *state_;
}

- (void)dealloc;
- (id)getState;
- (id)getReference;
- (id)initWithComGoogleCumulusApiTypeObjectReference:(id)arg1 withComGoogleCumulusTypeTypeProto_BaseObject:(id)arg2;

@end

