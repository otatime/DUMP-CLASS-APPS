//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSArray;

@interface MNBatchImagesFetchRequest : FBValueObject <NSCopying>
{
    NSArray *_imageURLs;
}

@property(readonly, copy, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
- (void).cxx_destruct;
- (id)initWithImageURLs:(id)arg1;

@end

