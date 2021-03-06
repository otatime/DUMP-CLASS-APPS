//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface MNThreadContext : FBValueObject <NSCopying>
{
    NSDictionary *_detailItems;
    NSString *_contextString;
}

@property(readonly, copy, nonatomic) NSString *contextString; // @synthesize contextString=_contextString;
@property(readonly, copy, nonatomic) NSDictionary *detailItems; // @synthesize detailItems=_detailItems;
- (void).cxx_destruct;
- (id)initWithDetailItems:(id)arg1 contextString:(id)arg2;

@end

