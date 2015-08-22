//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MNMessagesNuxView.h"

@class MNMessagesNuxConfiguration, NSString, UILabel;

@interface MNEmptyThreadNuxView : UIView <MNMessagesNuxView>
{
    id <MNMessagesNuxViewDelegate> _delegate;
    MNMessagesNuxConfiguration *_configuration;
    UILabel *_headerLabel;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(copy, nonatomic) MNMessagesNuxConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <MNMessagesNuxViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleTapGesture;
- (struct CGSize)sizeThatFitsWithMaxSize:(struct CGSize)arg1;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)layoutSubviews;
@property(readonly, nonatomic) double showAnimationDelay;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

