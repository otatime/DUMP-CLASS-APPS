//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContent.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface IGDirectShareHashtag : IGDirectContent <NSCoding>
{
    NSString *_hashtagName;
    unsigned int _mediaCount;
    NSArray *_previewMedia;
}

@property(retain, nonatomic) NSArray *previewMedia; // @synthesize previewMedia=_previewMedia;
@property(nonatomic) unsigned int mediaCount; // @synthesize mediaCount=_mediaCount;
@property(copy, nonatomic) NSString *hashtagName; // @synthesize hashtagName=_hashtagName;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)digestDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

