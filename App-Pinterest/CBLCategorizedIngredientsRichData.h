//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLModelObject.h"

@class NSArray, NSString;

@interface CBLCategorizedIngredientsRichData : CBLModelObject
{
    NSString *_category;
    NSArray *_ingredients;
}

+ (id)propertyArrayElementClasses;
+ (id)propertyAliases;
@property(readonly, nonatomic) NSArray *ingredients; // @synthesize ingredients=_ingredients;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
- (void).cxx_destruct;

@end

