//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface FBMSticker : NSObject <NSCoding, NSCopying>
{
    BOOL _isEditable;
    unsigned long long _fbId;
    struct CGSize _size;
}

+ (id)stickerFromDictionary:(id)arg1;
@property(nonatomic) BOOL isEditable; // @synthesize isEditable=_isEditable;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned long long fbId; // @synthesize fbId=_fbId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)generateDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFbId:(unsigned long long)arg1;
- (id)init;

@end

