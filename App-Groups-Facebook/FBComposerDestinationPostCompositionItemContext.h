//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString, UIColor, UIImage;

@interface FBComposerDestinationPostCompositionItemContext : FBValueObject <NSCopying>
{
    NSString *_title;
    UIColor *_selectedGlyphColor;
    unsigned int _displayType;
    UIImage *_defaultImageForPublishingToPage;
    UIImage *_defaultImageForPublishingToPerson;
}

@property(readonly, copy, nonatomic) UIImage *defaultImageForPublishingToPerson; // @synthesize defaultImageForPublishingToPerson=_defaultImageForPublishingToPerson;
@property(readonly, copy, nonatomic) UIImage *defaultImageForPublishingToPage; // @synthesize defaultImageForPublishingToPage=_defaultImageForPublishingToPage;
@property(readonly, nonatomic) unsigned int displayType; // @synthesize displayType=_displayType;
@property(readonly, copy, nonatomic) UIColor *selectedGlyphColor; // @synthesize selectedGlyphColor=_selectedGlyphColor;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 selectedGlyphColor:(id)arg2 displayType:(unsigned int)arg3 defaultImageForPublishingToPage:(id)arg4 defaultImageForPublishingToPerson:(id)arg5;

@end
