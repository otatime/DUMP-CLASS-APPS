//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusApiPluginObjectResultApi_ObjectResult;

@interface ComGoogleCumulusApiPluginObjectResultApi_ObjectResultInfo : NSObject
{
    ComGoogleCumulusApiPluginObjectResultApi_ObjectResult *result_;
    int ackedCount_;
}

- (void)dealloc;
- (id)getError;
- (int)getAckedCount;
- (id)getObjectResult;
- (id)initWithComGoogleCumulusApiPluginObjectResultApi_ObjectResult:(id)arg1 withInt:(int)arg2;
- (id)initWithComGoogleCumulusApiPluginObjectResultApi_ObjectResult:(id)arg1;

@end
