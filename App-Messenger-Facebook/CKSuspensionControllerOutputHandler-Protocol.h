//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKSuspensionController, NSIndexPath;

@protocol CKSuspensionControllerOutputHandler <NSObject>
- (void)suspensionController:(CKSuspensionController *)arg1 didDequeueChangeset:(const struct Changeset *)arg2 ticker:(void (^)(void))arg3;
- (NSIndexPath *)startingIndexPathForTailChangesetInSuspensionController:(CKSuspensionController *)arg1;
@end

