//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FBNearbyDataSet, FBPlacePickerPrefetchController, NSError;

@protocol FBPlacePickerPrefetchControllerDelegate
- (void)prefetchController:(FBPlacePickerPrefetchController *)arg1 didFinishWithError:(NSError *)arg2;
- (void)prefetchController:(FBPlacePickerPrefetchController *)arg1 didFinishWithNearbyDataSet:(FBNearbyDataSet *)arg2;
@end
