//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaIoSerializable.h"
#import "JavaObject.h"
#import "NSObject.h"

@class JBTIInitialDataSet;

@protocol JBTTestData <JavaIoSerializable, NSObject, JavaObject>
- (int)getTotalContactsCount;
- (int)getTotalThreadCount;
- (id <JavaUtilSet>)getClusters;
- (id <JavaUtilSet>)getContacts;
- (id <JavaUtilList>)getThreadsInChronologicalOrder;
- (id <JavaUtilList>)getThreads;
- (JBTIInitialDataSet *)toInitialDataSet;
@end
