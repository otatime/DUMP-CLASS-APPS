//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FLAnimatedImageFrameDataSource.h"

@class FLAnimatedWebPDemuxer, NSArray, NSData, NSString;

@interface FLAnimatedWebPDataSource : NSObject <FLAnimatedImageFrameDataSource>
{
    FLAnimatedWebPDemuxer *_demuxer;
    NSArray *_frameInfo;
    NSData *_data;
    struct CGRect _imageRect;
}

- (void).cxx_destruct;
- (id)blendImage:(id)arg1 atIndex:(unsigned int)arg2 withPreviousImage:(id)arg3;
- (BOOL)frameRequiresBlendingWithPreviousFrame:(unsigned int)arg1;
- (id)imageAtIndex:(unsigned int)arg1;
- (id)initWithWebPDemuxer:(id)arg1 frameInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
