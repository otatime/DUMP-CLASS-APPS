//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTClusterNameValidator_ClusterNameValidationResultEnum, NSString;

@protocol JBTClusterNameValidator <NSObject, JavaObject>
- (JBTClusterNameValidator_ClusterNameValidationResultEnum *)validateNewNameForExistingClusterWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
- (JBTClusterNameValidator_ClusterNameValidationResultEnum *)validateNameForNewClusterWithNSString:(NSString *)arg1;
@end
