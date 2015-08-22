//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString;

@interface FBPhotoModel : NSObject
{
    BOOL _albumIsManuallyCreated;
    BOOL _viewerCanDelete;
    NSAttributedString *_albumName;
    int _albumPhotoCount;
}

@property(readonly, nonatomic) BOOL viewerCanDelete; // @synthesize viewerCanDelete=_viewerCanDelete;
@property(readonly, nonatomic) int albumPhotoCount; // @synthesize albumPhotoCount=_albumPhotoCount;
@property(readonly, nonatomic) BOOL albumIsManuallyCreated; // @synthesize albumIsManuallyCreated=_albumIsManuallyCreated;
@property(readonly, copy, nonatomic) NSAttributedString *albumName; // @synthesize albumName=_albumName;
- (void).cxx_destruct;
- (void)addRecursiveDescriptionToString:(id)arg1 indentLevel:(int)arg2;
- (id)description;
@property(readonly, nonatomic) NSString *fbid;
- (id)objectID;
- (struct CGSize)imageSizeForFlag:(unsigned int)arg1;
- (id)imageWithFlag:(unsigned int)arg1;
- (id)imageSourceForFlag:(unsigned int)arg1;
- (unsigned int)worstImageFlag;
- (unsigned int)bestImageFlag;

@end

