//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface FBMPaidStickerPackStore : NSObject
{
    NSMutableDictionary *_paidPacksByProductId;
}

- (void).cxx_destruct;
- (id)stickerPacksForProductIds:(id)arg1;
- (id)productIds;
- (id)stickerPackForProductId:(id)arg1;
- (void)setStickerPack:(id)arg1 forProductId:(id)arg2;
- (unsigned int)count;
- (void)clear;
- (id)init;

@end

