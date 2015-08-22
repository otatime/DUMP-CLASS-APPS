//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLModelObject.h"

@class NSArray, NSString, NSURL;

@interface CBLChangelogBranch : CBLModelObject
{
    NSString *_branchName;
    NSString *_latestBuild;
    NSURL *_latestBuildURL;
    NSArray *_builds;
}

+ (id)propertyTransformerClasses;
+ (id)propertyArrayElementClasses;
+ (id)propertyAliases;
@property(readonly, nonatomic) NSArray *builds; // @synthesize builds=_builds;
@property(readonly, nonatomic) NSURL *latestBuildURL; // @synthesize latestBuildURL=_latestBuildURL;
@property(readonly, copy, nonatomic) NSString *latestBuild; // @synthesize latestBuild=_latestBuild;
@property(readonly, copy, nonatomic) NSString *branchName; // @synthesize branchName=_branchName;
- (void).cxx_destruct;

@end

