//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSString, RCTBridge, UIImage;

@interface RCTImageView : UIImageView
{
    RCTBridge *_bridge;
    BOOL _onLoadStart;
    BOOL _onProgress;
    BOOL _onError;
    BOOL _onLoad;
    BOOL _onLoadEnd;
    UIImage *_defaultImage;
    int _renderingMode;
    NSString *_src;
    struct UIEdgeInsets _capInsets;
}

@property(nonatomic) BOOL onLoadEnd; // @synthesize onLoadEnd=_onLoadEnd;
@property(nonatomic) BOOL onLoad; // @synthesize onLoad=_onLoad;
@property(nonatomic) BOOL onError; // @synthesize onError=_onError;
@property(nonatomic) BOOL onProgress; // @synthesize onProgress=_onProgress;
@property(nonatomic) BOOL onLoadStart; // @synthesize onLoadStart=_onLoadStart;
@property(copy, nonatomic) NSString *src; // @synthesize src=_src;
@property(nonatomic) int renderingMode; // @synthesize renderingMode=_renderingMode;
@property(retain, nonatomic) UIImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(nonatomic) struct UIEdgeInsets capInsets; // @synthesize capInsets=_capInsets;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)reactSetFrame:(struct CGRect)arg1;
- (void)reloadImage;
- (void)setImage:(id)arg1;
- (void)_updateImage;
- (id)init;
- (id)initWithBridge:(id)arg1;

@end
