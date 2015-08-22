//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "JavaUtilConcurrentConcurrentMap.h"
#import "JavaUtilNavigableMap.h"
#import "NSObject.h"

@protocol JavaUtilConcurrentConcurrentNavigableMap <JavaUtilConcurrentConcurrentMap, JavaUtilNavigableMap, NSObject, JavaObject>
- (id <JavaUtilNavigableSet>)descendingKeySet;
- (id <JavaUtilNavigableSet>)keySet;
- (id <JavaUtilNavigableSet>)navigableKeySet;
- (id <JavaUtilConcurrentConcurrentNavigableMap>)descendingMap;
- (id <JavaUtilConcurrentConcurrentNavigableMap>)tailMapWithId:(id)arg1;
- (id <JavaUtilConcurrentConcurrentNavigableMap>)headMapWithId:(id)arg1;
- (id <JavaUtilConcurrentConcurrentNavigableMap>)subMapWithId:(id)arg1 withId:(id)arg2;
- (id <JavaUtilConcurrentConcurrentNavigableMap>)tailMapWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id <JavaUtilConcurrentConcurrentNavigableMap>)headMapWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id <JavaUtilConcurrentConcurrentNavigableMap>)subMapWithId:(id)arg1 withBoolean:(BOOL)arg2 withId:(id)arg3 withBoolean:(BOOL)arg4;
@end
