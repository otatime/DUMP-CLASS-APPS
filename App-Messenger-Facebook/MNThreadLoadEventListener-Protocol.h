//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMLocalThreadDescriptor, MNPerfLoggingEventDescriptor, MNThreadViewModel;

@protocol MNThreadLoadEventListener <NSObject>
- (void)threadDidEndLoadingWithThreadViewModel:(MNThreadViewModel *)arg1;
- (void)threadDidBeginLoadingFromNetwork:(FBMLocalThreadDescriptor *)arg1;
- (void)threadWillBeginLoadingWithLocalThreadDescriptor:(FBMLocalThreadDescriptor *)arg1 eventDescriptor:(MNPerfLoggingEventDescriptor *)arg2;
@end
