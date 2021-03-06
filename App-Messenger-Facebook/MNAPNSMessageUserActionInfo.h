//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface MNAPNSMessageUserActionInfo : FBValueObject <NSCopying>
{
    BOOL _isLaunchedByUser;
    BOOL _isColdStart;
    NSString *_actionIdentifier;
    NSDictionary *_responseInfo;
}

@property(readonly, nonatomic) BOOL isColdStart; // @synthesize isColdStart=_isColdStart;
@property(readonly, nonatomic) BOOL isLaunchedByUser; // @synthesize isLaunchedByUser=_isLaunchedByUser;
@property(readonly, copy, nonatomic) NSDictionary *responseInfo; // @synthesize responseInfo=_responseInfo;
@property(readonly, copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
- (void).cxx_destruct;
- (id)initWithActionIdentifier:(id)arg1 responseInfo:(id)arg2 isLaunchedByUser:(BOOL)arg3 isColdStart:(BOOL)arg4;

@end

