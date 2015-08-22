//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSURL;

@interface GBTNetworkFileCacheItem : NSObject
{
    NSMutableArray *completions_;
    NSURL *networkURL_;
    NSURL *_fileURL;
}

@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSURL *networkURL; // @synthesize networkURL=networkURL_;
@property(readonly, nonatomic) NSMutableArray *completions; // @synthesize completions=completions_;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithNetworkURL:(id)arg1;

@end
