//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CKCompositeComponent.h"

#import "FBHScrollImpressionLogging.h"

@class FBSearchComponentModel, FBSearchResultsContext;

@interface FBSearchResultsLinkComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    FBSearchComponentModel *_linkEdgeModel;
    FBSearchResultsContext *_context;
    SEL _tapAction;
    struct FBSearchResultsLinkComponentStyle _style;
}

+ (id)newWithLinkEdgeModel:(id)arg1 context:(id)arg2 tapAction:(SEL)arg3 style:(struct FBSearchResultsLinkComponentStyle)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didTap;

@end
