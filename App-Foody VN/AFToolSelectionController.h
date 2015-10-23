//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHorizontalSelectionController.h"

#import "AFContentAccessManagerBadgeDelegate.h"

@class NSArray, NSDictionary, NSString, UIColor;

@interface AFToolSelectionController : AFHorizontalSelectionController <AFContentAccessManagerBadgeDelegate>
{
    NSArray *_orderedDataObjects;
    id <AFToolSelectionControllerDelegate> _toolDelegate;
    UIColor *_textColor;
    NSArray *_toolOrder;
    NSDictionary *_toolSettings;
}

+ (float)itemWidth;
@property(copy, nonatomic) NSDictionary *toolSettings; // @synthesize toolSettings=_toolSettings;
@property(copy, nonatomic) NSArray *toolOrder; // @synthesize toolOrder=_toolOrder;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) __weak id <AFToolSelectionControllerDelegate> toolDelegate; // @synthesize toolDelegate=_toolDelegate;
- (void)setOrderedDataObjects:(id)arg1;
- (void).cxx_destruct;
- (void)accessManagerDidUpdateBadgeCount:(id)arg1;
- (void)dataSource:(id)arg1 willVendCollectionViewCell:(id)arg2 atIndexPath:(id)arg3;
- (id)delegateDataObjectForViewDataObject:(id)arg1;
- (id)orderedDataObjects;
- (void)loadView;
- (id)initWithToolSettings:(id)arg1 toolOrder:(id)arg2;
- (id)initWithToolSettings:(id)arg1 toolOrder:(id)arg2 cellClass:(Class)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
