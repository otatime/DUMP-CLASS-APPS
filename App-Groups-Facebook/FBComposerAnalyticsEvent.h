//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface FBComposerAnalyticsEvent : FBValueObject <NSCopying>
{
    NSString *_name;
    NSString *_module;
    NSDictionary *_extra;
}

@property(readonly, copy, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(readonly, copy, nonatomic) NSString *module; // @synthesize module=_module;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 module:(id)arg2 extra:(id)arg3;

@end
