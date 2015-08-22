//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FLAnimatedImage, NSError, NSUUID, UIImage;

@interface PINRemoteImageManagerResult : NSObject
{
    UIImage *_image;
    FLAnimatedImage *_animatedImage;
    NSError *_error;
    unsigned int _resultType;
    NSUUID *_UUID;
    double _requestDuration;
}

+ (id)imageResultWithImage:(id)arg1 animatedImage:(id)arg2 requestLength:(double)arg3 error:(id)arg4 resultType:(unsigned int)arg5 UUID:(id)arg6;
@property(readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) unsigned int resultType; // @synthesize resultType=_resultType;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) double requestDuration; // @synthesize requestDuration=_requestDuration;
@property(readonly, nonatomic) FLAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)description;
- (id)initWithImage:(id)arg1 animatedImage:(id)arg2 requestLength:(double)arg3 error:(id)arg4 resultType:(unsigned int)arg5 UUID:(id)arg6;

@end
