//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBCompositionBase.h"

@class NSArray, NSString;

@interface FBCompositionAnimation : FBCompositionBase
{
    NSString *_name;
    NSArray *_properties;
}

@property(readonly, copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)arg1 properties:(id)arg2;

@end
