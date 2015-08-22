//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBQueuePerformer.h"

@class NSString;

@interface FBMobileTraceQueuePerformer : FBQueuePerformer
{
    NSString *_tracingDescription;
}

+ (id)globalDefaultPerformer;
+ (id)queuePerformerWithQueue:(id)arg1 tracingDescription:(id)arg2;
@property(copy, nonatomic) NSString *tracingDescription; // @synthesize tracingDescription=_tracingDescription;
- (void).cxx_destruct;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1 tracingDescription:(id)arg2;
- (id)initWithQueue:(id)arg1;

@end
