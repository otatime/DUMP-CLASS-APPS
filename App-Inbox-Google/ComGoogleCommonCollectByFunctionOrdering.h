//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectOrdering.h"

#import "JavaIoSerializable.h"

@class NSString;

@interface ComGoogleCommonCollectByFunctionOrdering : ComGoogleCommonCollectOrdering <JavaIoSerializable>
{
    id <ComGoogleCommonBaseFunction> function_;
    ComGoogleCommonCollectOrdering *ordering_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_equalsWithId__params;
- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (int)compareWithId:(id)arg1 withId:(id)arg2;
- (id)initWithComGoogleCommonBaseFunction:(id)arg1 withComGoogleCommonCollectOrdering:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

