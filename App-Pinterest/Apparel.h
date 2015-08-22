//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface Apparel : NSObject <TBase, NSCoding>
{
    int __gender;
    int __ageGroup;
    BOOL __gender_isset;
    BOOL __ageGroup_isset;
}

@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetAgeGroup;
- (BOOL)ageGroupIsSet;
@property(nonatomic, getter=ageGroup, setter=setAgeGroup:) int ageGroup;
- (void)unsetGender;
- (BOOL)genderIsSet;
@property(nonatomic, getter=gender, setter=setGender:) int gender;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGender:(int)arg1 ageGroup:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

