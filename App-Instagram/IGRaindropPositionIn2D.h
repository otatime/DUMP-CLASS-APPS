//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface IGRaindropPositionIn2D : TBaseStruct <TBase, NSCoding>
{
    long long __thrift_x;
    long long __thrift_y;
    BOOL __thrift_x_set;
    BOOL __thrift_y_set;
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetY;
- (BOOL)yIsSet;
@property(nonatomic) long long y;
- (void)unsetX;
- (BOOL)xIsSet;
@property(nonatomic) long long x;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithX:(long long)arg1 y:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

