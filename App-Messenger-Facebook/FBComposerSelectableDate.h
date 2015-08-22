//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBComposerEventDate;

@interface FBComposerSelectableDate : FBValueObject <NSCopying, NSCoding>
{
    FBComposerEventDate *_eventStartDate;
    FBComposerEventDate *_eventEndDate;
    FBComposerEventDate *_earliestDateAllowed;
}

@property(readonly, copy, nonatomic) FBComposerEventDate *earliestDateAllowed; // @synthesize earliestDateAllowed=_earliestDateAllowed;
@property(readonly, copy, nonatomic) FBComposerEventDate *eventEndDate; // @synthesize eventEndDate=_eventEndDate;
@property(readonly, copy, nonatomic) FBComposerEventDate *eventStartDate; // @synthesize eventStartDate=_eventStartDate;
- (void).cxx_destruct;
- (id)initWithEventStartDate:(id)arg1 eventEndDate:(id)arg2 earliestDateAllowed:(id)arg3;

@end

