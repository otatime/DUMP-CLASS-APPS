//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBFacepileView, MNHitTestSloppyButton, UIButton, UILabel;

@interface MNMomentsAppInstallSheetOverlay : UIView
{
    UILabel *_sentenceLabel;
    FBFacepileView *_facepileView;
    MNHitTestSloppyButton *_closeButton;
}

@property(readonly, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithSession:(id)arg1 titleSentence:(id)arg2 facepileImageURLs:(id)arg3 facepileItemSize:(unsigned int)arg4 facepileItemStyle:(unsigned int)arg5;

@end

