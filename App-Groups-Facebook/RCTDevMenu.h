//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RCTDevMenu : NSObject
{
    BOOL _shakeToShow;
    BOOL _profilingEnabled;
    BOOL _liveReloadEnabled;
    BOOL _showFPS;
}

@property(nonatomic) BOOL showFPS; // @synthesize showFPS=_showFPS;
@property(nonatomic) BOOL liveReloadEnabled; // @synthesize liveReloadEnabled=_liveReloadEnabled;
@property(nonatomic) BOOL profilingEnabled; // @synthesize profilingEnabled=_profilingEnabled;
@property(nonatomic) BOOL shakeToShow; // @synthesize shakeToShow=_shakeToShow;
- (void)addItem:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)reload;
- (void)show;

@end
