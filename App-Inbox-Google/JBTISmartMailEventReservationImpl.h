//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTISmartMailAbstractSmartMailComponent.h"

#import "JBTEventReservation.h"
#import "JBTISmartMailProtoBasedComponent.h"

@class JBTCCachedValue, JBTISmartMailGenericSmartMailHelper, JCSEventReservation, NSString;

@interface JBTISmartMailEventReservationImpl : JBTISmartMailAbstractSmartMailComponent <JBTEventReservation, JBTISmartMailProtoBasedComponent>
{
    JBTCCachedValue *seatingInformation_;
    JBTCCachedValue *seatingElements_;
    JBTCCachedValue *bookingAgent_;
    JCSEventReservation *eventReservationProto_;
    JBTISmartMailGenericSmartMailHelper *genericSmartMailHelper_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getSeatingInformation;
+ (id)__annotations_getSeat;
+ (id)__annotations_getReservationNumber;
+ (id)__annotations_getBookingAgent;
+ (id)__annotations_initWithJCSEventReservation_withComGoogleCumulusCommonUtilClock_withJBTISmartMailSmartMailCommandApplier_withJBTISmartMailSmartMailComponentContextImpl_withJavaUtilList_withJBTOrganization__params;
- (void)dealloc;
- (id)getSeatingInformation;
- (id)getSeat;
- (void)addSeatingElementPartWithInt:(int)arg1 withJBTEventReservation_SeatingElement_TypeEnum:(id)arg2 withNSString:(id)arg3 withComGoogleCumulusCommonCollectImmutableList_Builder:(id)arg4;
- (BOOL)hasLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (id)getLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (BOOL)usesLegacyTypedSmartmailProto;
- (id)getSortTime;
- (id)getProto;
- (id)getSeatingElements;
- (int)getNumberSeats;
- (void)addAdditionalActionsWithComGoogleCumulusCommonCollectImmutableList_Builder:(id)arg1;
- (id)getEvent;
- (id)getReservationNumber;
- (id)getBookingAgent;
- (id)initWithJCSEventReservation:(id)arg1 withComGoogleCumulusCommonUtilClock:(id)arg2 withJBTISmartMailSmartMailCommandApplier:(id)arg3 withJBTISmartMailSmartMailComponentContextImpl:(id)arg4 withJavaUtilList:(id)arg5 withJBTOrganization:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

