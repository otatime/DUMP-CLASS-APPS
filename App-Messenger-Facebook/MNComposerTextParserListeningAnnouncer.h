//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "MNComposerTextParserListening.h"

@class NSString;

@interface MNComposerTextParserListeningAnnouncer : FBAnnouncerBase <MNComposerTextParserListening>
{
}

- (void)didParseImplicitTriggerQueries:(id)arg1;
- (void)didParseTrendingQuery;
- (void)didParseEmptyQuery;
- (void)didParseHashtagQuery:(id)arg1;
- (void)didParseStickerTriggerQuery:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

