//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNPhotoActionSheetPresenter;

@protocol MNPhotoActionSheetPresenterDelegate <NSObject>
- (void)photoActionSheetPresenterDidSelectSave:(MNPhotoActionSheetPresenter *)arg1;
- (void)photoActionSheetPresenterDidSelectForward:(MNPhotoActionSheetPresenter *)arg1;

@optional
- (void)photoActionSheetPresenterDidSelectCancel:(MNPhotoActionSheetPresenter *)arg1;
@end

