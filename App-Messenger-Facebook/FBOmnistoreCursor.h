//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface FBOmnistoreCursor : NSObject
{
    unique_ptr_2fc9d982 _cursor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)close;
@property(readonly) int status;
@property(readonly) NSData *blob;
@property(readonly, copy) NSString *sortKey;
@property(readonly, copy) NSString *primaryKey;
- (BOOL)step;
- (id)initWithCursor:(unique_ptr_2fc9d982)arg1;

@end

