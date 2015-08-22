//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface FBStreamPagingInfo : NSObject <NSCopying>
{
    BOOL _canLoadInitial;
    BOOL _canLoadHead;
    BOOL _canLoadTail;
    NSString *_headCursor;
    NSString *_tailCursor;
}

+ (id)pagingInfoForPageInfo:(id)arg1;
+ (id)pagingInfoForInitialLoad;
+ (id)pagingInfoForConnectionState:(id)arg1;
@property(readonly, nonatomic) BOOL canLoadTail; // @synthesize canLoadTail=_canLoadTail;
@property(readonly, copy, nonatomic) NSString *tailCursor; // @synthesize tailCursor=_tailCursor;
@property(readonly, nonatomic) BOOL canLoadHead; // @synthesize canLoadHead=_canLoadHead;
@property(readonly, copy, nonatomic) NSString *headCursor; // @synthesize headCursor=_headCursor;
@property(readonly, nonatomic) BOOL canLoadInitial; // @synthesize canLoadInitial=_canLoadInitial;
- (void).cxx_destruct;
- (id)pagingInfoUpdatedForTailResult:(id)arg1;
- (id)pagingInfoUpdatedForHeadResult:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithCanLoadInitial:(BOOL)arg1 headCursor:(id)arg2 canLoadHead:(BOOL)arg3 tailCursor:(id)arg4 canLoadTail:(BOOL)arg5;

@end
