//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FBImageSearcher, NSArray, NSError, NSString;

@protocol FBImageSearcherDelegate
- (void)imageSearcherDidSearch:(FBImageSearcher *)arg1 thumbnailURLs:(NSArray *)arg2 fullImageURLs:(NSArray *)arg3 serviceProvider:(NSString *)arg4 resultIDs:(NSArray *)arg5;
- (void)imageSearcherCouldNotSearch:(FBImageSearcher *)arg1 error:(NSError *)arg2;
- (void)imageSearcherDidStartSearch:(FBImageSearcher *)arg1;
@end
