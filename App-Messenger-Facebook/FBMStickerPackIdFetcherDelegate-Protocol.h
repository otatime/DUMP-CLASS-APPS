//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMStickerPackIdFetcher, NSError;

@protocol FBMStickerPackIdFetcherDelegate <NSObject>
- (void)stickerPackIdFetcher:(FBMStickerPackIdFetcher *)arg1 didFailWithError:(NSError *)arg2;
- (void)stickerPackIdFetcher:(FBMStickerPackIdFetcher *)arg1 didFetchStickerPackId:(unsigned long long)arg2;
@end

