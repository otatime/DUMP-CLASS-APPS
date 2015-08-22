//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSArray;

@interface MNCommerceOrderListViewModel : FBValueObject <NSCopying>
{
    NSArray *_orderList;
    unsigned int _totalCount;
}

@property(readonly, nonatomic) unsigned int totalCount; // @synthesize totalCount=_totalCount;
@property(readonly, copy, nonatomic) NSArray *orderList; // @synthesize orderList=_orderList;
- (void).cxx_destruct;
- (id)initWithOrderList:(id)arg1 totalCount:(unsigned int)arg2;

@end

