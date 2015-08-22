//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface FBCameraRollWriter : NSObject
{
    NSObject<OS_dispatch_queue> *_saveQueue;
    id <FBCameraRollWriterDelegate> _delegate;
}

@property(nonatomic) __weak id <FBCameraRollWriterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveVideoToCameraRoll:(id)arg1;
- (void)saveImageDataToCameraRoll:(id)arg1;
- (void)saveImageToCameraRoll:(id)arg1;
- (id)init;

@end

