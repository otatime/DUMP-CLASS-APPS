//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopServicesClustersBigTopCluster, JavaLangLong, NSString;

@interface ComGoogleAppsBigtopDataItemsStorageClusterEntry : NSObject
{
    NSString *permServerId_;
    JavaLangLong *rowId_;
    ComGoogleAppsBigtopServicesClustersBigTopCluster *cluster_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_rowId_;
+ (id)__annotations_getRowId;
+ (id)__annotations_initWithNSString_withJavaLangLong_withComGoogleAppsBigtopServicesClustersBigTopCluster__params;
+ (void)initialize;
+ (id)fromBigTopClusterAndRowIdWithComGoogleAppsBigtopServicesClustersBigTopCluster:(id)arg1 withJavaLangLong:(id)arg2;
+ (id)fromBigTopClusterWithComGoogleAppsBigtopServicesClustersBigTopCluster:(id)arg1;
- (void)dealloc;
- (id)getRowId;
- (id)getPermServerId;
- (id)getCluster;
- (id)initWithNSString:(id)arg1 withJavaLangLong:(id)arg2 withComGoogleAppsBigtopServicesClustersBigTopCluster:(id)arg3;

@end
