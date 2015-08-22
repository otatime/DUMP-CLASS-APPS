//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CAShapeLayer, NSString, UIImageView, UIView;

@interface FBPlaceAddPlaceTableViewCell : UITableViewCell
{
    UIView *_picView;
    CAShapeLayer *_border;
    UIImageView *_picAddImageView;
    UIView *_seperatorLine;
    NSString *_placeName;
}

+ (float)defaultRowHeight;
@property(copy, nonatomic) NSString *placeName; // @synthesize placeName=_placeName;
- (void).cxx_destruct;
- (void)configureWithQuery:(id)arg1 city:(id)arg2;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
