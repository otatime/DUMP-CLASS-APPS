//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusCommonIndexIdbAdapter_TransactionRequest.h"
#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCumulusCommonIndexIdbAdapter_Transaction_ModeEnum, NSString;

@protocol ComGoogleCumulusCommonIndexIdbAdapter_Transaction <ComGoogleCumulusCommonIndexIdbAdapter_TransactionRequest, NSObject, JavaObject>
- (ComGoogleCumulusCommonIndexIdbAdapter_Transaction_ModeEnum *)getMode;
- (id <ComGoogleCumulusCommonIndexIdbAdapter_ObjectStore>)objectStoreWithNSString:(NSString *)arg1;
@end
