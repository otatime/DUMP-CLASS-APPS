//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTAddress.h"

@class JBTCCachedValue, JCSAddress, NSString;

@interface JBTICommonAddressImpl : NSObject <JBTAddress>
{
    JBTCCachedValue *mapImageCachedValue_;
    JCSAddress *addressProto_;
    JBTCCachedValue *addressStr_;
    BOOL includeNameInFormattedString_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getMapImageUrlWithInt_withInt_;
+ (id)__annotations_getMapImage;
+ (id)__annotations_getLongitude;
+ (id)__annotations_getLatitude;
+ (id)__annotations_getPostalCode;
+ (id)__annotations_getCountry;
+ (id)__annotations_getRegion;
+ (id)__annotations_getLocality;
+ (id)__annotations_getStreetAddress;
+ (id)__annotations_getName;
- (void)dealloc;
- (id)getProto;
- (id)toBuilder;
- (id)getMapImageUrlWithInt:(int)arg1 withInt:(int)arg2;
- (id)getMapImage;
- (id)getFormattedAddress;
- (id)getLongitude;
- (id)getLatitude;
- (id)getPostalCode;
- (id)getCountry;
- (id)getRegion;
- (id)getLocality;
- (id)getStreetAddress;
- (id)getName;
- (id)initWithJCSAddress:(id)arg1 withBoolean:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
