//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ComGoogleCommonBaseJoiner : NSObject
{
    NSString *separator_;
}

+ (id)onWithChar:(unsigned short)arg1;
+ (id)onWithNSString:(id)arg1;
- (void)dealloc;
- (id)toStringWithId:(id)arg1;
- (id)withKeyValueSeparatorWithNSString:(id)arg1;
- (id)skipNulls;
- (id)useForNullWithNSString:(id)arg1;
- (id)joinWithId:(id)arg1 withId:(id)arg2 withNSObjectArray:(id)arg3;
- (id)joinWithNSObjectArray:(id)arg1;
- (id)joinWithJavaUtilIterator:(id)arg1;
- (id)joinWithJavaLangIterable:(id)arg1;
- (id)appendToWithJavaLangStringBuilder:(id)arg1 withId:(id)arg2 withId:(id)arg3 withNSObjectArray:(id)arg4;
- (id)appendToWithJavaLangStringBuilder:(id)arg1 withNSObjectArray:(id)arg2;
- (id)appendToWithJavaLangStringBuilder:(id)arg1 withJavaUtilIterator:(id)arg2;
- (id)appendToWithJavaLangStringBuilder:(id)arg1 withJavaLangIterable:(id)arg2;
- (id)appendToWithJavaLangAppendable:(id)arg1 withId:(id)arg2 withId:(id)arg3 withNSObjectArray:(id)arg4;
- (id)appendToWithJavaLangAppendable:(id)arg1 withNSObjectArray:(id)arg2;
- (id)appendToWithJavaLangAppendable:(id)arg1 withJavaUtilIterator:(id)arg2;
- (id)appendToWithJavaLangAppendable:(id)arg1 withJavaLangIterable:(id)arg2;
- (id)initWithComGoogleCommonBaseJoiner:(id)arg1;
- (id)initWithNSString:(id)arg1;

@end
