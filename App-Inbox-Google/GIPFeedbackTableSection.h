//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface GIPFeedbackTableSection : NSObject
{
    NSArray *cells_;
    NSString *headerTitle_;
}

@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=headerTitle_;
- (id)cellAtIndex:(unsigned int)arg1;
- (unsigned int)heightForCellAtIndex:(unsigned int)arg1 inTableView:(id)arg2;
- (unsigned int)numberOfCells;
- (void)dealloc;
- (id)initWithCells:(id)arg1;

@end

