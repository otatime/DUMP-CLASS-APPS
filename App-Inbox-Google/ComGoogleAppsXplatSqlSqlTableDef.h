//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsXplatSqlSqlColumnDef, ComGoogleCommonCollectImmutableList, NSString;

@interface ComGoogleAppsXplatSqlSqlTableDef : NSObject
{
    NSString *name_;
    ComGoogleCommonCollectImmutableList *columns_;
    ComGoogleCommonCollectImmutableList *tableConstraints_;
    ComGoogleCommonCollectImmutableList *indices_;
    ComGoogleAppsXplatSqlSqlColumnDef *autoIncrementingPrimaryKeyColumn_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_autoIncrementingPrimaryKeyColumn_;
+ (id)__annotations_getAutoIncrementingPrimaryKeyColumn;
- (void)dealloc;
- (id)description;
- (id)getForeignKeyConstraints;
- (id)getAutoIncrementingPrimaryKeyColumn;
- (id)getIndices;
- (id)getTableConstraints;
- (id)getName;
- (id)getColumns;
- (id)initWithComGoogleAppsXplatSqlSqlTableDef_Builder:(id)arg1;

@end
