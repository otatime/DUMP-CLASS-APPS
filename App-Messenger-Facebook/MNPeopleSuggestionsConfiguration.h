//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSArray;

@interface MNPeopleSuggestionsConfiguration : FBValueObject <NSCopying>
{
    NSArray *_topSuggestedContacts;
}

@property(readonly, copy, nonatomic) NSArray *topSuggestedContacts; // @synthesize topSuggestedContacts=_topSuggestedContacts;
- (void).cxx_destruct;
- (id)initWithTopSuggestedContacts:(id)arg1;

@end

