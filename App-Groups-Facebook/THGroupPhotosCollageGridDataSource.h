//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "THBasicCollageGridDataSource.h"

@class NSString;

@interface THGroupPhotosCollageGridDataSource : THBasicCollageGridDataSource
{
    NSString *_groupID;
}

- (void).cxx_destruct;
- (id)loadPhotosWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (id)initWithSession:(id)arg1 groupID:(id)arg2;
- (id)initWithSession:(id)arg1;

@end

