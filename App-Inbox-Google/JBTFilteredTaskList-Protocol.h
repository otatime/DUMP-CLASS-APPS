//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTTaskList.h"
#import "JavaObject.h"
#import "NSObject.h"

@protocol JBTFilteredTaskList <JBTTaskList, NSObject, JavaObject>
- (void)setTaskFilterWithJBTTaskFilter:(id <JBTTaskFilter>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (id <JBTTaskFilter>)getTaskFilter;
@end
