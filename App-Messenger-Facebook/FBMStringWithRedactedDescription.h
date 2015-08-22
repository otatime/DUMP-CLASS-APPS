//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface FBMStringWithRedactedDescription : NSObject <NSCoding, NSCopying>
{
    NSString *_rawContentValueOnlyToBeVisibleToUser;
}

@property(readonly, copy, nonatomic) NSString *rawContentValueOnlyToBeVisibleToUser; // @synthesize rawContentValueOnlyToBeVisibleToUser=_rawContentValueOnlyToBeVisibleToUser;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRawContentValueOnlyToBeVisibleToUser:(id)arg1;

@end

