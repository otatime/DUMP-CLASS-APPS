//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonBaseSupplier.h"

@class ComGoogleCumulusCommonConfigConfiguration, ComGoogleCumulusCommonConfigConfiguration_Key, NSString;

@interface ComGoogleCumulusCommonConfigConfiguration_ConfigSupplier : NSObject <ComGoogleCommonBaseSupplier>
{
    ComGoogleCumulusCommonConfigConfiguration *config_;
    ComGoogleCumulusCommonConfigConfiguration_Key *key_;
}

- (void)__javaClone;
- (void)dealloc;
- (id)get;
- (id)initWithComGoogleCumulusCommonConfigConfiguration:(id)arg1 withComGoogleCumulusCommonConfigConfiguration_Key:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
