//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (FBBase)
+ (id)keyPathWithComponents:(id)arg1;
+ (BOOL)isNilOrWhiteSpace:(id)arg1;
- (id)stringByRemovingWhitespacesAndEmptyLines;
- (unsigned int)fb_countCharactersInSet:(id)arg1;
- (BOOL)fb_convertCodePointRange:(struct _NSRange)arg1 toNSStringRange:(struct _NSRange *)arg2;
- (BOOL)fb_convertCodePointRanges:(struct _NSRange *)arg1 toNSStringRanges:(struct _NSRange *)arg2 countOfRanges:(unsigned int)arg3;
- (id)stringByTrimmingLeadingWhitepsace;
- (id)newStringByTrimmingWhitespace;
- (id)stringTruncatedToLength:(unsigned int)arg1 maxLength:(unsigned int)arg2;
- (id)stringTruncatedToLength:(unsigned int)arg1;
- (id)lowercaseStringForCurrentLocale;
- (id)kanaNormalizedString;
- (unsigned int)unsignedIntegerValue;
- (id)sha1HexDigest;
- (id)md5HexDigest;
- (BOOL)isNilOrWhiteSpace;
@end
