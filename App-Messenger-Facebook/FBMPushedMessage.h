//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMMutableMessage.h"

@class NSString;

@interface FBMPushedMessage : FBMMutableMessage
{
    BOOL _hasAttachmentFromPush;
    NSString *_DEPRECATED_fbId;
    unsigned int _pushSource;
    long long _prevLastVisibleActionIdFromPush;
}

@property(nonatomic) unsigned int pushSource; // @synthesize pushSource=_pushSource;
@property(copy, nonatomic) NSString *DEPRECATED_fbId; // @synthesize DEPRECATED_fbId=_DEPRECATED_fbId;
@property(nonatomic) BOOL hasAttachmentFromPush; // @synthesize hasAttachmentFromPush=_hasAttachmentFromPush;
@property(nonatomic) long long prevLastVisibleActionIdFromPush; // @synthesize prevLastVisibleActionIdFromPush=_prevLastVisibleActionIdFromPush;
- (void).cxx_destruct;

@end

