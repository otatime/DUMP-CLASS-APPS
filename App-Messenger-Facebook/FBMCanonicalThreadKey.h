//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface FBMCanonicalThreadKey : FBValueObject <NSCopying, NSCoding>
{
    NSString *_userId;
}

@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)initWithUserId:(id)arg1;

@end

