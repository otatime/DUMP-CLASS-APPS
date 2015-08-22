//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IOSArray.h"

@interface IOSDoubleArray : IOSArray
{
    double buffer_[0];
}

+ (id)iosClass;
+ (id)arrayWithDoubles:(const double *)arg1 count:(unsigned int)arg2;
+ (id)newArrayWithDoubles:(const double *)arg1 count:(unsigned int)arg2;
+ (id)arrayWithLength:(unsigned int)arg1;
+ (id)newArrayWithLength:(unsigned int)arg1;
- (id)descriptionOfElementAtIndex:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)arraycopy:(int)arg1 destination:(id)arg2 dstOffset:(int)arg3 length:(int)arg4;
- (id)elementType;
- (void *)buffer;
- (void)getDoubles:(double *)arg1 length:(unsigned int)arg2;
- (double)replaceDoubleAtIndex:(unsigned int)arg1 withDouble:(double)arg2;
- (double *)doubleRefAtIndex:(unsigned int)arg1;
- (double)doubleAtIndex:(unsigned int)arg1;

@end
