//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, UIColor;

@protocol ASDisplayNodeViewProperties
@property(copy, nonatomic) NSString *accessibilityIdentifier;
@property(nonatomic, getter=asyncdisplaykit_isAsyncTransactionContainer, setter=asyncdisplaykit_setAsyncTransactionContainer:) BOOL asyncdisplaykit_asyncTransactionContainer;
@property(nonatomic, getter=isExclusiveTouch) BOOL exclusiveTouch;
@property(nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property(nonatomic) int contentMode;
@property(nonatomic) struct CGRect bounds;
@property(nonatomic) float alpha;
@property(retain, nonatomic) UIColor *tintColor;
@property(nonatomic) unsigned int autoresizingMask;
@property(nonatomic) BOOL autoresizesSubviews;
@property(nonatomic, getter=isHidden) BOOL hidden;
@property(nonatomic) BOOL clipsToBounds;
@end

