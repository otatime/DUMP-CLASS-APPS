//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FBConfigurableResponseProcessing <NSObject>
- (void)setContentInterpreter:(id <FBContentInterpreting>)arg1;
- (void)addErrorHook:(id <FBErrorHooking>)arg1;
- (void)addResponseHook:(id <FBResponseHooking>)arg1;
- (void)addContentHook:(id <FBContentHooking>)arg1;
- (void)addDataHook:(id <FBDataHooking>)arg1;
- (void)addContentValidator:(id <FBContentValidating>)arg1;
- (void)addDataValidator:(id <FBDataValidating>)arg1;
@end

