//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JCGCuAbstractHttpRequester.h"

@interface IosHttpRequester : JCGCuAbstractHttpRequester
{
    float timeoutInterval_;
    id <JCGCuWorkQueue> deserializationWorkQueue_;
}

@property(readonly, nonatomic) id <JCGCuWorkQueue> deserializationWorkQueue; // @synthesize deserializationWorkQueue=deserializationWorkQueue_;
- (void)dealloc;
- (id)getRequestRunnableWithJCGCuHttpRequest:(id)arg1 withJCGCuCallback:(id)arg2;
- (id)initWithRequestWorkQueue:(id)arg1 deserializationWorkQueue:(id)arg2 responseWorkQueue:(id)arg3 timeoutInterval:(float)arg4;

@end
