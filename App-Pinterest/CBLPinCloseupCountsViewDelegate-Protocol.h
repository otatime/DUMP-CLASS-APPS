//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLPinCloseupCountsView, NSURL;

@protocol CBLPinCloseupCountsViewDelegate <NSObject>
- (void)pinCloseupCountsViewTappedRepins:(CBLPinCloseupCountsView *)arg1;
- (void)pinCloseupCountsViewTappedLikes:(CBLPinCloseupCountsView *)arg1;
- (void)pinCloseupCountsViewTappedComments:(CBLPinCloseupCountsView *)arg1;
- (void)pinCloseupCountsView:(CBLPinCloseupCountsView *)arg1 didTapURL:(NSURL *)arg2;
@end

