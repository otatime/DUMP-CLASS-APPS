//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusSyncClientMemoryFtsSegment, IOSIntArray;

@interface ComGoogleCumulusSyncClientMemoryFtsSegment_DocumentIndexer : NSObject
{
    ComGoogleCumulusSyncClientMemoryFtsSegment *this$0_;
    IOSIntArray *docId_;
    int position_;
}

- (void)dealloc;
- (void)close;
- (void)recordHitWithNSString:(id)arg1;
- (id)initWithComGoogleCumulusSyncClientMemoryFtsSegment:(id)arg1 withIntArray:(id)arg2;

@end
