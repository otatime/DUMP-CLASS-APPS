//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBFriendRequestTabExperimentContext : FBExperimentContext
{
    BOOL _newRequestTabEnabled;
    BOOL _hscrollPYMKEnabled;
    BOOL _hscrollPYMKDualButtonEnabled;
    BOOL _hscrollPYMKSeeAllCellEnabled;
    BOOL _hscrollPYMKUseSmallCard;
    BOOL _seemoreButtonDisabled;
    BOOL _swapRequestAndPYMKSections;
    BOOL _contactsSyncEnable;
    BOOL _newHeaderStyleEnabled;
    BOOL _showFriendList;
    BOOL _floatingButtonEnabled;
    BOOL _friendListEnabled;
    BOOL _listPYMKXoutEnabled;
    BOOL _textInstructionEnabled;
    BOOL _dynamicSwapRequestAndPYMKSections;
    BOOL _requestsSeeMoreButtonRedirect;
    BOOL _replaceRequestComponentAfterAccept;
    BOOL _caspianRedesignEnabled;
    unsigned int _initialShownCount;
    unsigned int _initialMaximumShownCount;
    unsigned int _incrementalShownCount;
    unsigned int _numOfFriendsInList;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL caspianRedesignEnabled; // @synthesize caspianRedesignEnabled=_caspianRedesignEnabled;
@property(readonly, nonatomic) BOOL replaceRequestComponentAfterAccept; // @synthesize replaceRequestComponentAfterAccept=_replaceRequestComponentAfterAccept;
@property(readonly, nonatomic) BOOL requestsSeeMoreButtonRedirect; // @synthesize requestsSeeMoreButtonRedirect=_requestsSeeMoreButtonRedirect;
@property(readonly, nonatomic) BOOL dynamicSwapRequestAndPYMKSections; // @synthesize dynamicSwapRequestAndPYMKSections=_dynamicSwapRequestAndPYMKSections;
@property(readonly, nonatomic) BOOL textInstructionEnabled; // @synthesize textInstructionEnabled=_textInstructionEnabled;
@property(readonly, nonatomic) BOOL listPYMKXoutEnabled; // @synthesize listPYMKXoutEnabled=_listPYMKXoutEnabled;
@property(readonly, nonatomic) unsigned int numOfFriendsInList; // @synthesize numOfFriendsInList=_numOfFriendsInList;
@property(readonly, nonatomic) BOOL friendListEnabled; // @synthesize friendListEnabled=_friendListEnabled;
@property(readonly, nonatomic) BOOL floatingButtonEnabled; // @synthesize floatingButtonEnabled=_floatingButtonEnabled;
@property(readonly, nonatomic) BOOL showFriendList; // @synthesize showFriendList=_showFriendList;
@property(readonly, nonatomic) BOOL newHeaderStyleEnabled; // @synthesize newHeaderStyleEnabled=_newHeaderStyleEnabled;
@property(readonly, nonatomic) BOOL contactsSyncEnable; // @synthesize contactsSyncEnable=_contactsSyncEnable;
@property(readonly, nonatomic) BOOL swapRequestAndPYMKSections; // @synthesize swapRequestAndPYMKSections=_swapRequestAndPYMKSections;
@property(readonly, nonatomic) BOOL seemoreButtonDisabled; // @synthesize seemoreButtonDisabled=_seemoreButtonDisabled;
@property(readonly, nonatomic) BOOL hscrollPYMKUseSmallCard; // @synthesize hscrollPYMKUseSmallCard=_hscrollPYMKUseSmallCard;
@property(readonly, nonatomic) BOOL hscrollPYMKSeeAllCellEnabled; // @synthesize hscrollPYMKSeeAllCellEnabled=_hscrollPYMKSeeAllCellEnabled;
@property(readonly, nonatomic) BOOL hscrollPYMKDualButtonEnabled; // @synthesize hscrollPYMKDualButtonEnabled=_hscrollPYMKDualButtonEnabled;
@property(readonly, nonatomic) BOOL hscrollPYMKEnabled; // @synthesize hscrollPYMKEnabled=_hscrollPYMKEnabled;
@property(readonly, nonatomic) unsigned int incrementalShownCount; // @synthesize incrementalShownCount=_incrementalShownCount;
@property(readonly, nonatomic) unsigned int initialMaximumShownCount; // @synthesize initialMaximumShownCount=_initialMaximumShownCount;
@property(readonly, nonatomic) unsigned int initialShownCount; // @synthesize initialShownCount=_initialShownCount;
@property(readonly, nonatomic) BOOL newRequestTabEnabled; // @synthesize newRequestTabEnabled=_newRequestTabEnabled;

@end
