//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonCollectMapDifference_ValueDifference.h"

@class NSString;

@interface ComGoogleCommonCollectMaps_ValueDifferenceImpl : NSObject <ComGoogleCommonCollectMapDifference_ValueDifference>
{
    id left_;
    id right_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_equalsWithId__params;
+ (id)__annotations_initWithId_withId__params;
+ (id)__annotations_createWithId_withId__params;
+ (id)createWithId:(id)arg1 withId:(id)arg2;
- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)rightValue;
- (id)leftValue;
- (id)initWithId:(id)arg1 withId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
