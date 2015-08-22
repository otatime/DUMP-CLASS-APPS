//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBContactImporterAddressBookPersonProperty.h"

@class NSString;

@interface FBContactImporterAddressBookPersonInstantMessage : NSObject <FBContactImporterAddressBookPersonProperty>
{
    NSString *_service;
    NSString *_userName;
}

+ (id)propertyFromABLabelRef:(struct __CFString *)arg1 ABValueRef:(void *)arg2;
@property(readonly, copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, copy, nonatomic) NSString *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)_initWithLabel:(id)arg1 serviceDict:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)asStrings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

