//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTISmartMailSmartMailComponentContextImpl, JBTISmartMailSmartMailServices;

@interface JBTISmartMailTaskAssistanceSmartMailFactory : NSObject
{
    id <ComGoogleCumulusCommonUtilClock> clock_;
    id <JBTTimeHelper> timeHelper_;
    id <JBTISmartMailSmartMailCommandApplier> commandApplier_;
    JBTISmartMailSmartMailComponentContextImpl *defaultSmartMailContext_;
    JBTISmartMailSmartMailServices *smartMailServices_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_maybeAddSnoozeActionFromDueLocationWithComGooglePersonalizationAssistAnnotateApiTaskAssistance_withJavaUtilList_withJBTISmartMailSmartMailComponentContextImpl_withJBTSnoozeConfig_Factory_withJBTICommonLocationAliasConverter__params;
+ (id)__annotations_maybeAddSnoozeActionFromDueTimeWithComGooglePersonalizationAssistAnnotateApiTaskAssistance_withJavaUtilList_withJBTISmartMailSmartMailComponentContextImpl_withJBTSnoozeConfig_Factory__params;
+ (id)__annotations_maybeAddRecurringSnoozeActionFromDueTimeWithComGooglePersonalizationAssistAnnotateApiRecurringDeadlineAction_withJavaUtilList_withJBTISmartMailSmartMailComponentContextImpl_withJBTSnoozeConfig_Factory__params;
+ (id)__annotations_convertFlightStatusWithComGooglePersonalizationAssistAnnotateApiFlightStatusAssistance_withComGooglePersonalizationAssistAnnotateApiViewUrlAction__params;
+ (id)__annotations_convertFlightStatusWithComGooglePersonalizationAssistAnnotateApiFlightStatusAssistance_withComGooglePersonalizationAssistAnnotateApiViewUrlAction_;
+ (id)__annotations_convertFinanceAssistanceWithComGooglePersonalizationAssistAnnotateApiFinanceAssistance_withComGooglePersonalizationAssistAnnotateApiViewUrlAction__params;
+ (id)__annotations_convertWatchYoutubeActionWithComGooglePersonalizationAssistAnnotateApiWatchYoutubeAction_;
+ (id)__annotations_convertOrganizationWithComGooglePersonalizationAssistAnnotateApiOrganizationAssistance_withJBTISmartMailSmartMailComponentContextImpl_withComGooglePersonalizationAssistAnnotateApiCallAction__params;
+ (id)__annotations_getContactIdOrNullWithComGooglePersonalizationAssistAnnotateApiCallAction_;
+ (id)__annotations_getContactIdOrNullWithComGooglePersonalizationAssistAnnotateApiEmailAction_;
+ (id)__annotations_convertSmartMailApiEmailAddressToProtoEmailAddressWithJBTEmailAddress__params;
+ (id)__annotations_convertSmartMailApiEmailAddressToProtoEmailAddressWithJBTEmailAddress_;
+ (id)__annotations_convertTaskAssistEmailAddressToSmartMailApiEmailAddressWithComGooglePersonalizationAssistAnnotateApiEmailAddress__params;
+ (id)__annotations_convertTaskAssistEmailAddressToSmartMailApiEmailAddressWithComGooglePersonalizationAssistAnnotateApiEmailAddress_;
+ (id)__annotations_createComponentsWithComGooglePersonalizationAssistAnnotateApiTaskAssistance_withJBTTaskSmartMailComponentContext_withJBTSnoozeConfig_Factory_withJBTICommonLocationAliasConverter__params;
+ (id)createSmartMailAssignedId;
+ (id)convertFlightStatusCodeWithComGooglePersonalizationAssistAnnotateStatusCodeEnum:(id)arg1;
- (void)dealloc;
- (BOOL)isFutureTimeWithLong:(long long)arg1;
- (void)maybeAddSnoozeActionFromDueLocationWithComGooglePersonalizationAssistAnnotateApiTaskAssistance:(id)arg1 withJavaUtilList:(id)arg2 withJBTISmartMailSmartMailComponentContextImpl:(id)arg3 withJBTSnoozeConfig_Factory:(id)arg4 withJBTICommonLocationAliasConverter:(id)arg5;
- (void)maybeAddSnoozeActionFromDueTimeWithComGooglePersonalizationAssistAnnotateApiTaskAssistance:(id)arg1 withJavaUtilList:(id)arg2 withJBTISmartMailSmartMailComponentContextImpl:(id)arg3 withJBTSnoozeConfig_Factory:(id)arg4;
- (void)maybeAddRecurringSnoozeActionFromDueTimeWithComGooglePersonalizationAssistAnnotateApiRecurringDeadlineAction:(id)arg1 withJavaUtilList:(id)arg2 withJBTISmartMailSmartMailComponentContextImpl:(id)arg3 withJBTSnoozeConfig_Factory:(id)arg4;
- (id)getNextUrlActionsWithInt:(int)arg1 withJavaUtilList:(id)arg2 withInt:(int)arg3;
- (id)convertWeatherAssistanceWithComGooglePersonalizationAssistAnnotateApiWeatherAssistance:(id)arg1;
- (id)convertTimeWithComGooglePersonalizationAssistAnnotateApiTime:(id)arg1;
- (id)convertReturnProductAssistanceWithComGooglePersonalizationAssistAnnotateApiReturnProductAssistance:(id)arg1 withJavaUtilList:(id)arg2;
- (id)convertPreviewUrlActionWithComGooglePersonalizationAssistAnnotateApiAssistance:(id)arg1;
- (void)addNavigateActionWithJCSAddress:(id)arg1 withJavaUtilList:(id)arg2;
- (id)convertImageWithComGooglePersonalizationAssistAnnotateApiImage:(id)arg1;
- (id)convertFlightStatusWithComGooglePersonalizationAssistAnnotateApiFlightStatusAssistance:(id)arg1 withComGooglePersonalizationAssistAnnotateApiViewUrlAction:(id)arg2;
- (id)convertFinanceAssistanceWithComGooglePersonalizationAssistAnnotateApiFinanceAssistance:(id)arg1 withComGooglePersonalizationAssistAnnotateApiViewUrlAction:(id)arg2;
- (BOOL)driveDocumentChipViewEnabled;
- (BOOL)urlActionHasDriveAttributesWithComGooglePersonalizationAssistAnnotateApiViewUrlAction:(id)arg1;
- (id)convertDriveDocumentUrlActionWithComGooglePersonalizationAssistAnnotateApiViewUrlAction:(id)arg1 withJBTISmartMailSmartMailComponentContextImpl:(id)arg2;
- (id)convertDeadlineAssistanceWithComGooglePersonalizationAssistAnnotateApiDeadlineAssistance:(id)arg1;
- (id)convertBillAssistanceWithComGooglePersonalizationAssistAnnotateApiBillAssistance:(id)arg1;
- (BOOL)isValidVideoWithComGooglePersonalizationAssistAnnotateApiWatchYoutubeAction:(id)arg1;
- (id)convertWatchYoutubeActionWithComGooglePersonalizationAssistAnnotateApiWatchYoutubeAction:(id)arg1;
- (id)formatStreetAddressWithComGooglePersonalizationAssistAnnotateApiAddress:(id)arg1;
- (id)convertOrganizationWithComGooglePersonalizationAssistAnnotateApiOrganizationAssistance:(id)arg1 withJBTISmartMailSmartMailComponentContextImpl:(id)arg2 withComGooglePersonalizationAssistAnnotateApiCallAction:(id)arg3;
- (id)convertContactTagWithComGooglePersonalizationAssistAnnotateApiContactTag:(id)arg1;
- (id)convertPhoneNumberWithComGooglePersonalizationAssistAnnotateApiPhoneNumber:(id)arg1;
- (id)convertEmailAddressWithComGooglePersonalizationAssistAnnotateApiEmailAddress:(id)arg1;
- (id)getContactIdOrNullWithComGooglePersonalizationAssistAnnotateApiCallAction:(id)arg1;
- (id)getContactIdOrNullWithComGooglePersonalizationAssistAnnotateApiEmailAction:(id)arg1;
- (BOOL)addSingleEmailActionWithComGooglePersonalizationAssistAnnotateApiEmailAction:(id)arg1 withJavaUtilList:(id)arg2 withJBTISmartMailSmartMailComponentContextImpl:(id)arg3;
- (void)convertEmailActionWithComGooglePersonalizationAssistAnnotateApiEmailAction:(id)arg1 withJCSPerson_Builder:(id)arg2;
- (void)convertCallActionWithComGooglePersonalizationAssistAnnotateApiCallAction:(id)arg1 withJCSPerson_Builder:(id)arg2;
- (BOOL)addSingleSmsActionWithComGooglePersonalizationAssistAnnotateApiSmsAction:(id)arg1 withJavaUtilList:(id)arg2 withJBTISmartMailSmartMailComponentContextImpl:(id)arg3;
- (void)convertSmsActionWithComGooglePersonalizationAssistAnnotateApiSmsAction:(id)arg1 withJCSPerson_Builder:(id)arg2;
- (id)convertSmartMailApiEmailAddressToProtoEmailAddressWithJBTEmailAddress:(id)arg1;
- (id)convertTaskAssistEmailAddressToSmartMailApiEmailAddressWithComGooglePersonalizationAssistAnnotateApiEmailAddress:(id)arg1;
- (id)convertSmartMailApiPhoneNumberToProtoPhoneNumberWithJBTPhoneNumber:(id)arg1;
- (id)convertTaskAssistPhoneNumberToSmartMailApiPhoneNumberWithComGooglePersonalizationAssistAnnotateApiPhoneNumber:(id)arg1;
- (id)constructContactIdWithNSString:(id)arg1;
- (void)addSmsActionWithComGooglePersonalizationAssistAnnotateApiSmsAction:(id)arg1 withJavaUtilLinkedHashMap:(id)arg2 withJBTISmartMailSmartMailComponentContextImpl:(id)arg3;
- (void)addEmailActionWithComGooglePersonalizationAssistAnnotateApiEmailAction:(id)arg1 withJavaUtilLinkedHashMap:(id)arg2 withJBTISmartMailSmartMailComponentContextImpl:(id)arg3;
- (void)addCallActionWithComGooglePersonalizationAssistAnnotateApiCallAction:(id)arg1 withJavaUtilLinkedHashMap:(id)arg2 withJBTISmartMailSmartMailComponentContextImpl:(id)arg3;
- (BOOL)addSingleCallActionWithComGooglePersonalizationAssistAnnotateApiCallAction:(id)arg1 withJavaUtilList:(id)arg2 withJBTISmartMailSmartMailComponentContextImpl:(id)arg3;
- (void)addPickContactActionWithJavaUtilList:(id)arg1 withJBTISmartMailSmartMailComponentContextImpl:(id)arg2 withJavaUtilList:(id)arg3;
- (void)addUnambiguousContactActionWithJBTISmartMailContactDataImpl:(id)arg1 withJBTISmartMailSmartMailComponentContextImpl:(id)arg2 withJavaUtilList:(id)arg3;
- (BOOL)hasSinglePhoneNumberOrEmailAddressWithJBTISmartMailContactDataImpl:(id)arg1;
- (BOOL)hasMultiplePhoneNumbersOrEmailAddressesWithJBTISmartMailContactDataImpl:(id)arg1;
- (void)addContactActionsWithJavaUtilList:(id)arg1 withJBTISmartMailSmartMailComponentContextImpl:(id)arg2 withJavaUtilList:(id)arg3;
- (BOOL)disableMultipleContacts;
- (id)createComponentsWithComGooglePersonalizationAssistAnnotateApiTaskAssistance:(id)arg1 withJBTTaskSmartMailComponentContext:(id)arg2 withJBTSnoozeConfig_Factory:(id)arg3 withJBTICommonLocationAliasConverter:(id)arg4;
- (id)createComponentsWithComGooglePersonalizationAssistAnnotateApiTaskAssistance:(id)arg1;
- (id)getSmartMailServices;
- (id)initWithComGoogleCumulusCommonUtilClock:(id)arg1 withJBTTimeHelper:(id)arg2 withJBTISmartMailSmartMailCommandApplier:(id)arg3 withJBTISmartMailSmartMailServices:(id)arg4;

@end

