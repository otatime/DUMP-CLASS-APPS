//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLCollectionViewCell.h"

@class CBLUser, UIImageView, UITapGestureRecognizer;

@interface CBLPinnerTile : CBLCollectionViewCell
{
    BOOL _navigateToPinnerOnTap;
    CBLUser *_pinner;
    int _componentType;
    UIImageView *_imageView;
    UITapGestureRecognizer *_recognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) int componentType; // @synthesize componentType=_componentType;
@property(nonatomic) BOOL navigateToPinnerOnTap; // @synthesize navigateToPinnerOnTap=_navigateToPinnerOnTap;
@property(retain, nonatomic) CBLUser *pinner; // @synthesize pinner=_pinner;
- (void).cxx_destruct;
- (void)tapped:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

