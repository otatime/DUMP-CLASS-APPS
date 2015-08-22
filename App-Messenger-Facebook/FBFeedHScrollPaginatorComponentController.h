//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKComponentController.h"

@interface FBFeedHScrollPaginatorComponentController : CKComponentController
{
    unsigned int _currentDotIndex;
    BOOL _showLeftArrow;
    BOOL _showRightArrow;
}

- (void)updateArrowsWithShowLeftArrow:(BOOL)arg1 showRightArrow:(BOOL)arg2 shouldPulseArrow:(BOOL)arg3;
- (void)updateDotsWithCurrentDotIndex:(unsigned int)arg1;
- (void)updatePaginatorWithCurrentDotIndex:(unsigned int)arg1 showLeftArrow:(BOOL)arg2 showRightArrow:(BOOL)arg3 shouldPulseArrow:(BOOL)arg4;
- (void)didUpdateComponent;
- (void)didRemount;
- (void)didMount;

@end
