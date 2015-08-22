//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASDataController, NSArray, NSIndexSet;

@protocol ASDataControllerDelegate <NSObject>

@optional
- (void)dataController:(ASDataController *)arg1 didDeleteSectionsAtIndexSet:(NSIndexSet *)arg2 withAnimationOptions:(unsigned int)arg3;
- (void)dataController:(ASDataController *)arg1 didInsertSections:(NSArray *)arg2 atIndexSet:(NSIndexSet *)arg3 withAnimationOptions:(unsigned int)arg4;
- (void)dataController:(ASDataController *)arg1 didDeleteNodesAtIndexPaths:(NSArray *)arg2 withAnimationOptions:(unsigned int)arg3;
- (void)dataController:(ASDataController *)arg1 didInsertNodes:(NSArray *)arg2 atIndexPaths:(NSArray *)arg3 withAnimationOptions:(unsigned int)arg4;
- (void)dataControllerEndUpdates:(ASDataController *)arg1 completion:(void (^)(BOOL))arg2;
- (void)dataControllerBeginUpdates:(ASDataController *)arg1;
@end
