//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLModelObject.h"

@class NSArray, NSString;

@interface CBLUserEducationExperienceData : CBLModelObject
{
    NSArray *_steps;
    int _trigger;
    NSString *_flyoutText;
}

+ (id)propertyAliases;
+ (id)propertyArrayElementClasses;
@property(copy, nonatomic) NSString *flyoutText; // @synthesize flyoutText=_flyoutText;
@property(nonatomic) int trigger; // @synthesize trigger=_trigger;
@property(retain, nonatomic) NSArray *steps; // @synthesize steps=_steps;
- (void).cxx_destruct;

@end

