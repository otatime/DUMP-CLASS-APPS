//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray;

@interface MNComposerExtensionOrder : FBValueObject <NSCopying, NSCoding>
{
    NSArray *_orderedExtensionIdentifiers;
}

@property(readonly, copy, nonatomic) NSArray *orderedExtensionIdentifiers; // @synthesize orderedExtensionIdentifiers=_orderedExtensionIdentifiers;
- (void).cxx_destruct;
- (id)initWithOrderedExtensionIdentifiers:(id)arg1;

@end

