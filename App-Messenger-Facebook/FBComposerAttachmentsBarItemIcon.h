//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIColor;

@interface FBComposerAttachmentsBarItemIcon : NSObject <NSCopying>
{
    unsigned int _subtype;
    unsigned int _glyph_glyphName;
    UIColor *_glyph_glyphColor;
}

+ (id)none;
+ (id)glyphWithGlyphName:(unsigned int)arg1 glyphColor:(id)arg2;
- (void).cxx_destruct;
- (void)matchNone:(CDUnknownBlockType)arg1 glyph:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

