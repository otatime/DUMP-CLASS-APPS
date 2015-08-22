//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTContactData.h"

@class JBTISmartMailSmartMailComponentContextImpl, JBTISmartMailSmartMailTranslationHelper, JCSAssignedId, JavaUtilLinkedHashSet, NSString;

@interface JBTISmartMailContactDataImpl : NSObject <JBTContactData>
{
    NSString *name_;
    NSString *originalTypedName_;
    id <JavaUtilList> actionTypes_;
    JavaUtilLinkedHashSet *phoneNumbers_;
    JavaUtilLinkedHashSet *emailAddresses_;
    JBTISmartMailSmartMailComponentContextImpl *smartMailContext_;
    JCSAssignedId *assignedId_;
    id <JBTEmailAddress> contactId_;
    JBTISmartMailSmartMailTranslationHelper *translator_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_translator_;
+ (id)__annotations_contactId_;
+ (id)__annotations_assignedId_;
+ (id)__annotations_getPrimaryAction;
+ (id)__annotations_getContactId;
+ (id)__annotations_initWithNSString_withNSString_withJavaUtilList_withJavaUtilList_withJavaUtilList_withJBTISmartMailSmartMailComponentContextImpl_withJCSAssignedId_withJBTEmailAddress_withJBTISmartMailSmartMailTranslationHelper__params;
+ (id)__annotations_createContactDataWithNameAndIdWithJBTISmartMailSmartMailTranslationHelper_withNSString_withNSString_withJBTISmartMailSmartMailComponentContextImpl_withJCSAssignedId_withJBTEmailAddress__params;
+ (id)createContactDataWithNameAndIdWithJBTISmartMailSmartMailTranslationHelper:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withJBTISmartMailSmartMailComponentContextImpl:(id)arg4 withJCSAssignedId:(id)arg5 withJBTEmailAddress:(id)arg6;
- (void)dealloc;
- (id)getTagTranslatedEmailAddressesWithJavaUtilList:(id)arg1;
- (id)getTagTranslatedPhoneNumbersWithJavaUtilList:(id)arg1;
- (id)getTranslatedEmailAddressTagLabelWithJBTEmailAddress:(id)arg1;
- (id)getTranslatedPhoneNumberTagLabelWithJBTPhoneNumber:(id)arg1;
- (void)addEmailRelatedActionWithJBTSmartMailAction_ActionTypeEnum:(id)arg1 withJavaUtilList:(id)arg2;
- (void)addPhoneRelatedActionWithJBTSmartMailAction_ActionTypeEnum:(id)arg1 withJavaUtilList:(id)arg2;
- (id)getContactTitleSegments;
- (id)getOriginalTypedName;
- (id)transformToPhoneAssistanceContactDataWithJavaUtilList:(id)arg1 withJBTPhoneNumber:(id)arg2;
- (id)transformToEmailAssistanceContactDataWithJBTEmailAddress:(id)arg1;
- (id)getEmailAddresses;
- (id)getPhoneNumbers;
- (id)getActionTypes;
- (id)getPrimaryAction;
- (id)getContactId;
- (id)getName;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withJavaUtilList:(id)arg3 withJavaUtilList:(id)arg4 withJavaUtilList:(id)arg5 withJBTISmartMailSmartMailComponentContextImpl:(id)arg6 withJCSAssignedId:(id)arg7 withJBTEmailAddress:(id)arg8 withJBTISmartMailSmartMailTranslationHelper:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
