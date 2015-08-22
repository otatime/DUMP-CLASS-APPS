//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SearchOneBoxCardObject.h"

@class NSMutableArray, SmartMailInteractionForwarder, UIButton, UIImageView, UILabel;

@interface SearchFactOneBoxCardView : UIView <SearchOneBoxCardObject>
{
    UIView *actionsSeparator_;
    UIImageView *cardBackground_;
    SmartMailInteractionForwarder *forwarder_;
    NSMutableArray *sectionViews_;
    UILabel *subfactText_;
    UILabel *title_;
    UIView *titleBackground_;
    UIButton *viewEmailAction_;
    id <JBTGenericSmartMailLayout> layout_;
}

+ (float)heightWithLayout:(id)arg1 width:(float)arg2;
+ (float)heightForSubtext:(id)arg1 width:(float)arg2;
+ (void)initialize;
@property(retain, nonatomic) id <JBTGenericSmartMailLayout> layout; // @synthesize layout=layout_;
- (void).cxx_destruct;
- (void)buttonViewDidTapButton;
@property(nonatomic) __weak id <SmartMailInteractionSupport> smartMailDelegate;
- (void)titleTapped;
- (void)createSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
