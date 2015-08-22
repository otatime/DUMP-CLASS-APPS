//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface IGRaindropSearchQuery : TBaseStruct <TBase, NSCoding>
{
    NSString *__thrift_searchQueryText;
    double __thrift_timestamp;
    long long __thrift_rttInMillis;
    BOOL __thrift_searchQueryText_set;
    BOOL __thrift_timestamp_set;
    BOOL __thrift_rttInMillis_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetRttInMillis;
- (BOOL)rttInMillisIsSet;
@property(nonatomic) long long rttInMillis;
- (void)unsetTimestamp;
- (BOOL)timestampIsSet;
@property(nonatomic) double timestamp;
- (void)unsetSearchQueryText;
- (BOOL)searchQueryTextIsSet;
@property(retain, nonatomic) NSString *searchQueryText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchQueryText:(id)arg1 timestamp:(double)arg2 rttInMillis:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
