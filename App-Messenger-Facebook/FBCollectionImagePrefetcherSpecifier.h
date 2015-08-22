//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface FBCollectionImagePrefetcherSpecifier : NSObject
{
    BOOL _streaming;
    NSURL *_url;
    unsigned int _desiredImageFlag;
}

@property(readonly, nonatomic) unsigned int desiredImageFlag; // @synthesize desiredImageFlag=_desiredImageFlag;
@property(readonly, nonatomic) BOOL streaming; // @synthesize streaming=_streaming;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)uniqueKey;
- (id)initWithUrl:(id)arg1 streaming:(BOOL)arg2 desiredImageFlag:(unsigned int)arg3;

@end

