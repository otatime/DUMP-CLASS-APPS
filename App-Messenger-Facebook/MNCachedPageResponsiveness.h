//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class MNPageResponsivenessViewModel, NSDate;

@interface MNCachedPageResponsiveness : FBValueObject <NSCopying>
{
    MNPageResponsivenessViewModel *_pageResponsivenessViewModel;
    NSDate *_fetchedAtTimestamp;
}

@property(readonly, copy, nonatomic) NSDate *fetchedAtTimestamp; // @synthesize fetchedAtTimestamp=_fetchedAtTimestamp;
@property(readonly, copy, nonatomic) MNPageResponsivenessViewModel *pageResponsivenessViewModel; // @synthesize pageResponsivenessViewModel=_pageResponsivenessViewModel;
- (void).cxx_destruct;
- (id)initWithPageResponsivenessViewModel:(id)arg1 fetchedAtTimestamp:(id)arg2;

@end
