//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@interface FLWeakProxy : NSProxy
{
    id _target;
}

+ (id)weakProxyForObject:(id)arg1;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;

@end

