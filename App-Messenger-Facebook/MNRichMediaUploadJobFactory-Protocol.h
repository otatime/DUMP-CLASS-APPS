//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNRichMediaContent, MNRichMediaUploadConfig, NSObject<OS_dispatch_queue>;

@protocol MNRichMediaUploadJobFactory <NSObject>
- (id <MNRichMediaUploadJob>)richMediaUploadJobWithContent:(MNRichMediaContent *)arg1 config:(MNRichMediaUploadConfig *)arg2 listener:(id <MNRichMediaUploadListener>)arg3 networkDispatcher:(id <FBNetworkDispatch>)arg4 queue:(NSObject<OS_dispatch_queue> *)arg5;
@end

