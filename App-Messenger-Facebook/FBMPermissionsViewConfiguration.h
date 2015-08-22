//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface FBMPermissionsViewConfiguration : FBValueObject <NSCopying>
{
    BOOL _showDismissButton;
    NSString *_iconName;
    NSString *_title;
    NSString *_descriptionText;
    NSString *_buttonTitle;
}

@property(readonly, nonatomic) BOOL showDismissButton; // @synthesize showDismissButton=_showDismissButton;
@property(readonly, copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
- (void).cxx_destruct;
- (id)initWithIconName:(id)arg1 title:(id)arg2 descriptionText:(id)arg3 buttonTitle:(id)arg4 showDismissButton:(BOOL)arg5;

@end

