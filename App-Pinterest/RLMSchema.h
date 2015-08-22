//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSMutableDictionary;

@interface RLMSchema : NSObject <NSCopying>
{
    NSArray *_objectSchema;
    NSMutableDictionary *_objectSchemaByName;
}

+ (Class)classForString:(id)arg1;
+ (id)dynamicSchemaFromRealm:(id)arg1;
+ (id)sharedSchema;
+ (void)initialize;
@property(retain, nonatomic) NSMutableDictionary *objectSchemaByName; // @synthesize objectSchemaByName=_objectSchemaByName;
@property(copy, nonatomic) NSArray *objectSchema; // @synthesize objectSchema=_objectSchema;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToSchema:(id)arg1;
- (id)shallowCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)schemaForClassName:(id)arg1;

@end

