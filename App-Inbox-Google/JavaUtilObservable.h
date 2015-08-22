//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JavaUtilObservable : NSObject
{
    id <JavaUtilList> observers_;
    BOOL changed_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)setChanged;
- (void)notifyObserversWithId:(id)arg1;
- (void)notifyObservers;
- (BOOL)hasChanged;
- (void)deleteObservers;
- (void)deleteObserverWithJavaUtilObserver:(id)arg1;
- (int)countObservers;
- (void)clearChanged;
- (void)addObserverWithJavaUtilObserver:(id)arg1;
- (id)init;

@end
