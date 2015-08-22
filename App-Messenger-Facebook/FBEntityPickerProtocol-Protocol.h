//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBEntityTokenView, NSArray, NSString;

@protocol FBEntityPickerProtocol <NSObject>
- (void)sortTokensWithOptions:(unsigned int)arg1 usingTokenViewComparator:(int (^)(FBEntityTokenView *, FBEntityTokenView *))arg2;
- (void)removeCellWithObject:(id <FBEntityTokenable>)arg1;
- (void)removeAllCellsAndText;
- (BOOL)hasTokensTruncated;
- (NSArray *)cellViewsPassingTest:(BOOL (^)(FBEntityTokenView *))arg1;
- (FBEntityTokenView *)cellViewForTokenIdentifier:(NSString *)arg1;
- (FBEntityTokenView *)cellViewForObject:(id <FBEntityTokenable>)arg1;
- (unsigned int)cellCount;
- (FBEntityTokenView *)addCellWithObject:(id <FBEntityTokenable>)arg1;
@end

