//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImagePickerControllerDelegate.h"

@class ZBarReaderController;

@protocol ZBarReaderDelegate <UIImagePickerControllerDelegate>

@optional
- (void)readerControllerDidFailToRead:(ZBarReaderController *)arg1 withRetry:(BOOL)arg2;
@end

