//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBJewelContainer.h"

@class FBJewelBar, FBJewelButton, NSString, UIButton;

@interface FBNavigationLeftView : UIView <FBJewelContainer>
{
    BOOL _compactLayout;
    UIButton *_leftButton;
    FBJewelBar *_jewelBar;
}

@property(nonatomic) BOOL compactLayout; // @synthesize compactLayout=_compactLayout;
@property(retain, nonatomic) FBJewelBar *jewelBar; // @synthesize jewelBar=_jewelBar;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
- (void).cxx_destruct;
- (float)jewelXOrigin;
@property(readonly, nonatomic) FBJewelButton *notificationsButton;
@property(readonly, nonatomic) FBJewelButton *messagesButton;
@property(readonly, nonatomic) FBJewelButton *groupsButton;
@property(readonly, nonatomic) FBJewelButton *friendRequestsButton;
- (id)jewelButtonForJewelType:(int)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithLeftButton:(id)arg1 configuration:(struct FBJewelBarConfiguration)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
