//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface CachedSection : NSObject
{
    id <JBTSection> section_;
    NSMutableArray *sectionItemsCache_;
}

@property(retain, nonatomic) NSMutableArray *sectionItemsCache; // @synthesize sectionItemsCache=sectionItemsCache_;
@property(retain, nonatomic) id <JBTSection> section; // @synthesize section=section_;
- (void).cxx_destruct;
- (id)initWithSection:(id)arg1;

@end

