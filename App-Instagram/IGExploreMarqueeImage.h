//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSURL;

@interface IGExploreMarqueeImage : NSObject <NSCoding>
{
    NSURL *_url;
    struct CGSize _size;
}

@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 url:(id)arg2;
- (id)init;

@end
