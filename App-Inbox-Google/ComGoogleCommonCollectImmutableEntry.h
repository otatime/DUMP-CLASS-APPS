//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractMapEntry.h"

#import "JavaIoSerializable.h"

@class NSString;

@interface ComGoogleCommonCollectImmutableEntry : ComGoogleCommonCollectAbstractMapEntry <JavaIoSerializable>
{
    id key_;
    id value_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getValue;
+ (id)__annotations_getKey;
+ (id)__annotations_initWithId_withId__params;
- (void)dealloc;
- (id)setValueWithId:(id)arg1;
- (id)getValue;
- (id)getKey;
- (id)initWithId:(id)arg1 withId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
