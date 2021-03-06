//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTSmartMailComponent.h"

@class JBTISmartMailSmartMailComponentContextImpl, JBTSmartMailComponent_TypeEnum, JCSAssignedId, NSString;

@interface JBTISmartMailAbstractSmartMailComponent : NSObject <JBTSmartMailComponent>
{
    JCSAssignedId *assignedId_;
    id <JavaUtilList> actionProtos_;
    id <JBTISmartMailSmartMailCommandApplier> commandApplier_;
    JBTISmartMailSmartMailComponentContextImpl *smartMailContextImpl_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    JBTSmartMailComponent_TypeEnum *type_;
    id <JBTOrganization> publisher_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_assignedId_;
+ (id)__annotations_publisher_;
+ (id)__annotations_getStructuredLink;
+ (id)__annotations_getPublisher;
+ (id)__annotations_initWithJBTSmartMailComponent_TypeEnum_withComGoogleCumulusCommonUtilClock_withJBTISmartMailSmartMailCommandApplier_withJBTISmartMailSmartMailComponentContextImpl_withJavaUtilList_withJCSAssignedId_withJBTOrganization__params;
+ (void)initialize;
- (void)dealloc;
- (BOOL)usesLegacyTypedSmartmailProto;
- (void)recordViewWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (id)getSortTime;
- (id)getContext;
- (void)addAdditionalActionsWithComGoogleCumulusCommonCollectImmutableList_Builder:(id)arg1;
- (id)getStructuredLink;
- (id)getActions;
- (id)getActionsForViewWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (id)getPublisher;
- (id)getType;
- (id)initWithJBTSmartMailComponent_TypeEnum:(id)arg1 withComGoogleCumulusCommonUtilClock:(id)arg2 withJBTISmartMailSmartMailCommandApplier:(id)arg3 withJBTISmartMailSmartMailComponentContextImpl:(id)arg4 withJavaUtilList:(id)arg5 withJCSAssignedId:(id)arg6 withJBTOrganization:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

