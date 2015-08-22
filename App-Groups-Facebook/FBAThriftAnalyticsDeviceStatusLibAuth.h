//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface FBAThriftAnalyticsDeviceStatusLibAuth : TBaseStruct <TBase, NSCoding>
{
    unsigned char __thrift_photoLibraryAuthorization;
    BOOL __thrift_photoLibraryAuthorization_set;
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetPhotoLibraryAuthorization;
- (BOOL)photoLibraryAuthorizationIsSet;
@property(nonatomic) unsigned char photoLibraryAuthorization;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhotoLibraryAuthorization:(unsigned char)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
