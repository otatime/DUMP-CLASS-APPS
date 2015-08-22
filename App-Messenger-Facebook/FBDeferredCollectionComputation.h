//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBImmutableList;

@interface FBDeferredCollectionComputation : NSObject
{
    id _baseCollection;
    unsigned int _baseCollectionType;
    unsigned int _numberToTake;
    FBImmutableList *_operations;
}

@property(readonly, copy, nonatomic) FBImmutableList *operations; // @synthesize operations=_operations;
@property(readonly, nonatomic) unsigned int numberToTake; // @synthesize numberToTake=_numberToTake;
@property(readonly, nonatomic) unsigned int baseCollectionType; // @synthesize baseCollectionType=_baseCollectionType;
@property(readonly, copy, nonatomic) id baseCollection; // @synthesize baseCollection=_baseCollection;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBaseCollection:(id)arg1 baseCollectionType:(unsigned int)arg2 numberToTake:(unsigned int)arg3 operations:(id)arg4;

@end

