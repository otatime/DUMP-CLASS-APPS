//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCommonBaseOptional, JBTIContactsPerContactPhotoUrls_Factory;

@interface JBTISearchSearchContactImpl_Factory : NSObject
{
    JBTIContactsPerContactPhotoUrls_Factory *photoUrlsFactory_;
    ComGoogleCommonBaseOptional *multiLoginUrlRewriter_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)getIntendedContactInfoWithComGoogleAppsBigtopServicesSearchBigTopSearchContactIntent:(id)arg1 withComGoogleCumulusCommonCollectMultiMap:(id)arg2;
+ (id)findPrimaryEmailWithJavaUtilList:(id)arg1;
+ (id)buildContactReferenceMapWithComGoogleAppsBigtopServicesSearchBigTopSearchContact:(id)arg1;
- (void)dealloc;
- (id)fromBigTopSearchContactWithJBTId:(id)arg1 withComGoogleAppsBigtopServicesSearchBigTopSearchContact:(id)arg2 withComGoogleAppsBigtopServicesSearchBigTopSearchContactIntent:(id)arg3 withNSString:(id)arg4;
- (id)initWithJBTIContactsPerContactPhotoUrls_Factory:(id)arg1 withComGoogleCommonBaseOptional:(id)arg2;

@end
