//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@protocol JCGCuWorkQueueObserver <NSObject, JavaObject>
- (void)queueEmpty;
- (void)workRanWithDouble:(double)arg1 withDouble:(double)arg2 withInt:(int)arg3 withJavaLangRunnable:(id <JavaLangRunnable>)arg4;
- (void)workDequeuedWithDouble:(double)arg1 withDouble:(double)arg2 withInt:(int)arg3 withJavaLangRunnable:(id <JavaLangRunnable>)arg4;
@end
