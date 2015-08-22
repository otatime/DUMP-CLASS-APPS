//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary;

@interface PSPDFFontFileDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_fontFileDict;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *fontFileDict; // @synthesize fontFileDict=_fontFileDict;
- (void).cxx_destruct;
- (void)setBoxedFontFileDict:(id)arg1;
- (id)boxedFontFileDict;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned short)characterForCharacterName:(id)arg1;
- (void)parseFontInfoString:(id)arg1;
- (unsigned int)count;
- (id)initWithStream:(id)arg1;

@end
