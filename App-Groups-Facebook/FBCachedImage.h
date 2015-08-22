//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBCachedImage : NSObject
{
    int _state;
    CDUnknownBlockType _imageDecoder;
    struct CGImage *_image;
    id _extraData;
    unsigned int _fileSize;
    CDStruct_3e356df7 _imageSize;
}

@property(readonly, nonatomic) CDStruct_3e356df7 imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, retain) id extraData; // @synthesize extraData=_extraData;
@property(retain) struct CGImage *image; // @synthesize image=_image;
@property int state; // @synthesize state=_state;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int cost;
- (void)decodeIfNeeded;
- (void)dealloc;
- (id)initWithImage:(struct CGImage *)arg1 fileSize:(unsigned int)arg2 imageDecoder:(CDUnknownBlockType)arg3;
- (id)initWithImageSize:(CDStruct_3e356df7)arg1 fileSize:(unsigned int)arg2;

@end
