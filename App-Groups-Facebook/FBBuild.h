//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface FBBuild : FBValueObject <NSCopying>
{
    NSString *_branchName;
    NSString *_number;
    NSString *_revision;
    NSString *_time;
}

@property(readonly, copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(readonly, copy, nonatomic) NSString *revision; // @synthesize revision=_revision;
@property(readonly, copy, nonatomic) NSString *number; // @synthesize number=_number;
@property(readonly, copy, nonatomic) NSString *branchName; // @synthesize branchName=_branchName;
- (void).cxx_destruct;
- (id)initWithBranchName:(id)arg1 number:(id)arg2 revision:(id)arg3 time:(id)arg4;

@end
