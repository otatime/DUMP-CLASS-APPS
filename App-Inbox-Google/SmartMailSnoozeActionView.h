//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SmartMailSnippetView.h"

@interface SmartMailSnoozeActionView : SmartMailSnippetView
{
    id <JBTItem> item_;
    id <JBTSnoozeConfig> snoozeConfig_;
    id <SmartMailSnoozeActionViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SmartMailSnoozeActionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)linkButtonTapped:(id)arg1;
- (void)createSubviews;
- (void)setSnoozeAction:(id)arg1 withItem:(id)arg2;
- (BOOL)isInteractive;
- (void)prepareForReuse;

@end
