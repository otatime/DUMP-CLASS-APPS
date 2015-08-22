//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIImage;

@interface THGroupMutationInfo : NSObject
{
    NSString *fbid;
    NSString *name;
    NSString *description;
    NSString *icon;
    UIImage *coverPhoto;
    UIImage *uncroppedCoverPhoto;
    NSString *privacySetting;
    NSArray *selectedMembers;
    NSString *_coverPhotoSearchServiceProvider;
    NSString *_coverPhotoSearchResultId;
}

@property(copy, nonatomic) NSString *coverPhotoSearchResultId; // @synthesize coverPhotoSearchResultId=_coverPhotoSearchResultId;
@property(copy, nonatomic) NSString *coverPhotoSearchServiceProvider; // @synthesize coverPhotoSearchServiceProvider=_coverPhotoSearchServiceProvider;
@property(copy, nonatomic) NSArray *selectedMembers; // @synthesize selectedMembers;
@property(copy, nonatomic) NSString *privacySetting; // @synthesize privacySetting;
@property(copy, nonatomic) UIImage *uncroppedCoverPhoto; // @synthesize uncroppedCoverPhoto;
@property(copy, nonatomic) UIImage *coverPhoto; // @synthesize coverPhoto;
@property(copy, nonatomic) NSString *icon; // @synthesize icon;
@property(copy, nonatomic) NSString *description; // @synthesize description;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(copy, nonatomic) NSString *fbid; // @synthesize fbid;
- (void).cxx_destruct;
- (id)init;

@end
