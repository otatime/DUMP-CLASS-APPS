//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRDirectoryTree, NSFileHandle, NSMutableArray, NSString;

@interface CRBreadcrumbsArchive : NSObject
{
    NSMutableArray *_breadcrumbs;
    CRDirectoryTree *_directoryTree;
    NSString *_nameDirectory;
    NSFileHandle *_fileHandle;
    NSString *_path0;
    NSString *_path1;
    unsigned int _max;
    unsigned int _breadcrumbCount;
}

@property(nonatomic) unsigned int breadcrumbCount; // @synthesize breadcrumbCount=_breadcrumbCount;
@property(nonatomic) unsigned int max; // @synthesize max=_max;
@property(copy, nonatomic) NSString *path1; // @synthesize path1=_path1;
@property(copy, nonatomic) NSString *path0; // @synthesize path0=_path0;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(copy, nonatomic) NSString *nameDirectory; // @synthesize nameDirectory=_nameDirectory;
@property(nonatomic) __weak CRDirectoryTree *directoryTree; // @synthesize directoryTree=_directoryTree;
@property(retain, nonatomic) NSMutableArray *breadcrumbs; // @synthesize breadcrumbs=_breadcrumbs;
- (void).cxx_destruct;
- (unsigned int)_getBreadcrumbCount;
- (id)readBreadcrumbs;
- (void)saveBreadcrumbs;
- (void)clearBreadcrumbs;
- (void)readBreadcrumbsFromFile:(id)arg1 intoArray:(id)arg2;
- (BOOL)isPlausibleBreadcrumb:(id)arg1;
- (id)recentBreadcrumbs;
- (void)addBreadcrumb:(int)arg1 withObject:(id)arg2;
- (void)addBreadcrumb:(int)arg1 withObject:(id)arg2 withTimestamp:(id)arg3;
- (void)addBreadcrumbToFile:(id)arg1;
- (void)addBreadcrumbOpenFile:(id)arg1;
- (void)addBreadcrumbShuffleFiles;
- (void)addBreadcrumbToArray:(id)arg1;
- (id)initWithName:(id)arg1 maxBreadcrumbCount:(unsigned int)arg2 forPurpose:(id)arg3;

@end

