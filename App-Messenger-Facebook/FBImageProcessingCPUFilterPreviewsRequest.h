//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBImageProcessingConcurrentRequest.h"

@class FBFilteredUIImageMetadata, NSArray, NSString, UIImage;

@interface FBImageProcessingCPUFilterPreviewsRequest : FBImageProcessingConcurrentRequest
{
    NSArray *_cpuFilterStates;
    FBFilteredUIImageMetadata *_cpuFilterMetadata;
    UIImage *_stickersLayer;
    UIImage *_srcImage;
    UIImage *_image;
    NSString *_cpuFilterName;
}

@property(copy, nonatomic) NSString *cpuFilterName; // @synthesize cpuFilterName=_cpuFilterName;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)clear;
- (void)executeWithContext:(id)arg1;
- (id)initWithImage:(id)arg1 cpuFilterStates:(id)arg2 cpuFilterMetadata:(id)arg3 stickersLayer:(id)arg4 perImageCompletionBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;

@end

