//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonIndexIndexIteratorWithState_State.h"

@class ComGoogleCumulusTypeTypeProto_BaseObject, NSString;

@interface ComGoogleCumulusSyncClientIndexIteratorState : NSObject <ComGoogleCumulusCommonIndexIndexIteratorWithState_State>
{
    ComGoogleCumulusTypeTypeProto_BaseObject *baseObject_;
    NSString *version__;
    NSString *soid_;
    int localVersion_;
}

- (void)dealloc;
- (int)getLocalVersion;
- (id)getSoid;
- (id)getVersion;
- (id)getBaseObject;
- (id)initWithComGoogleCumulusTypeTypeProto_BaseObject:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withJavaUtilList:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
