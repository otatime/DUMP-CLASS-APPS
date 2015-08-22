//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MediaData, MediaSectionDataSource, NSError, NSIndexSet, UIViewController;

@protocol MediaSectionDataSourceDelegate <NSObject>
- (void)mediaSectionDataSource:(MediaSectionDataSource *)arg1 didUpdateWithIndexesToInsert:(NSIndexSet *)arg2 indexesToDelete:(NSIndexSet *)arg3 indexesToReload:(NSIndexSet *)arg4;
- (void)mediaSectionDataSource:(MediaSectionDataSource *)arg1 didRetrieveDetailedMediaData:(MediaData *)arg2 withError:(NSError *)arg3;
- (void)mediaSectionDataSource:(MediaSectionDataSource *)arg1 didHideMediaPicker:(UIViewController *)arg2;
- (void)mediaSectionDataSource:(MediaSectionDataSource *)arg1 didShowMediaPicker:(UIViewController *)arg2;
- (void)mediaSectionDataSourceDidReload:(MediaSectionDataSource *)arg1;
@end
