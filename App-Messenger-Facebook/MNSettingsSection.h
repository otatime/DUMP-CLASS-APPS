//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface MNSettingsSection : FBValueObject <NSCopying>
{
    NSString *_footerText;
    NSArray *_settingsItems;
    NSArray *_settingsItemCallbacks;
    struct _NSRange _linkRange;
}

@property(readonly, nonatomic) struct _NSRange linkRange; // @synthesize linkRange=_linkRange;
@property(readonly, copy, nonatomic) NSArray *settingsItemCallbacks; // @synthesize settingsItemCallbacks=_settingsItemCallbacks;
@property(readonly, copy, nonatomic) NSArray *settingsItems; // @synthesize settingsItems=_settingsItems;
@property(readonly, copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
- (void).cxx_destruct;
- (id)initWithFooterText:(id)arg1 settingsItems:(id)arg2 settingsItemCallbacks:(id)arg3 linkRange:(struct _NSRange)arg4;

@end
