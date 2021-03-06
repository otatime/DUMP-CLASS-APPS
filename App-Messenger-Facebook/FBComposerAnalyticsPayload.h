//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBPublishingAnalyticsPayload, NSDictionary, NSString;

@interface FBComposerAnalyticsPayload : FBValueObject <NSCopying, NSCoding>
{
    NSString *_sourceType;
    NSString *_contentOrigin;
    NSDictionary *_extraDataToIncludeInInitEvent;
    NSDictionary *_extraDataToIncludeInPostEvent;
    FBPublishingAnalyticsPayload *_publishingAnalyticsPayload;
}

@property(readonly, copy, nonatomic) FBPublishingAnalyticsPayload *publishingAnalyticsPayload; // @synthesize publishingAnalyticsPayload=_publishingAnalyticsPayload;
@property(readonly, copy, nonatomic) NSDictionary *extraDataToIncludeInPostEvent; // @synthesize extraDataToIncludeInPostEvent=_extraDataToIncludeInPostEvent;
@property(readonly, copy, nonatomic) NSDictionary *extraDataToIncludeInInitEvent; // @synthesize extraDataToIncludeInInitEvent=_extraDataToIncludeInInitEvent;
@property(readonly, copy, nonatomic) NSString *contentOrigin; // @synthesize contentOrigin=_contentOrigin;
@property(readonly, copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
- (void).cxx_destruct;
- (id)initWithSourceType:(id)arg1 contentOrigin:(id)arg2 extraDataToIncludeInInitEvent:(id)arg3 extraDataToIncludeInPostEvent:(id)arg4 publishingAnalyticsPayload:(id)arg5;

@end

