//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@protocol JBTLiveCount <NSObject, JavaObject>
- (void)stopWithJBTSpan:(id <JBTSpan>)arg1;
- (void)startWithJBTSpan:(id <JBTSpan>)arg1;
- (BOOL)hasListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (void)removeListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (void)addListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
@end
