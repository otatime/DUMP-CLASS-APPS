//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionViewController.h"

@class CBLNuxNotificationPermissionStepData, NSArray, UIButton, UIImageView, UILabel;

@interface CBLNuxNotificationPromptViewController : CBLTraitCollectionViewController
{
    id <CBLNuxStepDelegate> _delegate;
    UIImageView *_boardImageView;
    UIImageView *_iconsImageView;
    UIImageView *_pinterestMark;
    NSArray *_faceImageViews;
    UIButton *_enableButton;
    UIButton *_skipButton;
    UILabel *_titleLabel;
    CBLNuxNotificationPermissionStepData *_stepData;
}

@property(readonly, nonatomic) CBLNuxNotificationPermissionStepData *stepData; // @synthesize stepData=_stepData;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) UIButton *enableButton; // @synthesize enableButton=_enableButton;
@property(retain, nonatomic) NSArray *faceImageViews; // @synthesize faceImageViews=_faceImageViews;
@property(retain, nonatomic) UIImageView *pinterestMark; // @synthesize pinterestMark=_pinterestMark;
@property(retain, nonatomic) UIImageView *iconsImageView; // @synthesize iconsImageView=_iconsImageView;
@property(retain, nonatomic) UIImageView *boardImageView; // @synthesize boardImageView=_boardImageView;
@property(nonatomic) __weak id <CBLNuxStepDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (id)localLayoutAttributes;
- (void)didTapSkip:(id)arg1;
- (void)permissionDismissed;
- (void)didTapEnable:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)resizeViewForDevice:(struct CGSize)arg1 withMake:(id)arg2;
- (void)viewDidLoad;
- (BOOL)prefersStatusBarHidden;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

