//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBSyncPerson, MNContactProfileFetcher, NSError, NSString;

@protocol MNContactProfileFetcherDelegate <NSObject>
- (void)contactProfileFetcher:(MNContactProfileFetcher *)arg1 didFailWithError:(NSError *)arg2;
- (void)contactProfileFetcherDidNotFindProfile:(MNContactProfileFetcher *)arg1 writeId:(NSString *)arg2;
- (void)contactProfileFetcher:(MNContactProfileFetcher *)arg1 didFetchContact:(FBSyncPerson *)arg2 writeId:(NSString *)arg3;
@end

