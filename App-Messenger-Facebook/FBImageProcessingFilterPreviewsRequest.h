//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBImageProcessingOpenGLRequest.h"

@class FBCPUImageFilterState, FBFilteredUIImageMetadata, NSArray, UIImage;

@interface FBImageProcessingFilterPreviewsRequest : FBImageProcessingOpenGLRequest
{
    NSArray *_filters;
    UIImage *_srcImage;
    BOOL _applyLux;
    unsigned int _imagesProcessedCount;
    FBCPUImageFilterState *_cpuFilterState;
    FBFilteredUIImageMetadata *_cpuFilterMetadata;
    UIImage *_stickersLayer;
    UIImage *_image;
    int _index;
}

@property(nonatomic) int index; // @synthesize index=_index;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (BOOL)_applyFilters:(id)arg1 cpuFilterState:(id)arg2 withFilterer:(id)arg3 withDerivedContext:(id)arg4;
- (BOOL)canExecuteInBackground;
- (void)executeWithContext:(id)arg1;
- (id)initWithImage:(id)arg1 filters:(id)arg2 applyLux:(BOOL)arg3 cpuFilterState:(id)arg4 cpuFilterMetadata:(id)arg5 stickersLayer:(id)arg6 perImageCompletionBlock:(CDUnknownBlockType)arg7 cancelBlock:(CDUnknownBlockType)arg8;

@end
