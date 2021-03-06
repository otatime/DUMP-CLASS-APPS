//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class FBAuthUserInfo;

@interface FBAuthStoredUser : FBValueObject <NSCopying>
{
    unsigned int _userType;
    FBAuthUserInfo *_userInfo;
}

@property(readonly, copy, nonatomic) FBAuthUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) unsigned int userType; // @synthesize userType=_userType;
- (void).cxx_destruct;
- (id)initWithUserType:(unsigned int)arg1 userInfo:(id)arg2;

@end

