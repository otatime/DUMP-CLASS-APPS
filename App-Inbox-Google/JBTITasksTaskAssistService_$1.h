//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTICommonSapiCallback.h"

@class ComGooglePersonalizationAssistAnnotateApiAssistanceRequestData_Builder, JBTITasksTaskAssistService, NSString;

@interface JBTITasksTaskAssistService_$1 : NSObject <JBTICommonSapiCallback>
{
    JBTITasksTaskAssistService *this$0_;
    id <JBTICommonSapiSpan> val$locationAllowedSpan_;
    ComGooglePersonalizationAssistAnnotateApiAssistanceRequestData_Builder *val$assistBuilder_;
    id <JBTSpan> val$span_;
    id <JBTICommonSapiCallback> val$sapiCallback_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTITasksTaskAssistService:(id)arg1 withJBTICommonSapiSpan:(id)arg2 withComGooglePersonalizationAssistAnnotateApiAssistanceRequestData_Builder:(id)arg3 withJBTSpan:(id)arg4 withJBTICommonSapiCallback:(id)arg5;
- (void)onErrorWithJBTError:(id)arg1;
- (void)onSuccessWithId:(id)arg1 withJBTSpan:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

