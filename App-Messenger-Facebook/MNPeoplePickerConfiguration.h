//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSArray;

@interface MNPeoplePickerConfiguration : FBValueObject <NSCopying>
{
    BOOL _enableGroupSearch;
    BOOL _enableCommerceSearch;
    BOOL _showAlreadyLeftGroups;
    BOOL _singlePickMode;
    BOOL _enableServerSearch;
    NSArray *_pickedUsers;
    NSArray *_excludedUserIds;
    NSArray *_excludedThreadsFbIds;
    NSArray *_permanentPickedUserIds;
    unsigned int _maxUserSelection;
}

@property(readonly, nonatomic) unsigned int maxUserSelection; // @synthesize maxUserSelection=_maxUserSelection;
@property(readonly, nonatomic) BOOL enableServerSearch; // @synthesize enableServerSearch=_enableServerSearch;
@property(readonly, nonatomic) BOOL singlePickMode; // @synthesize singlePickMode=_singlePickMode;
@property(readonly, nonatomic) BOOL showAlreadyLeftGroups; // @synthesize showAlreadyLeftGroups=_showAlreadyLeftGroups;
@property(readonly, nonatomic) BOOL enableCommerceSearch; // @synthesize enableCommerceSearch=_enableCommerceSearch;
@property(readonly, nonatomic) BOOL enableGroupSearch; // @synthesize enableGroupSearch=_enableGroupSearch;
@property(readonly, copy, nonatomic) NSArray *permanentPickedUserIds; // @synthesize permanentPickedUserIds=_permanentPickedUserIds;
@property(readonly, copy, nonatomic) NSArray *excludedThreadsFbIds; // @synthesize excludedThreadsFbIds=_excludedThreadsFbIds;
@property(readonly, copy, nonatomic) NSArray *excludedUserIds; // @synthesize excludedUserIds=_excludedUserIds;
@property(readonly, copy, nonatomic) NSArray *pickedUsers; // @synthesize pickedUsers=_pickedUsers;
- (void).cxx_destruct;
- (id)initWithPickedUsers:(id)arg1 excludedUserIds:(id)arg2 excludedThreadsFbIds:(id)arg3 permanentPickedUserIds:(id)arg4 enableGroupSearch:(BOOL)arg5 enableCommerceSearch:(BOOL)arg6 showAlreadyLeftGroups:(BOOL)arg7 singlePickMode:(BOOL)arg8 enableServerSearch:(BOOL)arg9 maxUserSelection:(unsigned int)arg10;

@end

