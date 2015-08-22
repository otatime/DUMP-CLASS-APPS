//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseLayoutAttributes.h"

@interface CBLLoginTraitCollectionLayoutAttributes : CBLBaseLayoutAttributes
{
    BOOL _showNavigationBar;
    BOOL _detectKeyboardShowing;
    BOOL _shouldAutorotate;
    BOOL _usesSlidingModal;
    BOOL _shouldAnimateByOrientation;
}

@property(nonatomic) BOOL shouldAnimateByOrientation; // @synthesize shouldAnimateByOrientation=_shouldAnimateByOrientation;
@property(nonatomic) BOOL usesSlidingModal; // @synthesize usesSlidingModal=_usesSlidingModal;
@property(nonatomic) BOOL shouldAutorotate; // @synthesize shouldAutorotate=_shouldAutorotate;
@property(nonatomic) BOOL detectKeyboardShowing; // @synthesize detectKeyboardShowing=_detectKeyboardShowing;
@property(nonatomic) BOOL showNavigationBar; // @synthesize showNavigationBar=_showNavigationBar;
- (id)initWithTraitCollection:(id)arg1;

@end

