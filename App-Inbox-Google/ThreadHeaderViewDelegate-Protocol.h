//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SmartMailThreadHeaderDelegate.h"

@class NSString, ThreadHeaderView;

@protocol ThreadHeaderViewDelegate <SmartMailThreadHeaderDelegate>
- (void)threadHeaderViewDidTapSubject:(ThreadHeaderView *)arg1;
- (void)threadHeaderViewDidTapDismiss:(ThreadHeaderView *)arg1;
- (void)threadHeaderView:(ThreadHeaderView *)arg1 didSelectLink:(NSString *)arg2;
- (void)threadHeaderView:(ThreadHeaderView *)arg1 didSelectEmail:(NSString *)arg2 name:(NSString *)arg3;
- (void)threadHeaderViewEditTaskTapped:(ThreadHeaderView *)arg1;
@end

