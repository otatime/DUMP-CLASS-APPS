//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface FBMagicStoryTemplateLayout : NSObject <NSCopying>
{
    NSArray *_templates;
    NSArray *_squarePattern;
    unsigned int _templateOffset;
}

+ (id)templateLayoutWithCollection:(id)arg1;
@property(nonatomic) unsigned int templateOffset; // @synthesize templateOffset=_templateOffset;
@property(copy, nonatomic) NSArray *squarePattern; // @synthesize squarePattern=_squarePattern;
@property(copy, nonatomic) NSArray *templates; // @synthesize templates=_templates;
- (void).cxx_destruct;
- (id)collectionByReorderingAssetsForLayout:(id)arg1;
- (id)templateLayoutWithRemovalAtIndex:(unsigned int)arg1;
- (id)templateLayoutWithOrderedDictionaryOfValidIndexPathsAndSizes:(id)arg1;
- (id)templateLayoutWithCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTemplates:(id)arg1 templateOffset:(unsigned int)arg2;
- (id)init;

@end

