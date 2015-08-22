//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLModelObject.h"

@class NSMutableArray, NSString;

@interface CBLPinPickSection : CBLModelObject
{
    NSString *_sectionTypeString;
    NSString *_title;
    NSString *_detail;
    NSString *_imageUrl;
    NSMutableArray *_elements;
}

+ (id)dynamicProperties;
+ (id)propertyArrayElementClasses;
+ (id)propertyAliases;
@property(retain, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *sectionTypeString; // @synthesize sectionTypeString=_sectionTypeString;
- (void).cxx_destruct;
@property(readonly, nonatomic) int sectionType;

@end
