//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FBTranscodingHandler <NSObject>
@property(nonatomic) __weak id <FBTranscodingHandlerDelegate> delegate;
@property(readonly, nonatomic) CDStruct_1b6d18a9 presentationTime;
@property(readonly, nonatomic) BOOL done;
- (void)startTranscodingWhenReady;
@end

