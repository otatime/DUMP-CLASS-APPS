//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface MNIndexPathUpdateTranslator : NSObject
{
    NSDictionary *_addedIndexSetsBySection;
    NSDictionary *_removedIndexSetsBySection;
    NSDictionary *_reloadedIndexSetsBySection;
}

- (void).cxx_destruct;
- (BOOL)originalIndexPathNeedsReload:(id)arg1;
- (id)originalIndexPath:(id)arg1;
- (id)finalIndexPath:(id)arg1;
- (id)initWithUpdates:(id)arg1;

@end

