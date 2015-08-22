//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSearchSuggestionProtocol.h"

@class NSString;

@interface FBSearchTrendingTopicSuggestion : NSObject <FBSearchSuggestionProtocol>
{
    BOOL _isNonCacheable;
    unsigned int _cacheType;
    NSString *_text;
    NSString *_semantic;
    unsigned int _resultType;
    NSString *_fbid;
    NSString *_imageURLString;
    NSString *_relatedArticleTitle;
    NSString *_trendingTopicsQueryID;
    NSString *_uniqueKeyword;
    NSString *_contextPhotoURL;
}

@property(readonly, copy, nonatomic) NSString *contextPhotoURL; // @synthesize contextPhotoURL=_contextPhotoURL;
@property(readonly, copy, nonatomic) NSString *uniqueKeyword; // @synthesize uniqueKeyword=_uniqueKeyword;
@property(readonly, copy, nonatomic) NSString *trendingTopicsQueryID; // @synthesize trendingTopicsQueryID=_trendingTopicsQueryID;
@property(readonly, copy, nonatomic) NSString *relatedArticleTitle; // @synthesize relatedArticleTitle=_relatedArticleTitle;
@property(readonly, copy, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(readonly, copy, nonatomic) NSString *fbid; // @synthesize fbid=_fbid;
@property(readonly, nonatomic) unsigned int resultType; // @synthesize resultType=_resultType;
@property(readonly, copy, nonatomic) NSString *semantic; // @synthesize semantic=_semantic;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) BOOL isNonCacheable; // @synthesize isNonCacheable=_isNonCacheable;
@property(nonatomic) unsigned int cacheType; // @synthesize cacheType=_cacheType;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *suggestionAccessibilityLabel;
- (id)suggestionTypeForLogging;
- (id)initWithText:(id)arg1 fbid:(id)arg2 semantic:(id)arg3 imageURLString:(id)arg4 relatedArticleTitle:(id)arg5 trendingTopicsQueryID:(id)arg6 uniqueKeyword:(id)arg7 contextPhotoURL:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

