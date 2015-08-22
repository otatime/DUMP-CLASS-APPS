//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASDisplayNode.h"

@class NSArray;

@interface FBEdgeHighlightsNode : ASDisplayNode
{
    BOOL _showEdgeHighlights;
    ASDisplayNode *_edgeHighlightNodes[4];
    float _edgeHighlightsAlpha[4];
    NSArray *_edgeHighlightColors;
    unsigned int _displayedEdges;
}

@property(nonatomic) unsigned int displayedEdges; // @synthesize displayedEdges=_displayedEdges;
@property(nonatomic) BOOL showEdgeHighlights; // @synthesize showEdgeHighlights=_showEdgeHighlights;
- (void).cxx_destruct;
- (unsigned int)_edgeForIndex:(unsigned int)arg1;
- (void)_updateColorAndAlphaForAllEdges;
- (void)setAlpha:(float)arg1 forEdges:(unsigned int)arg2;
- (void)setEdgeHighlightColor:(id)arg1 forEdges:(unsigned int)arg2;
- (void)_createEdgeHighlightsIfNeeded;
- (void)setDisplayedEdges:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setShowEdgeHighlights:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setMinimorphFactor:(struct _FBMinimorphFactor)arg1;
- (void)_updateEdgeHighlights;
- (void)layout;
- (void)didLoad;
- (id)init;

@end

