//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface MNMessagingRegionInfo : FBValueObject <NSCopying, NSCoding>
{
    NSString *_messengerRegion;
    NSString *_messengerMQTTRegion;
}

@property(readonly, copy, nonatomic) NSString *messengerMQTTRegion; // @synthesize messengerMQTTRegion=_messengerMQTTRegion;
@property(readonly, copy, nonatomic) NSString *messengerRegion; // @synthesize messengerRegion=_messengerRegion;
- (void).cxx_destruct;
- (id)initWithMessengerRegion:(id)arg1 messengerMQTTRegion:(id)arg2;

@end

