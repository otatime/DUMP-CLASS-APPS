//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AndroidUtilBase64_Coder.h"

@class IOSIntArray;

@interface AndroidUtilBase64_Decoder : AndroidUtilBase64_Coder
{
    int state_;
    int value_;
    IOSIntArray *alphabet_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (BOOL)processWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4;
- (int)maxOutputSizeWithInt:(int)arg1;
- (id)initWithInt:(int)arg1 withByteArray:(id)arg2;

@end

