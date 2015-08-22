//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLBoard, UIView;

@protocol CBLBoardHeaderViewProtocol <NSObject>
@property(nonatomic) __weak id <CBLBoardHeaderViewDelegate> delegate;
@property(nonatomic) BOOL shouldUpdateBackgroundFrame;
@property(nonatomic) BOOL isPlacesHeader;
@property(retain, nonatomic) CBLBoard *board;
- (UIView *)backgroundView;

@optional
- (void)setPlacesBottomShadowHidden:(BOOL)arg1;
@end

