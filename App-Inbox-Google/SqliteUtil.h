//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SqliteUtil : NSObject
{
}

+ (id)applicationDirectory;
+ (id)sqliteDatabaseDirectoryForEmailAddress:(id)arg1;
+ (void)removeAllSqliteDatabases;
+ (BOOL)sqliteDatabaseExistsForEmailAddress:(id)arg1;
+ (void)removeSqliteDatabaseForEmailAddress:(id)arg1;
+ (id)sqliteDatabaseFilenameForEmailAddress:(id)arg1;

@end
