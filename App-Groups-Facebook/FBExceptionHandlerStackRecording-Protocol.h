//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol FBExceptionHandlerStackRecording
- (_Bool)didRecordBacktracesWithOriginFile:(const char *)arg1 originLine:(int)arg2 msg:(NSString *)arg3 additionalInfo:(NSDictionary *)arg4;
- (void)setExceptionInfoString:(NSString *)arg1 forKey:(NSString *)arg2;
@end
