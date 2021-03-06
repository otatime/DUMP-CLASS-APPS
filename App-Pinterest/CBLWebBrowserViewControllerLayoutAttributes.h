//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseLayoutAttributes.h"

@interface CBLWebBrowserViewControllerLayoutAttributes : CBLBaseLayoutAttributes
{
    BOOL _showsBottomBarWithTitleView;
    BOOL _showsActionsheetFromRect;
    BOOL _useSlidingModal;
    BOOL _canAutoPin;
    BOOL _shouldUpdateStatusBar;
    BOOL _shouldCloseRepinModel;
    float _openAppLinkViewHeight;
    float _bottomBarHeight;
    float _loadingViewHeight;
}

+ (void)load;
@property(nonatomic) BOOL shouldCloseRepinModel; // @synthesize shouldCloseRepinModel=_shouldCloseRepinModel;
@property(nonatomic) BOOL shouldUpdateStatusBar; // @synthesize shouldUpdateStatusBar=_shouldUpdateStatusBar;
@property(nonatomic) BOOL canAutoPin; // @synthesize canAutoPin=_canAutoPin;
@property(nonatomic) BOOL useSlidingModal; // @synthesize useSlidingModal=_useSlidingModal;
@property(nonatomic) BOOL showsActionsheetFromRect; // @synthesize showsActionsheetFromRect=_showsActionsheetFromRect;
@property(nonatomic) float loadingViewHeight; // @synthesize loadingViewHeight=_loadingViewHeight;
@property(nonatomic) float bottomBarHeight; // @synthesize bottomBarHeight=_bottomBarHeight;
@property(nonatomic) BOOL showsBottomBarWithTitleView; // @synthesize showsBottomBarWithTitleView=_showsBottomBarWithTitleView;
@property(nonatomic) float openAppLinkViewHeight; // @synthesize openAppLinkViewHeight=_openAppLinkViewHeight;
- (id)initWithTraitCollection:(id)arg1;

@end

