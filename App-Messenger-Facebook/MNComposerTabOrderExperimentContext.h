//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface MNComposerTabOrderExperimentContext : FBExperimentContext
{
    BOOL _showRecentContentInMoreTab;
    BOOL _showRecentContentTabInComposer;
    BOOL _showP2PInComposer;
    BOOL _showLocationInComposer;
    BOOL _showGIFInComposer;
    BOOL _showGIFInMoreTab;
    BOOL _showExternalLinkInComposer;
    BOOL _showExternalLinkInMoreTab;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)experimentName;
+ (id)parameterConfigurations;
@property(readonly, nonatomic) BOOL showExternalLinkInMoreTab; // @synthesize showExternalLinkInMoreTab=_showExternalLinkInMoreTab;
@property(readonly, nonatomic) BOOL showExternalLinkInComposer; // @synthesize showExternalLinkInComposer=_showExternalLinkInComposer;
@property(readonly, nonatomic) BOOL showGIFInMoreTab; // @synthesize showGIFInMoreTab=_showGIFInMoreTab;
@property(readonly, nonatomic) BOOL showGIFInComposer; // @synthesize showGIFInComposer=_showGIFInComposer;
@property(readonly, nonatomic) BOOL showLocationInComposer; // @synthesize showLocationInComposer=_showLocationInComposer;
@property(readonly, nonatomic) BOOL showP2PInComposer; // @synthesize showP2PInComposer=_showP2PInComposer;
@property(readonly, nonatomic) BOOL showRecentContentTabInComposer; // @synthesize showRecentContentTabInComposer=_showRecentContentTabInComposer;
@property(readonly, nonatomic) BOOL showRecentContentInMoreTab; // @synthesize showRecentContentInMoreTab=_showRecentContentInMoreTab;

@end

