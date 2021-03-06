//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMemGraphSearchQuery, NSString;

@interface FBSearchComponentModel : NSObject
{
    BOOL _isLastRowInSection;
    BOOL _isFirstPostAfterTheEmptyGrammarModule;
    BOOL _showsNoFriendPostsIndicator;
    BOOL _isFirstPublicPost;
    BOOL _isFirstFriendPost;
    BOOL _isFirstPulsePost;
    BOOL _isSeeMoreMedia;
    id _model;
    FBSearchComponentModel *_parentModel;
    int _index;
    unsigned int _publicPostModuleType;
    FBMemGraphSearchQuery *_seeMoreFriendPostQuery;
    NSString *_queryString;
    struct CGSize _size;
}

@property(nonatomic) BOOL isSeeMoreMedia; // @synthesize isSeeMoreMedia=_isSeeMoreMedia;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(retain, nonatomic) FBMemGraphSearchQuery *seeMoreFriendPostQuery; // @synthesize seeMoreFriendPostQuery=_seeMoreFriendPostQuery;
@property(nonatomic) unsigned int publicPostModuleType; // @synthesize publicPostModuleType=_publicPostModuleType;
@property(nonatomic) BOOL isFirstPulsePost; // @synthesize isFirstPulsePost=_isFirstPulsePost;
@property(nonatomic) BOOL isFirstFriendPost; // @synthesize isFirstFriendPost=_isFirstFriendPost;
@property(nonatomic) BOOL isFirstPublicPost; // @synthesize isFirstPublicPost=_isFirstPublicPost;
@property(nonatomic) BOOL showsNoFriendPostsIndicator; // @synthesize showsNoFriendPostsIndicator=_showsNoFriendPostsIndicator;
@property(nonatomic) BOOL isFirstPostAfterTheEmptyGrammarModule; // @synthesize isFirstPostAfterTheEmptyGrammarModule=_isFirstPostAfterTheEmptyGrammarModule;
@property(nonatomic) BOOL isLastRowInSection; // @synthesize isLastRowInSection=_isLastRowInSection;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) int index; // @synthesize index=_index;
@property(readonly, nonatomic) FBSearchComponentModel *parentModel; // @synthesize parentModel=_parentModel;
@property(readonly, nonatomic) id model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1 modelIndex:(int)arg2 parentModel:(id)arg3;
- (id)initWithModel:(id)arg1 modelIndex:(int)arg2;

@end

