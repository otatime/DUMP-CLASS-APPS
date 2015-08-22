//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSIndexSet, NSMutableArray, NSMutableIndexSet, NSObject<OS_dispatch_queue>, UIImage;

@interface FLAnimatedImage : NSObject
{
    UIImage *_posterImage;
    unsigned int _loopCount;
    NSArray *_delayTimes;
    unsigned int _frameCount;
    unsigned int _frameCacheSizeMax;
    NSData *_data;
    unsigned int _frameCacheSizeOptimal;
    unsigned int _frameCacheSizeMaxInternal;
    unsigned int _requestedFrameIndex;
    unsigned int _posterImageFrameIndex;
    NSMutableArray *_cachedFrames;
    NSMutableIndexSet *_cachedFrameIndexes;
    NSMutableIndexSet *_requestedFrameIndexes;
    NSIndexSet *_allFramesIndexSet;
    unsigned int _memoryWarningCount;
    NSObject<OS_dispatch_queue> *_serialQueue;
    struct CGImageSource *_imageSource;
    FLAnimatedImage *_weakProxy;
    struct CGSize _size;
}

+ (id)predrawnImageFromImage:(id)arg1;
+ (struct CGSize)sizeForImage:(id)arg1;
+ (id)animatedImageWithGIFData:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) FLAnimatedImage *weakProxy; // @synthesize weakProxy=_weakProxy;
@property(readonly, nonatomic) struct CGImageSource *imageSource; // @synthesize imageSource=_imageSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) unsigned int memoryWarningCount; // @synthesize memoryWarningCount=_memoryWarningCount;
@property(readonly, nonatomic) NSIndexSet *allFramesIndexSet; // @synthesize allFramesIndexSet=_allFramesIndexSet;
@property(readonly, nonatomic) NSMutableIndexSet *requestedFrameIndexes; // @synthesize requestedFrameIndexes=_requestedFrameIndexes;
@property(readonly, nonatomic) NSMutableIndexSet *cachedFrameIndexes; // @synthesize cachedFrameIndexes=_cachedFrameIndexes;
@property(readonly, nonatomic) NSMutableArray *cachedFrames; // @synthesize cachedFrames=_cachedFrames;
@property(readonly, nonatomic) unsigned int posterImageFrameIndex; // @synthesize posterImageFrameIndex=_posterImageFrameIndex;
@property(nonatomic) unsigned int requestedFrameIndex; // @synthesize requestedFrameIndex=_requestedFrameIndex;
@property(nonatomic) unsigned int frameCacheSizeMaxInternal; // @synthesize frameCacheSizeMaxInternal=_frameCacheSizeMaxInternal;
@property(readonly, nonatomic) unsigned int frameCacheSizeOptimal; // @synthesize frameCacheSizeOptimal=_frameCacheSizeOptimal;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned int frameCacheSizeMax; // @synthesize frameCacheSizeMax=_frameCacheSizeMax;
@property(readonly, nonatomic) unsigned int frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) NSArray *delayTimes; // @synthesize delayTimes=_delayTimes;
@property(readonly, nonatomic) unsigned int loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) UIImage *posterImage; // @synthesize posterImage=_posterImage;
- (void).cxx_destruct;
- (id)description;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)resetFrameCacheSizeMaxInternal;
- (void)growFrameCacheSizeAfterMemoryWarning:(id)arg1;
- (void)purgeFrameCacheIfNeeded;
- (id)frameIndexesToCache;
- (id)predrawnImageAtIndex:(unsigned int)arg1;
- (void)addFrameIndexesToCache:(id)arg1;
- (id)imageLazilyCachedAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithAnimatedGIFData:(id)arg1;
- (id)init;
@property(readonly, nonatomic) unsigned int frameCacheSizeCurrent;

@end

