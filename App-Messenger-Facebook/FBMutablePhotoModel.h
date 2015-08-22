//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBPhotoModel.h"

@class NSAttributedString, NSMutableDictionary, NSString;

@interface FBMutablePhotoModel : FBPhotoModel
{
    NSAttributedString *_albumName;
    BOOL _albumIsManuallyCreated;
    int _albumPhotoCount;
    NSString *_fbid;
    NSMutableDictionary *_imageModels;
    BOOL _viewerCanDelete;
}

@property(retain, nonatomic) NSString *fbid; // @synthesize fbid=_fbid;
@property(nonatomic) BOOL viewerCanDelete; // @synthesize viewerCanDelete=_viewerCanDelete;
@property(nonatomic) int albumPhotoCount; // @synthesize albumPhotoCount=_albumPhotoCount;
@property(nonatomic) BOOL albumIsManuallyCreated; // @synthesize albumIsManuallyCreated=_albumIsManuallyCreated;
@property(copy, nonatomic) NSAttributedString *albumName; // @synthesize albumName=_albumName;
- (void).cxx_destruct;
- (struct CGSize)imageSizeForFlag:(unsigned int)arg1;
- (void)setImageSize:(struct CGSize)arg1 forFlag:(unsigned int)arg2;
- (id)imageWithFlag:(unsigned int)arg1;
- (void)setImage:(id)arg1 forFlag:(unsigned int)arg2;
- (id)imageSourceForFlag:(unsigned int)arg1;
- (void)setImageSource:(id)arg1 forFlag:(unsigned int)arg2;
- (unsigned int)worstImageFlag;
- (unsigned int)bestImageFlag;
- (id)init;

@end

