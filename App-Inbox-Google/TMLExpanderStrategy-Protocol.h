//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@protocol TMLExpanderStrategy <NSObject, JavaObject>
- (void)collectCandidatesWithJavaUtilCollection:(id <JavaUtilCollection>)arg1 withTMLDate:(id <TMLDate>)arg2;
- (id <TMLDate>)getNextAnchorWithInt:(int)arg1 withTMLDate:(id <TMLDate>)arg2;
@end
