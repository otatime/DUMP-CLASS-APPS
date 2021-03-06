//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CacheableHeightForNugget.h"

@class SmartMailInteractionForwarder, UIButton;

@interface TaskAssistView : UIView <CacheableHeightForNugget>
{
    id <JavaUtilList> smartMailComponents_;
    UIView *assistView_;
    UIButton *disclosureButton_;
    UIButton *dismissButton_;
    SmartMailInteractionForwarder *forwarder_;
    BOOL canDismiss_;
}

+ (id)getFirstActionWithType:(id)arg1 fromActions:(id)arg2;
+ (float)heightWithActionsOnlyComponent:(id)arg1 item:(id)arg2;
+ (BOOL)shouldShowSuggestedSnoozeForItem:(id)arg1 withAction:(id)arg2;
+ (BOOL)canHandleActionType:(id)arg1;
+ (BOOL)isCreateEventAction:(id)arg1;
+ (BOOL)hasCacheableHeightForNugget:(id)arg1;
+ (BOOL)hasCacheableHeightForSmartmailComponent:(id)arg1;
+ (float)heightWithSmartMailComponents:(id)arg1 item:(id)arg2;
+ (void)initialize;
@property(nonatomic) BOOL canDismiss; // @synthesize canDismiss=canDismiss_;
- (void).cxx_destruct;
- (void)dismissButtonTapped;
- (void)disclosureButtonTapped;
- (void)updateWithWeather:(id)arg1;
- (void)updateWithVideo:(id)arg1;
- (void)updateWithStock:(id)arg1;
- (void)updateWithReturnableProduct:(id)arg1;
- (void)updateWithPerson:(id)arg1;
- (void)updateWithOrganization:(id)arg1;
- (void)updateWithFlight:(id)arg1;
- (void)updateWithArticle:(id)arg1;
- (void)updateWithDeadlineEvent:(id)arg1;
- (void)updateWithBill:(id)arg1;
- (void)updateWithActionsOnly:(id)arg1 andItem:(id)arg2;
- (void)updateWithPickContactAction:(id)arg1 andItem:(id)arg2;
- (void)updateWithSnoozeAction:(id)arg1 andItem:(id)arg2;
- (void)updateWithEventAction:(id)arg1;
- (id)cardViewWithSmartMailComponent:(id)arg1;
- (void)prepareForReuse;
- (void)updateWithSmartMailComponents:(id)arg1 item:(id)arg2;
- (BOOL)shouldExpandTapTarget;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <SmartMailInteractionSupport> smartMailDelegate; // @dynamic smartMailDelegate;

@end

