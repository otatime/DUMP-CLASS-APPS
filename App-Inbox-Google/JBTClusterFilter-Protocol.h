//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class NSString;

@protocol JBTClusterFilter <NSObject, JavaObject>
- (id <JBTClusterFilter_Builder>)toBuilder;
- (id <JBTId>)getId;
- (id <JavaUtilList>)getPredicates;
- (BOOL)getDeleteMessage;
- (NSString *)getFilterQueryAsString;
@end
