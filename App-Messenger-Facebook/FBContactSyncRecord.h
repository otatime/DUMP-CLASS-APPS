//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface FBContactSyncRecord : NSObject
{
    NSMutableSet *_allItems;
}

+ (id)retrieveRecordWithContentsOfFile:(id)arg1;
- (void).cxx_destruct;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)containsRecordItem:(id)arg1;
- (unsigned int)count;
- (void)enumerateRecordItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeRecordItem:(id)arg1;
- (void)addRecordItem:(id)arg1;
- (id)initWithRecordItems:(id)arg1;
- (id)init;

@end

