//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class MNPhotoSource, NSDate, NSString;

@interface MNPhotoViewModel : FBValueObject <NSCopying>
{
    BOOL _renderAsSticker;
    MNPhotoSource *_source;
    float _width;
    float _height;
    NSString *_creatorId;
    NSDate *_createdTime;
}

@property(readonly, nonatomic) BOOL renderAsSticker; // @synthesize renderAsSticker=_renderAsSticker;
@property(readonly, copy, nonatomic) NSDate *createdTime; // @synthesize createdTime=_createdTime;
@property(readonly, copy, nonatomic) NSString *creatorId; // @synthesize creatorId=_creatorId;
@property(readonly, nonatomic) float height; // @synthesize height=_height;
@property(readonly, nonatomic) float width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) MNPhotoSource *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)initWithSource:(id)arg1 width:(float)arg2 height:(float)arg3 creatorId:(id)arg4 createdTime:(id)arg5 renderAsSticker:(BOOL)arg6;

@end

