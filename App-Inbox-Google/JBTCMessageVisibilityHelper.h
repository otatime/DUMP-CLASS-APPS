//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTCLabelMatcher, NSString;

@interface JBTCMessageVisibilityHelper : NSObject
{
    NSString *name_;
    JBTCLabelMatcher *labelMatcher_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)forSearchWithBoolean:(BOOL)arg1 withBoolean:(BOOL)arg2;
+ (id)forSnippetsWithComGoogleAppsBigtopServicesGmailLocalPresortedViewEnum:(id)arg1;
+ (id)fromLocalPresortedViewWithComGoogleAppsBigtopServicesGmailLocalPresortedViewEnum:(id)arg1;
+ (id)fromBigTopGmailQuerySettingsWithComGoogleAppsBigtopServicesGmailBigTopGmailQuerySettings:(id)arg1;
- (void)dealloc;
- (BOOL)isMessageVisibleWithJBTCFastLabels:(id)arg1;
- (id)getName;
- (id)description;
- (id)initWithNSString:(id)arg1 withJBTCLabelMatcher:(id)arg2;

@end
