//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNMessagesNuxConfiguration;

@protocol MNMessagesNuxView <NSObject>
@property(readonly, nonatomic) double showAnimationDelay;
@property(copy, nonatomic) MNMessagesNuxConfiguration *configuration;
@property(nonatomic) __weak id <MNMessagesNuxViewDelegate> delegate;
- (struct CGSize)sizeThatFitsWithMaxSize:(struct CGSize)arg1;
- (void)viewDidDisappear;
- (void)viewDidAppear;
@end

