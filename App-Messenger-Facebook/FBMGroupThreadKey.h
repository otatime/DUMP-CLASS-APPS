//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface FBMGroupThreadKey : FBValueObject <NSCopying>
{
    NSString *_threadFbId;
}

@property(readonly, copy, nonatomic) NSString *threadFbId; // @synthesize threadFbId=_threadFbId;
- (void).cxx_destruct;
- (id)initWithThreadFbId:(id)arg1;

@end

