//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsXplatSqlSqlExp, ComGoogleAppsXplatSqlSqlTableDef, ComGoogleCommonCollectImmutableList;

@interface ComGoogleAppsXplatSqlSqlUpdate_Builder : NSObject
{
    ComGoogleAppsXplatSqlSqlTableDef *table_;
    ComGoogleCommonCollectImmutableList *columns_;
    ComGoogleCommonCollectImmutableList *values_;
    ComGoogleAppsXplatSqlSqlExp *where_;
    ComGoogleCommonCollectImmutableList *allParams_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_allParams_;
+ (id)__annotations_where_;
- (void)dealloc;
- (id)build;
- (id)whereWithComGoogleAppsXplatSqlSqlExp:(id)arg1;
- (id)valuesWithComGoogleAppsXplatSqlSqlExpArray:(id)arg1;
- (id)columnsWithJavaUtilList:(id)arg1;
- (id)columnsWithComGoogleAppsXplatSqlSqlColumnDefArray:(id)arg1;
- (id)tableWithComGoogleAppsXplatSqlSqlTableDef:(id)arg1;
- (id)init;

@end
