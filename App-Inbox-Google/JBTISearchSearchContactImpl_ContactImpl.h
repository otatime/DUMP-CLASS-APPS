//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTContact.h"

@class JBTISearchSearchContactImpl, NSString;

@interface JBTISearchSearchContactImpl_ContactImpl : NSObject <JBTContact>
{
    JBTISearchSearchContactImpl *this$0_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getContactPhotoUrl;
+ (id)__annotations_getPrimaryEmail;
- (void)dealloc;
- (id)initWithJBTISearchSearchContactImpl:(id)arg1;
- (id)getContactPhotoUrl;
- (id)getRank;
- (id)getLocations;
- (id)getPhoneNumbers;
- (id)getEmailAddresses;
- (BOOL)hasProfilePhotoUrl;
- (BOOL)hasBrandPhotoUrl;
- (id)getContactReferences;
- (id)getPhotoUrlWithInt:(int)arg1;
- (id)getPrimaryEmail;
- (id)getFullName;
- (id)getId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

