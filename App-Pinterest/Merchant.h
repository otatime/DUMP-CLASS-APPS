//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class FeedProfile, NSMutableDictionary, NSMutableSet, NSString, OmsProfile;

@interface Merchant : NSObject <TBase, NSCoding>
{
    long long __id;
    NSString *__externalId;
    NSString *__displayName;
    NSString *__faviconLink;
    NSString *__homepage;
    long long __userId;
    long long __platformPartnerId;
    long long __createdAt;
    long long __updatedAt;
    BOOL __isActive;
    FeedProfile *__feedProfile;
    NSString *__faviconImageSignature;
    OmsProfile *__omsProfile;
    NSMutableDictionary *__paymentReceiverProfileIds;
    NSString *__merchantImgLink;
    NSString *__customerServiceEmail;
    NSString *__customerServicePhone;
    NSString *__returnPolicyLink;
    int __approvalStatus;
    NSString *__approvalStatusRationale;
    NSMutableDictionary *__merchantStats;
    NSMutableSet *__dirtyFields;
    BOOL __id_isset;
    BOOL __externalId_isset;
    BOOL __displayName_isset;
    BOOL __faviconLink_isset;
    BOOL __homepage_isset;
    BOOL __userId_isset;
    BOOL __platformPartnerId_isset;
    BOOL __createdAt_isset;
    BOOL __updatedAt_isset;
    BOOL __isActive_isset;
    BOOL __feedProfile_isset;
    BOOL __faviconImageSignature_isset;
    BOOL __omsProfile_isset;
    BOOL __paymentReceiverProfileIds_isset;
    BOOL __merchantImgLink_isset;
    BOOL __customerServiceEmail_isset;
    BOOL __customerServicePhone_isset;
    BOOL __returnPolicyLink_isset;
    BOOL __approvalStatus_isset;
    BOOL __approvalStatusRationale_isset;
    BOOL __merchantStats_isset;
    BOOL __dirtyFields_isset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetDirtyFields;
- (BOOL)dirtyFieldsIsSet;
@property(retain, nonatomic, getter=dirtyFields, setter=setDirtyFields:) NSMutableSet *dirtyFields;
- (void)unsetMerchantStats;
- (BOOL)merchantStatsIsSet;
@property(retain, nonatomic, getter=merchantStats, setter=setMerchantStats:) NSMutableDictionary *merchantStats;
- (void)unsetApprovalStatusRationale;
- (BOOL)approvalStatusRationaleIsSet;
@property(retain, nonatomic, getter=approvalStatusRationale, setter=setApprovalStatusRationale:) NSString *approvalStatusRationale;
- (void)unsetApprovalStatus;
- (BOOL)approvalStatusIsSet;
@property(nonatomic, getter=approvalStatus, setter=setApprovalStatus:) int approvalStatus;
- (void)unsetReturnPolicyLink;
- (BOOL)returnPolicyLinkIsSet;
@property(retain, nonatomic, getter=returnPolicyLink, setter=setReturnPolicyLink:) NSString *returnPolicyLink;
- (void)unsetCustomerServicePhone;
- (BOOL)customerServicePhoneIsSet;
@property(retain, nonatomic, getter=customerServicePhone, setter=setCustomerServicePhone:) NSString *customerServicePhone;
- (void)unsetCustomerServiceEmail;
- (BOOL)customerServiceEmailIsSet;
@property(retain, nonatomic, getter=customerServiceEmail, setter=setCustomerServiceEmail:) NSString *customerServiceEmail;
- (void)unsetMerchantImgLink;
- (BOOL)merchantImgLinkIsSet;
@property(retain, nonatomic, getter=merchantImgLink, setter=setMerchantImgLink:) NSString *merchantImgLink;
- (void)unsetPaymentReceiverProfileIds;
- (BOOL)paymentReceiverProfileIdsIsSet;
@property(retain, nonatomic, getter=paymentReceiverProfileIds, setter=setPaymentReceiverProfileIds:) NSMutableDictionary *paymentReceiverProfileIds;
- (void)unsetOmsProfile;
- (BOOL)omsProfileIsSet;
@property(retain, nonatomic, getter=omsProfile, setter=setOmsProfile:) OmsProfile *omsProfile;
- (void)unsetFaviconImageSignature;
- (BOOL)faviconImageSignatureIsSet;
@property(retain, nonatomic, getter=faviconImageSignature, setter=setFaviconImageSignature:) NSString *faviconImageSignature;
- (void)unsetFeedProfile;
- (BOOL)feedProfileIsSet;
@property(retain, nonatomic, getter=feedProfile, setter=setFeedProfile:) FeedProfile *feedProfile;
- (void)unsetIsActive;
- (BOOL)isActiveIsSet;
@property(nonatomic, getter=isActive, setter=setIsActive:) BOOL isActive;
- (void)unsetUpdatedAt;
- (BOOL)updatedAtIsSet;
@property(nonatomic, getter=updatedAt, setter=setUpdatedAt:) long long updatedAt;
- (void)unsetCreatedAt;
- (BOOL)createdAtIsSet;
@property(nonatomic, getter=createdAt, setter=setCreatedAt:) long long createdAt;
- (void)unsetPlatformPartnerId;
- (BOOL)platformPartnerIdIsSet;
@property(nonatomic, getter=platformPartnerId, setter=setPlatformPartnerId:) long long platformPartnerId;
- (void)unsetUserId;
- (BOOL)userIdIsSet;
@property(nonatomic, getter=userId, setter=setUserId:) long long userId;
- (void)unsetHomepage;
- (BOOL)homepageIsSet;
@property(retain, nonatomic, getter=homepage, setter=setHomepage:) NSString *homepage;
- (void)unsetFaviconLink;
- (BOOL)faviconLinkIsSet;
@property(retain, nonatomic, getter=faviconLink, setter=setFaviconLink:) NSString *faviconLink;
- (void)unsetDisplayName;
- (BOOL)displayNameIsSet;
@property(retain, nonatomic, getter=displayName, setter=setDisplayName:) NSString *displayName;
- (void)unsetExternalId;
- (BOOL)externalIdIsSet;
@property(retain, nonatomic, getter=externalId, setter=setExternalId:) NSString *externalId;
- (void)unsetId;
- (BOOL)idIsSet;
@property(nonatomic, getter=id, setter=setId:) long long id;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithId:(long long)arg1 externalId:(id)arg2 displayName:(id)arg3 faviconLink:(id)arg4 homepage:(id)arg5 userId:(long long)arg6 platformPartnerId:(long long)arg7 createdAt:(long long)arg8 updatedAt:(long long)arg9 isActive:(BOOL)arg10 feedProfile:(id)arg11 faviconImageSignature:(id)arg12 omsProfile:(id)arg13 paymentReceiverProfileIds:(id)arg14 merchantImgLink:(id)arg15 customerServiceEmail:(id)arg16 customerServicePhone:(id)arg17 returnPolicyLink:(id)arg18 approvalStatus:(int)arg19 approvalStatusRationale:(id)arg20 merchantStats:(id)arg21 dirtyFields:(id)arg22;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

