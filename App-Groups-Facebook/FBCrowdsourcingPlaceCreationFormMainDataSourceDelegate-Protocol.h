//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol FBCrowdsourcingPlaceCreationFormMainDataSourceDelegate <NSObject>
- (void)mainDataSourceDidChangeStreetField:(NSString *)arg1;
- (void)mainDataSourceDidEditZipField;
- (void)mainDataSourceDidEditNameField;
- (void)mainDataSourceDidEditStreetField;
- (void)mainDataSourceDidSwitchCurrentLocationWithValue:(BOOL)arg1;
- (void)mainDataSourceDidSelectCityRow;
- (void)mainDataSourceDidSelectCategoryRow;
- (void)mainDataSourceDidTapPhotoButton;
- (void)mainDataSourceDidTapCameraButton;
@end
