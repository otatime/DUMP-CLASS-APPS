//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTIItemsBulkCommandHelper.h"

@class NSString;

@interface JBTBigTopDataBulkCommandHelper : NSObject <JBTIItemsBulkCommandHelper>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_init;
+ (id)__annotations;
- (void)addCommandToTransactionWithNoLocalItemMatchWithComGoogleAppsBigtopServicesGmailModifyLabelsCommand:(id)arg1 withNSString:(id)arg2 withJBTICommonQueryExtension:(id)arg3 withJBTICommonTransaction:(id)arg4;
- (void)addCommandToTransactionWithComGoogleAppsBigtopServicesGmailModifyLabelsCommand:(id)arg1 withNSString:(id)arg2 withJBTICommonQueryExtension:(id)arg3 withJavaUtilList:(id)arg4 withJBTIItemsBulkCommandSpecification:(id)arg5 withJBTICommonTransaction:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
