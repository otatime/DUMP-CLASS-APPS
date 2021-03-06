//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIScrollViewDelegate.h"

@class ChatContainerViewController, NSMutableArray, NSString;

@interface AHCTabBarScrollManager : NSObject <UIScrollViewDelegate>
{
    BOOL _coordinateSystemFlipped;
    BOOL _initialScrollingComplete;
    ChatContainerViewController *_containerViewController;
    unsigned int _lastScrollDragState;
    float _previousScrollViewVOffset;
    unsigned int _scrollState;
    unsigned int _lastScrollState;
    NSMutableArray *_dragAccumulator;
}

@property(retain, nonatomic) NSMutableArray *dragAccumulator; // @synthesize dragAccumulator=_dragAccumulator;
@property(nonatomic) unsigned int lastScrollState; // @synthesize lastScrollState=_lastScrollState;
@property(nonatomic) unsigned int scrollState; // @synthesize scrollState=_scrollState;
@property(nonatomic) float previousScrollViewVOffset; // @synthesize previousScrollViewVOffset=_previousScrollViewVOffset;
@property(nonatomic, getter=isInitialScrollingComplete) BOOL initialScrollingComplete; // @synthesize initialScrollingComplete=_initialScrollingComplete;
@property(nonatomic, getter=isCoordinateSystemFlipped) BOOL coordinateSystemFlipped; // @synthesize coordinateSystemFlipped=_coordinateSystemFlipped;
@property(nonatomic) unsigned int lastScrollDragState; // @synthesize lastScrollDragState=_lastScrollDragState;
@property(nonatomic) __weak ChatContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (unsigned int)targetStateWithRatio:(float)arg1 scrollState:(unsigned int)arg2;
- (void)addToDragAccumulator:(float)arg1;
- (float)filteredDrag;
- (void)childContainerViewScrolledBy:(float)arg1 withState:(unsigned int)arg2;
- (void)viewDidScrollBy:(float)arg1 withScrollState:(unsigned int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

