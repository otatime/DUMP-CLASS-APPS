//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JBTCLabelMatcher : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)nothing;
+ (id)anything;
+ (id)not__WithJBTCLabelMatcher:(id)arg1;
+ (id)or__WithJBTCLabelMatcherArray:(id)arg1;
+ (id)or__WithJBTCLabelMatcher:(id)arg1 withJBTCLabelMatcher:(id)arg2;
+ (id)and__WithJBTCLabelMatcherArray:(id)arg1;
+ (id)and__WithJBTCLabelMatcher:(id)arg1 withJBTCLabelMatcher:(id)arg2;
+ (id)doesNotContainAllOfWithNSStringArray:(id)arg1;
+ (id)doesNotContainAnyOfWithNSStringArray:(id)arg1;
+ (id)doesNotContainWithNSString:(id)arg1;
+ (id)containsAnyOfWithNSStringArray:(id)arg1;
+ (id)containsAllOfWithNSStringArray:(id)arg1;
+ (id)containsWithNSString:(id)arg1;
- (BOOL)matchesWithJBTCFastLabels:(id)arg1;
- (id)init;

@end
