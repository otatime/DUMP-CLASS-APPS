//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLFetchBaseUnit.h"

@class NSString;

@interface FBGraphQLFetchRange : FBGraphQLFetchBaseUnit
{
    NSString *_uniqueId;
    unsigned int _length;
    NSString *_cursor;
}

+ (id)newWithCursor:(id)arg1 andLength:(unsigned int)arg2;
@property(readonly, copy, nonatomic) NSString *cursor; // @synthesize cursor=_cursor;
@property(readonly, nonatomic) unsigned int length; // @synthesize length=_length;
- (void).cxx_destruct;
- (id)initWithCursor:(id)arg1 andLength:(unsigned int)arg2;

@end

