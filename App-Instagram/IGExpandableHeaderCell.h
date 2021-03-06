//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTableViewCell.h"

@class IGProfilePictureImageView, UIView;

@interface IGExpandableHeaderCell : IGTableViewCell
{
    BOOL _expanded;
    IGProfilePictureImageView *_profilePictureView;
    UIView *_triangleIndicator;
    UIView *_bottomLineView;
    UIView *_downArrow;
}

@property(retain, nonatomic) UIView *downArrow; // @synthesize downArrow=_downArrow;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *triangleIndicator; // @synthesize triangleIndicator=_triangleIndicator;
@property(retain, nonatomic) IGProfilePictureImageView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

