//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@interface NSError (CBLAdditions)
+ (id)errorWithDescription:(id)arg1 failureReason:(id)arg2 andErrorCode:(int)arg3;
+ (id)pinterestServiceErrorWithFailureReason:(id)arg1 andErrorCode:(int)arg2;
+ (id)pinterestServiceErrorWithDescription:(id)arg1 failureReason:(id)arg2 andErrorCode:(int)arg3;
+ (id)pinterestServiceErrorWithFailureReason:(id)arg1;
+ (id)thirdPartyServiceErrorWithName:(id)arg1 underlyingError:(id)arg2;
- (id)descriptionForHUD;
@end

