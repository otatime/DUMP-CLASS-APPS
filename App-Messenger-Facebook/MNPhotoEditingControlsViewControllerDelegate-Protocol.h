//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBCPUImageFilterState, FBGLFilter, UIImage;

@protocol MNPhotoEditingControlsViewControllerDelegate <NSObject>
- (void)didSetLuxEnabled:(BOOL)arg1 withcpuFilterState:(FBCPUImageFilterState *)arg2 withPreview:(UIImage *)arg3;
- (void)didSelectFilter:(FBGLFilter *)arg1 withcpuFilterState:(FBCPUImageFilterState *)arg2 withPreview:(UIImage *)arg3;
@end

