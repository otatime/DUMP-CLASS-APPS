//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableAttributedString.h"

@interface NSMutableAttributedString (NimbusAttributedLabel)
+ (int)lineBreakModeFromCTLineBreakMode:(unsigned char)arg1;
- (void)setKern:(float)arg1;
- (void)setKern:(float)arg1 range:(struct _NSRange)arg2;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)setStrokeWidth:(float)arg1;
- (void)setStrokeWidth:(float)arg1 range:(struct _NSRange)arg2;
- (void)setUnderlineStyle:(int)arg1 modifier:(int)arg2;
- (void)setUnderlineStyle:(int)arg1 modifier:(int)arg2 range:(struct _NSRange)arg3;
- (void)setFont:(id)arg1;
- (void)setFont:(id)arg1 range:(struct _NSRange)arg2;
- (void)setTextColor:(id)arg1;
- (void)setTextColor:(id)arg1 range:(struct _NSRange)arg2;
- (void)setTextAlignment:(unsigned char)arg1 lineBreakMode:(unsigned char)arg2 lineHeight:(float)arg3;
- (void)setTextAlignment:(unsigned char)arg1 lineBreakMode:(unsigned char)arg2 lineHeight:(float)arg3 range:(struct _NSRange)arg4;
@end

