//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary;

@interface PSPDFModel : NSObject <NSCoding, NSCopying>
{
}

+ (id)discoveredPropertyKeys;
+ (struct __CFSet *)cachedPropertyKeysWithReferentialEquality;
+ (id)propertyKeysWithReferentialEquality;
+ (id)propertyKeys;
+ (id)cachedPropertyKeySet;
+ (id)cachedPropertyKeys;
+ (void)enumeratePropertiesUsingBlock:(CDUnknownBlockType)arg1;
+ (id)modelWithDictionary:(id)arg1 error:(id *)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)encodingBehaviorsByPropertyKey;
+ (void)initialize;
+ (unsigned int)modelVersion;
+ (id)cachedEncodingBehaviorsByPropertyKey;
- (void)transferValuesFrom:(id)arg1 to:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)validate:(id *)arg1;
- (void)mergeValuesForKeysFromModel:(id)arg1;
- (void)mergeValueForKey:(id)arg1 fromModel:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)decodeAdditionalValues:(id)arg1 model:(unsigned int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned int)arg3;

@end
