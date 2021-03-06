//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPElement.h"

@interface XMPPPresence : XMPPElement
{
}

+ (id)presenceWithType:(id)arg1 to:(id)arg2;
+ (id)presenceWithType:(id)arg1;
+ (id)presence;
+ (id)presenceFromElement:(id)arg1;
+ (void)initialize;
+ (id)iconImageForUserWithPresenceStatus:(int)arg1 clientStatus:(int)arg2;
+ (id)iconImageNameForUserWithPresenceStatus:(int)arg1 clientStatus:(int)arg2 lightVersion:(BOOL)arg3;
+ (id)iconImageNameForUserWithPresenceStatus:(int)arg1 clientStatus:(int)arg2;
+ (id)unavailableStatusIconNameLightVersion:(BOOL)arg1;
- (BOOL)isErrorPresence;
- (int)intShow;
- (int)priority;
- (id)status;
- (id)show;
- (id)type;
- (id)initWithType:(id)arg1 to:(id)arg2;
- (id)initWithType:(id)arg1;
- (id)init;
@property(readonly, nonatomic) int chatUserPresenceStatus;
@property(readonly, nonatomic) int chatUserClientStatus;
- (id)lightStatusIconName;
- (id)statusIconName;

@end

