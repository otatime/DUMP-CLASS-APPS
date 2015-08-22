//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIColor, UIImage;

@interface FBTabBarItem : NSObject
{
    BOOL _shouldUseSelectedImage;
    BOOL _disableSwipeActivation;
    NSString *_title;
    UIImage *_image;
    UIImage *_selectedImage;
    UIColor *_backgroundBlockColor;
    UIImage *_backgroundImage;
    UIImage *_selectedBackgroundImage;
    NSString *_badgeValue;
    float _extraBadgeOffsetX;
    UIColor *_unselectedColor;
    NSURL *_imageURL;
    struct UIEdgeInsets _backgroundBlockInsets;
}

@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) UIColor *unselectedColor; // @synthesize unselectedColor=_unselectedColor;
@property(nonatomic) BOOL disableSwipeActivation; // @synthesize disableSwipeActivation=_disableSwipeActivation;
@property(nonatomic) BOOL shouldUseSelectedImage; // @synthesize shouldUseSelectedImage=_shouldUseSelectedImage;
@property(nonatomic) float extraBadgeOffsetX; // @synthesize extraBadgeOffsetX=_extraBadgeOffsetX;
@property(copy, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(retain, nonatomic) UIImage *selectedBackgroundImage; // @synthesize selectedBackgroundImage=_selectedBackgroundImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) struct UIEdgeInsets backgroundBlockInsets; // @synthesize backgroundBlockInsets=_backgroundBlockInsets;
@property(copy, nonatomic) UIColor *backgroundBlockColor; // @synthesize backgroundBlockColor=_backgroundBlockColor;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3 unselectedColor:(id)arg4 backgroundBlockColor:(id)arg5 backgroundBlockInsets:(struct UIEdgeInsets)arg6;
- (id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3;

@end
