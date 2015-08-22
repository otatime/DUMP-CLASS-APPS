//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface MNMessageLocationAttachmentViewModel : FBValueObject <NSCopying, NSCoding>
{
    BOOL _shouldForceSubtitleToRender;
    NSString *_locationTitle;
    NSString *_locationSubtitle;
    double _latitude;
    double _longitude;
}

@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(readonly, nonatomic) BOOL shouldForceSubtitleToRender; // @synthesize shouldForceSubtitleToRender=_shouldForceSubtitleToRender;
@property(readonly, copy, nonatomic) NSString *locationSubtitle; // @synthesize locationSubtitle=_locationSubtitle;
@property(readonly, copy, nonatomic) NSString *locationTitle; // @synthesize locationTitle=_locationTitle;
- (void).cxx_destruct;
- (id)initWithLocationTitle:(id)arg1 locationSubtitle:(id)arg2 shouldForceSubtitleToRender:(BOOL)arg3 latitude:(double)arg4 longitude:(double)arg5;

@end

