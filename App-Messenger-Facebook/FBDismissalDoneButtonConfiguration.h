//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class UIFont;

@interface FBDismissalDoneButtonConfiguration : FBValueObject <NSCopying>
{
    float _verticalPadding;
    UIFont *_font;
}

@property(readonly, copy, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) float verticalPadding; // @synthesize verticalPadding=_verticalPadding;
- (void).cxx_destruct;
- (id)initWithVerticalPadding:(float)arg1 font:(id)arg2;

@end
