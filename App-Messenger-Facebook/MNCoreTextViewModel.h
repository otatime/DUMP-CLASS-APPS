//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBMStringWithRedactedDescription, UIFontDescriptor;

@interface MNCoreTextViewModel : FBValueObject <NSCopying, NSCoding>
{
    BOOL _alignTextDescenderToBottom;
    FBMStringWithRedactedDescription *_text;
    UIFontDescriptor *_fontDescriptor;
    float _lineSpacing;
}

@property(readonly, nonatomic) BOOL alignTextDescenderToBottom; // @synthesize alignTextDescenderToBottom=_alignTextDescenderToBottom;
@property(readonly, nonatomic) float lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(readonly, copy, nonatomic) UIFontDescriptor *fontDescriptor; // @synthesize fontDescriptor=_fontDescriptor;
@property(readonly, copy, nonatomic) FBMStringWithRedactedDescription *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithText:(id)arg1 fontDescriptor:(id)arg2 lineSpacing:(float)arg3 alignTextDescenderToBottom:(BOOL)arg4;
- (id)font;
- (id)layoutConfigurationWithMaxWidth:(float)arg1;

@end
