//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBGraphQLQuery, NSString;

@interface FBGraphQLQueryExportedField : NSObject
{
    FBGraphQLQuery *_targetQuery;
    NSString *_exportedFieldName;
    unsigned int _pluralMode;
    unsigned int _fallbackBehavior;
}

@property(readonly, nonatomic) unsigned int fallbackBehavior; // @synthesize fallbackBehavior=_fallbackBehavior;
@property(readonly, nonatomic) unsigned int pluralMode; // @synthesize pluralMode=_pluralMode;
@property(readonly, copy, nonatomic) NSString *exportedFieldName; // @synthesize exportedFieldName=_exportedFieldName;
@property(readonly, nonatomic) FBGraphQLQuery *targetQuery; // @synthesize targetQuery=_targetQuery;
- (id)initWithTargetQuery:(id)arg1 exportedFieldName:(id)arg2 pluralMode:(unsigned int)arg3 fallbackBehavior:(unsigned int)arg4;
- (id)init;

@end
