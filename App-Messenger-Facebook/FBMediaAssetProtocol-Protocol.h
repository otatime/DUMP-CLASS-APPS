//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@protocol FBMediaAssetProtocol <NSObject>
@property(copy, nonatomic) NSString *assetType;
@property(readonly, copy, nonatomic) NSString *assetID;
@property(retain, nonatomic) UIImage *thumbnail;
- (id)initWithAssetID:(NSString *)arg1 thumbnail:(UIImage *)arg2;
@end

