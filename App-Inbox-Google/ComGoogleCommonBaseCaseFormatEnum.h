//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaLangEnum.h"

#import "NSCopying.h"

@class ComGoogleCommonBaseCharMatcher, NSString;

@interface ComGoogleCommonBaseCaseFormatEnum : JavaLangEnum <NSCopying>
{
    ComGoogleCommonBaseCharMatcher *wordBoundary_;
    NSString *wordSeparator_;
}

+ (void)initialize;
+ (id)valueOfWithNSString:(id)arg1;
+ (id)values;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)normalizeFirstWordWithNSString:(id)arg1;
- (id)converterToWithComGoogleCommonBaseCaseFormatEnum:(id)arg1;
- (id)convertWithComGoogleCommonBaseCaseFormatEnum:(id)arg1 withNSString:(id)arg2;
- (id)toWithComGoogleCommonBaseCaseFormatEnum:(id)arg1 withNSString:(id)arg2;
- (id)initWithComGoogleCommonBaseCharMatcher:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withInt:(int)arg4;

@end
