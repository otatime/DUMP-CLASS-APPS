//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class UIActivityIndicatorView, UIImage, UIImageView;

@interface FBImageSearchCollectionFooterView : UICollectionReusableView
{
    UIImageView *_imageView;
    UIActivityIndicatorView *_activityIndicatorView;
    BOOL _showsActivityIndicator;
    UIImage *_footerImage;
}

@property(nonatomic) BOOL showsActivityIndicator; // @synthesize showsActivityIndicator=_showsActivityIndicator;
@property(retain, nonatomic) UIImage *footerImage; // @synthesize footerImage=_footerImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
