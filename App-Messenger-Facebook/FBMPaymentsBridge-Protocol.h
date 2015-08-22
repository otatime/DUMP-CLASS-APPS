//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMIndexedUserSet, FBMMessageAppModel, NSArray, UIViewController;

@protocol FBMPaymentsBridge <NSObject>
- (void)tearDownDependencies;
- (NSArray *)pushHandlerExtensions;
- (UIViewController *)settingsViewController;
- (NSArray *)settingRowViewModels;
- (unsigned int)numberOfPaymentAttachmentsInMessage:(FBMMessageAppModel *)arg1;
- (NSArray *)paymentOutgoingAttachmentsFromOutgoingAttachments:(NSArray *)arg1;
- (NSArray *)paymentAttachmentViewModelsFromMessage:(FBMMessageAppModel *)arg1 userSet:(FBMIndexedUserSet *)arg2 isLastRow:(BOOL)arg3;
- (NSArray *)composerTabsByInsertingPaymentTab:(id)arg1 toTabs:(NSArray *)arg2;
@end

