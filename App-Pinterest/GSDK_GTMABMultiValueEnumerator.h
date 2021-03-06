//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

@class GSDK_GTMABMultiValue;

@interface GSDK_GTMABMultiValueEnumerator : NSEnumerator
{
    const void *ref_;
    GSDK_GTMABMultiValue *enumeree_;
    unsigned long mutations_;
    unsigned int count_;
    unsigned int index_;
    BOOL useLabels_;
}

+ (id)labelEnumeratorFor:(id)arg1;
+ (id)valueEnumeratorFor:(id)arg1;
- (id)nextObject;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)initWithEnumeree:(id)arg1 useLabels:(BOOL)arg2;

@end

