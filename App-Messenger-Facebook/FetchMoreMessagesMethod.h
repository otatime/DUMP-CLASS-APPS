//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FetchMoreMessagesMethod : NSObject
{
}

+ (id)handleFqlResult:(id)arg1 threadDescriptor:(id)arg2 threadJSONUpdater:(id)arg3 limit:(unsigned int)arg4;
+ (id)handleFqlResult:(id)arg1 thread:(id)arg2 threadJSONUpdater:(id)arg3 limit:(unsigned int)arg4;
+ (id)getFqlByOtherUserId:(id)arg1 end:(long long)arg2 limit:(unsigned int)arg3;
+ (id)getFqlByThreadFbId:(id)arg1 end:(long long)arg2 limit:(unsigned int)arg3;
+ (id)getFqlByThreadId_DEPRECATED:(id)arg1 end:(long long)arg2 limit:(unsigned int)arg3;

@end

